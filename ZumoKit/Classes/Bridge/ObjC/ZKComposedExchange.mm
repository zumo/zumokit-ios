// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKComposedExchange.h"


@implementation ZKComposedExchange

- (nonnull instancetype)initWithSignedTransaction:(nullable NSString *)signedTransaction
                                   depositAccount:(nonnull ZKAccount *)depositAccount
                                  withdrawAccount:(nonnull ZKAccount *)withdrawAccount
                                     exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
                                 exchangeSettings:(nonnull ZKExchangeSettings *)exchangeSettings
                                  exchangeAddress:(nullable NSString *)exchangeAddress
                                            value:(nonnull NSString *)value
                                      returnValue:(nonnull NSString *)returnValue
                                       depositFee:(nonnull NSString *)depositFee
                                      exchangeFee:(nonnull NSString *)exchangeFee
                                      withdrawFee:(nonnull NSString *)withdrawFee
                                            nonce:(nullable NSString *)nonce
{
    if (self = [super init]) {
        _signedTransaction = [signedTransaction copy];
        _depositAccount = depositAccount;
        _withdrawAccount = withdrawAccount;
        _exchangeRate = exchangeRate;
        _exchangeSettings = exchangeSettings;
        _exchangeAddress = [exchangeAddress copy];
        _value = [value copy];
        _returnValue = [returnValue copy];
        _depositFee = [depositFee copy];
        _exchangeFee = [exchangeFee copy];
        _withdrawFee = [withdrawFee copy];
        _nonce = [nonce copy];
    }
    return self;
}

+ (nonnull instancetype)composedExchangeWithSignedTransaction:(nullable NSString *)signedTransaction
                                               depositAccount:(nonnull ZKAccount *)depositAccount
                                              withdrawAccount:(nonnull ZKAccount *)withdrawAccount
                                                 exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
                                             exchangeSettings:(nonnull ZKExchangeSettings *)exchangeSettings
                                              exchangeAddress:(nullable NSString *)exchangeAddress
                                                        value:(nonnull NSString *)value
                                                  returnValue:(nonnull NSString *)returnValue
                                                   depositFee:(nonnull NSString *)depositFee
                                                  exchangeFee:(nonnull NSString *)exchangeFee
                                                  withdrawFee:(nonnull NSString *)withdrawFee
                                                        nonce:(nullable NSString *)nonce
{
    return [(ZKComposedExchange*)[self alloc] initWithSignedTransaction:signedTransaction
                                                         depositAccount:depositAccount
                                                        withdrawAccount:withdrawAccount
                                                           exchangeRate:exchangeRate
                                                       exchangeSettings:exchangeSettings
                                                        exchangeAddress:exchangeAddress
                                                                  value:value
                                                            returnValue:returnValue
                                                             depositFee:depositFee
                                                            exchangeFee:exchangeFee
                                                            withdrawFee:withdrawFee
                                                                  nonce:nonce];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKComposedExchange class]]) {
        return NO;
    }
    ZKComposedExchange *typedOther = (ZKComposedExchange *)other;
    return ((self.signedTransaction == nil && typedOther.signedTransaction == nil) || (self.signedTransaction != nil && [self.signedTransaction isEqual:typedOther.signedTransaction])) &&
            [self.depositAccount isEqual:typedOther.depositAccount] &&
            [self.withdrawAccount isEqual:typedOther.withdrawAccount] &&
            [self.exchangeRate isEqual:typedOther.exchangeRate] &&
            [self.exchangeSettings isEqual:typedOther.exchangeSettings] &&
            ((self.exchangeAddress == nil && typedOther.exchangeAddress == nil) || (self.exchangeAddress != nil && [self.exchangeAddress isEqual:typedOther.exchangeAddress])) &&
            [self.value isEqualToString:typedOther.value] &&
            [self.returnValue isEqualToString:typedOther.returnValue] &&
            [self.depositFee isEqualToString:typedOther.depositFee] &&
            [self.exchangeFee isEqualToString:typedOther.exchangeFee] &&
            [self.withdrawFee isEqualToString:typedOther.withdrawFee] &&
            ((self.nonce == nil && typedOther.nonce == nil) || (self.nonce != nil && [self.nonce isEqual:typedOther.nonce]));
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.signedTransaction.hash ^
            self.depositAccount.hash ^
            self.withdrawAccount.hash ^
            self.exchangeRate.hash ^
            self.exchangeSettings.hash ^
            self.exchangeAddress.hash ^
            self.value.hash ^
            self.returnValue.hash ^
            self.depositFee.hash ^
            self.exchangeFee.hash ^
            self.withdrawFee.hash ^
            self.nonce.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p signedTransaction:%@ depositAccount:%@ withdrawAccount:%@ exchangeRate:%@ exchangeSettings:%@ exchangeAddress:%@ value:%@ returnValue:%@ depositFee:%@ exchangeFee:%@ withdrawFee:%@ nonce:%@>", self.class, (void *)self, self.signedTransaction, self.depositAccount, self.withdrawAccount, self.exchangeRate, self.exchangeSettings, self.exchangeAddress, self.value, self.returnValue, self.depositFee, self.exchangeFee, self.withdrawFee, self.nonce];
}

@end
