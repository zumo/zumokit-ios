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

- (void)signIn:(nonnull NSString *)userTokenSet
    completion:(ZKUserCompletionBlock)completionHandler {
    [zumoCore signIn:userTokenSet callback:[[UserCallback alloc] initWithCompletionHandler: completionHandler]];
}

- (void)signOut {
    [zumoCore signOut];
}

- (nullable ZKUser *)getCurrentUser {
    return [zumoCore getCurrentUser];
};

- (nonnull ZKUtils *)getUtils {
    return [zumoCore getUtils];
};

- (nullable ZKExchangeRate *)getExchangeRate:(nonnull NSString *)fromCurrency
                                  toCurrency:(nonnull NSString *)toCurrency {
    return [zumoCore getExchangeRate:fromCurrency toCurrency:toCurrency];
};

- (nonnull ZKExchangeRates)getExchangeRates {
    return [zumoCore getExchangeRates];
};

- (nullable ZKExchangeSetting *)getExchangeSetting:(nonnull NSString *)fromCurrency
                                        toCurrency:(nonnull NSString *)toCurrency {
    return [zumoCore getExchangeSetting:fromCurrency toCurrency:toCurrency];
};

- (nonnull ZKExchangeSettings)getExchangeSettings {
    return [zumoCore getExchangeSettings];
};

- (nullable ZKTransactionFeeRate *)getTransactionFeeRate:(nonnull NSString *)currency {
    return [zumoCore getTransactionFeeRate:currency];
};

- (nonnull ZKTransactionFeeRates)getTransactionFeeRates {
    return [zumoCore getTransactionFeeRates];
};

- (void)fetchHistoricalExchangeRates:(_Nonnull ZKHistoricalExchangeRatesCompletionBlock)completionHandler {
    [zumoCore fetchHistoricalExchangeRates:[[HistoricalExchangeRatesCallback alloc] initWithCompletionHandler: completionHandler]];
}

- (void)addChangeListener:(nullable id<ZKChangeListener>)listener {
    [zumoCore addChangeListener:listener];
};

- (void)removeChangeListener:(nullable id<ZKChangeListener>)listener {
    [zumoCore removeChangeListener:listener];
};

@end
