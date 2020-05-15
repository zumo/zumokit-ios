//
//  HistoricalExchangeRatesCallback.h
//  ZumoKit
//
//  Created by Ivan Romanovski on 06/05/2020.
//

#ifndef HistoricalExchangeRatesCallback_h
#define HistoricalExchangeRatesCallback_h

#import <Foundation/Foundation.h>

#import "ZKHistoricalExchangeRatesCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSDictionary<NSString *, NSDictionary<NSString *, NSDictionary<NSString *, NSArray<ZKExchangeRate *> *> *> *> * ZKHistoricalExchangeRates;

typedef void(^HistoricalExchangeRatesCompletionBlock)(ZKHistoricalExchangeRates _Nullable historicalExchangeRates, NSError * _Nullable error);

@interface HistoricalExchangeRatesCallback : NSObject <ZKHistoricalExchangeRatesCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(HistoricalExchangeRatesCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END

#endif /* HistoricalExchangeRatesCallback_h */
