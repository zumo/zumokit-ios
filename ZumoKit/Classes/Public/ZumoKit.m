//
//  ZumoKitImpl.m
//  ZumoKit
//
//  Created by Tim Šabanov on 07/02/2019.
//  Copyright © 2019 Zumo. All rights reserved.
//

#import "ZumoKit.h"
#import "ZKZumoCore.h"
#import "HttpProvider.h"
#import "WebSocketFactory.h"
#import "UserCallback.h"
#import "HistoricalExchangeRatesCallback.h"
#import <objc/runtime.h>

@implementation ZumoKit

ZKZumoCore *zumoCore;

+ (nonnull NSString *)version {
    return [ZKZumoCore getVersion];
}

+ (void)setLogLevel:(nonnull NSString *)logLevel {
    [ZKZumoCore setLogLevel:logLevel];
};

+ (void)onLog:(nullable id<ZKLogListener>)logListener
     logLevel:(nonnull NSString *)logLevel {
    [ZKZumoCore onLog:logListener logLevel:logLevel];
};

- (instancetype)initWithApiKey:(NSString *)apiKey
                        apiUrl:(NSString *)apiUrl
         transactionServiceUrl:(NSString *)transactionServiceUrl
                cardServiceUrl:(NSString *)cardServiceUrl
        notificationServiceUrl:(NSString *)notificationServiceUrl
            exchangeServiceUrl:(nonnull NSString *)exchangeServiceUrl {

    if( self = [super init] ) {
        // Init the providers needed for the C++ core
        HttpProvider *httpProvider = [[HttpProvider alloc] init];
        WebSocketFactory *wsFactory = [[WebSocketFactory alloc] init];

        // Initialize the C++ core
        zumoCore = [ZKZumoCore init: httpProvider
                   webSocketFactory: wsFactory
                             apiKey: apiKey
                             apiUrl: apiUrl
              transactionServiceUrl: transactionServiceUrl
                     cardServiceUrl: cardServiceUrl
             notificationServiceUrl: notificationServiceUrl
                 exchangeServiceUrl: exchangeServiceUrl];
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
