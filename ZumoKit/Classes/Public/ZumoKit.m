//
//  ZumoKitImpl.m
//  ZumoKit
//
//  Created by Tim Šabanov on 07/02/2019.
//  Copyright © 2019 Zumo. All rights reserved.
//

#import "ZumoKit.h"
#import "ZKZumoCore.h"
#import "Http.h"
#import "WebSocket.h"
#import "UserCallback.h"
#import <objc/runtime.h>

@implementation ZumoKit

ZKZumoCore *zumoCore;

+ (nonnull NSString *)version {
    return [ZKZumoCore getVersion];
}

- (instancetype)initWithApiKey:(NSString *)apiKey
                       apiRoot:(NSString *)apiRoot
                  txServiceUrl:(NSString *)txServiceUrl {
    
    if( self = [super init] ) {

        // Init the impls needed for the C++ core
        Http *httpImpl = [[Http alloc] init];

        // Convert the txServiceUrl to an actual NSURL and pass to wsImpl.
        NSURL *txUrl = [[NSURL alloc] initWithString:txServiceUrl];
        WebSocket *wsImpl = [[WebSocket alloc] initWithURL:txUrl];

        // Initialize the C++ core
        zumoCore = [ZKZumoCore init: httpImpl
                             wsImpl: wsImpl
                             apiKey: apiKey
                            apiRoot: apiRoot
                      txServiceRoot: txServiceUrl];

        _utils = zumoCore.getUtils;

        // Connect to the websocket
        [wsImpl connect];

    }

    return self;
}

- (void)getUser:(nonnull NSString *)userToken
  completion:(UserCompletionBlock)completionHandler {
    [zumoCore getUser:userToken callback:[[UserCallback alloc] initWithCompletionHandler: completionHandler]];
}

- (nonnull ZKState *)getState {
    return [zumoCore getState];
};

- (void)addStateListener:(nullable id<ZKStateListener>)listener {
    [zumoCore addStateListener:listener];
};

- (void)removeStateListener:(nullable id<ZKStateListener>)listener {
    [zumoCore removeStateListener:listener];
};


@end
