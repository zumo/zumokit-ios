// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKExchangeSettings.h"


@implementation ZKExchangeSettings

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                    depositAddress:(nonnull NSDictionary<NSString *, NSString *> *)depositAddress
                   depositCurrency:(nonnull NSString *)depositCurrency
                  withdrawCurrency:(nonnull NSString *)withdrawCurrency
                 minExchangeAmount:(nonnull NSString *)minExchangeAmount
                           feeRate:(nonnull NSString *)feeRate
                    depositFeeRate:(nonnull NSString *)depositFeeRate
                       withdrawFee:(nonnull NSString *)withdrawFee
                         timestamp:(int64_t)timestamp
{
    if (self = [super init]) {
        _id = [id copy];
        _depositAddress = [depositAddress copy];
        _depositCurrency = [depositCurrency copy];
        _withdrawCurrency = [withdrawCurrency copy];
        _minExchangeAmount = [minExchangeAmount copy];
        _feeRate = [feeRate copy];
        _depositFeeRate = [depositFeeRate copy];
        _withdrawFee = [withdrawFee copy];
        _timestamp = timestamp;
    }
    return self;
}

+ (nonnull instancetype)exchangeSettingsWithId:(nonnull NSString *)id
                                depositAddress:(nonnull NSDictionary<NSString *, NSString *> *)depositAddress
                               depositCurrency:(nonnull NSString *)depositCurrency
                              withdrawCurrency:(nonnull NSString *)withdrawCurrency
                             minExchangeAmount:(nonnull NSString *)minExchangeAmount
                                       feeRate:(nonnull NSString *)feeRate
                                depositFeeRate:(nonnull NSString *)depositFeeRate
                                   withdrawFee:(nonnull NSString *)withdrawFee
                                     timestamp:(int64_t)timestamp
{
    return [(ZKExchangeSettings*)[self alloc] initWithId:id
                                          depositAddress:depositAddress
                                         depositCurrency:depositCurrency
                                        withdrawCurrency:withdrawCurrency
                                       minExchangeAmount:minExchangeAmount
                                                 feeRate:feeRate
                                          depositFeeRate:depositFeeRate
                                             withdrawFee:withdrawFee
                                               timestamp:timestamp];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKExchangeSettings class]]) {
        return NO;
    }
    ZKExchangeSettings *typedOther = (ZKExchangeSettings *)other;
    return [self.id isEqualToString:typedOther.id] &&
            [self.depositAddress isEqualToDictionary:typedOther.depositAddress] &&
            [self.depositCurrency isEqualToString:typedOther.depositCurrency] &&
            [self.withdrawCurrency isEqualToString:typedOther.withdrawCurrency] &&
            [self.minExchangeAmount isEqualToString:typedOther.minExchangeAmount] &&
            [self.feeRate isEqualToString:typedOther.feeRate] &&
            [self.depositFeeRate isEqualToString:typedOther.depositFeeRate] &&
            [self.withdrawFee isEqualToString:typedOther.withdrawFee] &&
            self.timestamp == typedOther.timestamp;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            self.depositAddress.hash ^
            self.depositCurrency.hash ^
            self.withdrawCurrency.hash ^
            self.minExchangeAmount.hash ^
            self.feeRate.hash ^
            self.depositFeeRate.hash ^
            self.withdrawFee.hash ^
            (NSUInteger)self.timestamp;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ depositAddress:%@ depositCurrency:%@ withdrawCurrency:%@ minExchangeAmount:%@ feeRate:%@ depositFeeRate:%@ withdrawFee:%@ timestamp:%@>", self.class, (void *)self, self.id, self.depositAddress, self.depositCurrency, self.withdrawCurrency, self.minExchangeAmount, self.feeRate, self.depositFeeRate, self.withdrawFee, @(self.timestamp)];
}

@end
