// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#import "ZKHistoricalExchangeRatesInterval.h"


NSString * __nonnull const ZKHistoricalExchangeRatesIntervalHOUR = @"hour";

NSString * __nonnull const ZKHistoricalExchangeRatesIntervalDAY = @"day";

NSString * __nonnull const ZKHistoricalExchangeRatesIntervalWEEK = @"week";

NSString * __nonnull const ZKHistoricalExchangeRatesIntervalMONTH = @"month";

NSString * __nonnull const ZKHistoricalExchangeRatesIntervalQUARTER = @"quarter";

NSString * __nonnull const ZKHistoricalExchangeRatesIntervalYEAR = @"year";

@implementation ZKHistoricalExchangeRatesInterval

- (nonnull instancetype)init
{
    if (self = [super init]) {
    }
    return self;
}

+ (nonnull instancetype)historicalExchangeRatesInterval
{
    return [(ZKHistoricalExchangeRatesInterval*)[self alloc] init];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p>", self.class, (void *)self];
}

@end