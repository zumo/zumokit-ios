// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#import "ZKExchangeRate.h"
#import <Foundation/Foundation.h>


@protocol ZKHistoricalExchangeRatesCallback

- (void)onError:(nonnull NSError *)e;

- (void)onSuccess:(nonnull NSDictionary<NSString *, NSArray<NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeRate *> *> *> *> *)historicalExchangeRates;

@end
