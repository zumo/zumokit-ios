//
//  iOSWebSocket.h
//  ZumoKit
//
//  Created by Ivan Romanovski on 11/04/2019.
//  Copyright © 2019 Zumo. All rights reserved.
//

#ifndef WebSocket_h
#define WebSocket_h

#import "ZKWebSocketImpl.h"
#import "ZKWebSocketListener.h"
#import <SocketRocket/SRWebSocket.h>

@interface WebSocketService : NSObject <ZKWebSocketImpl, SRWebSocketDelegate>

@property(strong, nonatomic) NSURL *url;
@property(strong, nonatomic) SRWebSocket *webSocket;
@property(strong, nonatomic) ZKWebSocketListener *listener;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithURL:(NSURL *)url;

- (void)connect;

@end

#endif /* WebSocket_h */
