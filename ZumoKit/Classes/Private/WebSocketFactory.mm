//
//  WebSocketFactory.mm
//  ZumoKit
//
//  Created by Ivan Romanovski on 22/12/2020.
//

#import <Foundation/Foundation.h>
#import "WebSocketFactory.h"
#import "WebSocket.h"

@implementation WebSocketFactory

- (nullable id<ZKWebSocket>)createWebSocket:(nonnull NSString *)url {
    return [[WebSocket alloc] initWithURL:[[NSURL alloc] initWithString:url]];
}

@end
