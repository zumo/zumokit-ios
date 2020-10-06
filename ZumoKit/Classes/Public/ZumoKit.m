//
//  ZumoKitImpl.m
//  ZumoKit
//
//  Created by Tim Šabanov on 07/02/2019.
//  Copyright © 2019 Zumo. All rights reserved.
//

#import "ZumoKit.h"
#import "ZKZumoCore.h"
#import "HttpService.h"
#import "WebSocketService.h"
#import "UserCallback.h"
#import "HistoricalExchangeRatesCallback.h"
#import <objc/runtime.h>

@implementation ZumoKit

ZKZumoCore *zumoCore;

+ (nonnull NSString *)version {
    return [ZKZumoCore getVersion];
}

- (instancetype)initWithApiKey:(NSString *)apiKey
                        apiUrl:(NSString *)apiUrl
                  txServiceUrl:(NSString *)txServiceUrl {

    if( self = [super init] ) {

        // Init the impls needed for the C++ core
        HttpService *httpImpl = [[HttpService alloc] init];

        // Convert the txServiceUrl to an actual NSURL and pass to wsImpl.
        NSURL *txWssUrl = [[NSURL alloc] initWithString:[txServiceUrl
                                                      stringByReplacingOccurrencesOfString:@"https"
                                                      withString:@"wss"]];
        WebSocketService *wsImpl = [[WebSocketService alloc] initWithURL:txWssUrl];

        // Initialize the C++ core
        zumoCore = [ZKZumoCore init: httpImpl
                             wsImpl: wsImpl
                             apiKey: apiKey
                             apiUrl: apiUrl
                       txServiceUrl: txServiceUrl];

        // Connect to the websocket
        [wsImpl connect];

    }

    return self;
}

- (void)authUser:(nonnull NSString *)userToken
      completion:(UserCompletionBlock)completionHandler {
    [zumoCore authUser:userToken callback:[[UserCallback alloc] initWithCompletionHandler: completionHandler]];
}

- (nullable ZKUser *)getActiveUser {
    return [zumoCore getActiveUser];
};

- (nonnull ZKUtils *)getUtils {
    return [zumoCore getUtils];
};

- (nullable ZKExchangeRate *)getExchangeRate:(nonnull NSString *)fromCurrency
                                  toCurrency:(nonnull NSString *)toCurrency {
    return [zumoCore getExchangeRate:fromCurrency toCurrency:toCurrency];
};

- (nullable ZKExchangeSettings *)getExchangeSettings:(nonnull NSString *)fromCurrency
                                          toCurrency:(nonnull NSString *)toCurrency {
    return [zumoCore getExchangeSettings:fromCurrency toCurrency:toCurrency];
};

- (nullable ZKFeeRates *)getFeeRates:(nonnull NSString *)currency {
    return [zumoCore getFeeRates:currency];
};

- (void)fetchHistoricalExchangeRates:(_Nonnull HistoricalExchangeRatesCompletionBlock)completionHandler {
    [zumoCore fetchHistoricalExchangeRates:[[HistoricalExchangeRatesCallback alloc] initWithCompletionHandler: completionHandler]];
}


@end
