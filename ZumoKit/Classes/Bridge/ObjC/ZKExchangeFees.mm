// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKExchangeFees.h"


@implementation ZKExchangeFees

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                   depositCurrency:(nonnull NSString *)depositCurrency
                  withdrawCurrency:(nonnull NSString *)withdrawCurrency
                           feeRate:(nonnull NSString *)feeRate
                    depositFeeRate:(nonnull NSString *)depositFeeRate
                       withdrawFee:(nonnull NSString *)withdrawFee
                         timestamp:(int64_t)timestamp
{
    if (self = [super init]) {
        _id = [id copy];
        _depositCurrency = [depositCurrency copy];
        _withdrawCurrency = [withdrawCurrency copy];
        _feeRate = [feeRate copy];
        _depositFeeRate = [depositFeeRate copy];
        _withdrawFee = [withdrawFee copy];
        _timestamp = timestamp;
    }
    return self;
}

+ (nonnull instancetype)exchangeFeesWithId:(nonnull NSString *)id
                           depositCurrency:(nonnull NSString *)depositCurrency
                          withdrawCurrency:(nonnull NSString *)withdrawCurrency
                                   feeRate:(nonnull NSString *)feeRate
                            depositFeeRate:(nonnull NSString *)depositFeeRate
                               withdrawFee:(nonnull NSString *)withdrawFee
                                 timestamp:(int64_t)timestamp
{
    return [(ZKExchangeFees*)[self alloc] initWithId:id
                                     depositCurrency:depositCurrency
                                    withdrawCurrency:withdrawCurrency
                                             feeRate:feeRate
                                      depositFeeRate:depositFeeRate
                                         withdrawFee:withdrawFee
                                           timestamp:timestamp];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKExchangeFees class]]) {
        return NO;
    }
    ZKExchangeFees *typedOther = (ZKExchangeFees *)other;
    return [self.id isEqualToString:typedOther.id] &&
            [self.depositCurrency isEqualToString:typedOther.depositCurrency] &&
            [self.withdrawCurrency isEqualToString:typedOther.withdrawCurrency] &&
            [self.feeRate isEqualToString:typedOther.feeRate] &&
            [self.depositFeeRate isEqualToString:typedOther.depositFeeRate] &&
            [self.withdrawFee isEqualToString:typedOther.withdrawFee] &&
            self.timestamp == typedOther.timestamp;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            self.depositCurrency.hash ^
            self.withdrawCurrency.hash ^
            self.feeRate.hash ^
            self.depositFeeRate.hash ^
            self.withdrawFee.hash ^
            (NSUInteger)self.timestamp;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ depositCurrency:%@ withdrawCurrency:%@ feeRate:%@ depositFeeRate:%@ withdrawFee:%@ timestamp:%@>", self.class, (void *)self, self.id, self.depositCurrency, self.withdrawCurrency, self.feeRate, self.depositFeeRate, self.withdrawFee, @(self.timestamp)];
}

@end
