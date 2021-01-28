//
//  WebSocketFactory.h
//  ZumoKit
//
//  Created by Ivan Romanovski on 22/12/2020.
//  Copyright © 2020 Zumo. All rights reserved.
//

#ifndef WebSocketFactory_h
#define WebSocketFactory_h

#import "ZKWebSocketFactory.h"

@interface WebSocketFactory : NSObject <ZKWebSocketFactory>

- (nullable id<ZKWebSocket>)createWebSocket:(nonnull NSString *)url;

@end

#endif /* WebSocketFactory_h */
