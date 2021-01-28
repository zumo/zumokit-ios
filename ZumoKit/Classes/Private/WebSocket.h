//
//  iOSWebSocket.h
//  ZumoKit
//
//  Created by Ivan Romanovski on 11/04/2019.
//  Copyright © 2019 Zumo. All rights reserved.
//

#ifndef WebSocket_h
#define WebSocket_h

#import "ZKWebSocket.h"
#import "ZKWebSocketListener.h"
#import "FuzzingBackOffGenerator.h"
#import <SocketRocket/SRWebSocket.h>

@interface WebSocket : NSObject <ZKWebSocket, SRWebSocketDelegate>

@property(strong, nonatomic) NSURL *url;
@property(strong, nonatomic) SRWebSocket *webSocket;
@property(strong, nonatomic) ZKWebSocketListener *listener;
@property(strong, nonatomic) FuzzingBackOffGenerator *backOffGenerator;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithURL:(NSURL *)url;

- (void)connect;

@end

#endif /* WebSocket_h */
