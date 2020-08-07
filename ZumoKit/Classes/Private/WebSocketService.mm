//
//  iOSWebSocket.m
//  ZumoKit
//
//  Created by Ivan Romanovski on 11/04/2019.
//  Copyright © 2019 Zumo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WebSocketService.h"

@implementation WebSocketService

- (instancetype)initWithURL:(NSURL *)url {
    self = [super init];

    if (self) {
        _url = url;
        _backOffGenerator = [[FuzzingBackOffGenerator alloc] initWithInitialBackOff:1 * 1000 maxBackOff:30 * 60 * 1000 randomizationFactor:[NSNumber numberWithFloat:0.5]];
    }

    return self;
}

/**
 Connect or reconnect to the websocket URL provided.
 */
- (void)connect {
    if(_webSocket != nil) {
        _webSocket.delegate = nil;
        [_webSocket close];
    }

    NSLog(@"Connecting to %@", _url.absoluteString);

    _webSocket = [[SRWebSocket alloc] initWithURL:_url];
    _webSocket.delegate = self;

    [_webSocket open];
}

/**
 Disconnect from the websocket URL provided.
 */
- (void)disconnect {
    if(_webSocket == nil) return;

    NSLog(@"Disconnecting from %@", _url.absoluteString);

    _webSocket.delegate = nil;
    [_webSocket close];
    _webSocket = nil;
}

# pragma mark - SRWebSocketDelegate

- (void)webSocketDidOpen:(SRWebSocket *)webSocket {
    [_backOffGenerator reset];
    if(_listener) {
        [_listener onOpen:@"new connection opened"];
    }
}

- (void)webSocket:(SRWebSocket *)webSocket didCloseWithCode:(NSInteger)code reason:(NSString *)reason wasClean:(BOOL)wasClean {
    if(_listener) {
        [_listener onClose:[NSString stringWithFormat:@"closed with exit code %ld additional info: %@", (long) code, reason]];
    }
    WebSocketService * thisWebSocket = self;
    int delayInMilliseconds = [_backOffGenerator next];
    dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInMilliseconds * NSEC_PER_MSEC));
    dispatch_after(popTime, dispatch_get_main_queue(), ^(void){
            NSLog(@"Call reconnect");
            [thisWebSocket connect];
    });
}

- (void)webSocket:(SRWebSocket *)webSocket didReceiveMessage:(id)message {
    if(_listener && [message isKindOfClass:[NSString class]]) {
        [_listener onMessage:message];
    }
}

- (void)webSocket:(SRWebSocket *)webSocket didFailWithError:(NSError *)error {
    if(_listener) {
        [_listener onError:[error localizedDescription]];
    }
    WebSocketService * thisWebSocket = self;
    int delayInMilliseconds = [_backOffGenerator next];
    dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInMilliseconds * NSEC_PER_MSEC));
    dispatch_after(popTime, dispatch_get_main_queue(), ^(void){
        NSLog(@"Call reconnect");
        [thisWebSocket connect];
    });
}

# pragma mark - ZKWebSocketImpl

/**
 Send a message to the URL provided via websocket

 @param message The message to send
 */
- (void)send:(nonnull NSString *)message {
    if(_webSocket) {
        [_webSocket send:message];
    }
}

- (void)subscribe:(nullable ZKWebSocketListener *)listener {
    _listener = listener;
}

@end
