// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKExchangeRate.h"


@implementation ZKExchangeRate

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                   depositCurrency:(nonnull NSString *)depositCurrency
                  withdrawCurrency:(nonnull NSString *)withdrawCurrency
                             value:(nonnull NSDecimalNumber *)value
                           validTo:(int64_t)validTo
                         timestamp:(int64_t)timestamp
{
    if (self = [super init]) {
        _id = [id copy];
        _depositCurrency = [depositCurrency copy];
        _withdrawCurrency = [withdrawCurrency copy];
        _value = value;
        _validTo = validTo;
        _timestamp = timestamp;
    }
    return self;
}

+ (nonnull instancetype)exchangeRateWithId:(nonnull NSString *)id
                           depositCurrency:(nonnull NSString *)depositCurrency
                          withdrawCurrency:(nonnull NSString *)withdrawCurrency
                                     value:(nonnull NSDecimalNumber *)value
                                   validTo:(int64_t)validTo
                                 timestamp:(int64_t)timestamp
{
    return [(ZKExchangeRate*)[self alloc] initWithId:id
                                     depositCurrency:depositCurrency
                                    withdrawCurrency:withdrawCurrency
                                               value:value
                                             validTo:validTo
                                           timestamp:timestamp];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKExchangeRate class]]) {
        return NO;
    }
    ZKExchangeRate *typedOther = (ZKExchangeRate *)other;
    return [self.id isEqualToString:typedOther.id] &&
            [self.depositCurrency isEqualToString:typedOther.depositCurrency] &&
            [self.withdrawCurrency isEqualToString:typedOther.withdrawCurrency] &&
            [self.value isEqual:typedOther.value] &&
            self.validTo == typedOther.validTo &&
            self.timestamp == typedOther.timestamp;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            self.depositCurrency.hash ^
            self.withdrawCurrency.hash ^
            ((NSUInteger)self.value) ^
            (NSUInteger)self.validTo ^
            (NSUInteger)self.timestamp;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ depositCurrency:%@ withdrawCurrency:%@ value:%@ validTo:%@ timestamp:%@>", self.class, (void *)self, self.id, self.depositCurrency, self.withdrawCurrency, self.value, @(self.validTo), @(self.timestamp)];
}

@end
