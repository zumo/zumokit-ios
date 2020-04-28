// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKExchange.h"


@implementation ZKExchange

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                            status:(ZKExchangeStatus)status
                   depositCurrency:(nonnull NSString *)depositCurrency
                  depositAccountId:(nonnull NSString *)depositAccountId
              depositTransactionId:(nonnull NSString *)depositTransactionId
                  withdrawCurrency:(nonnull NSString *)withdrawCurrency
                 withdrawAccountId:(nonnull NSString *)withdrawAccountId
             withdrawTransactionId:(nullable NSString *)withdrawTransactionId
                            amount:(nonnull NSString *)amount
                      returnAmount:(nonnull NSString *)returnAmount
                       submittedAt:(nullable NSNumber *)submittedAt
                       confirmedAt:(nullable NSNumber *)confirmedAt
{
    if (self = [super init]) {
        _id = [id copy];
        _status = status;
        _depositCurrency = [depositCurrency copy];
        _depositAccountId = [depositAccountId copy];
        _depositTransactionId = [depositTransactionId copy];
        _withdrawCurrency = [withdrawCurrency copy];
        _withdrawAccountId = [withdrawAccountId copy];
        _withdrawTransactionId = [withdrawTransactionId copy];
        _amount = [amount copy];
        _returnAmount = [returnAmount copy];
        _submittedAt = submittedAt;
        _confirmedAt = confirmedAt;
    }
    return self;
}

+ (nonnull instancetype)exchangeWithId:(nonnull NSString *)id
                                status:(ZKExchangeStatus)status
                       depositCurrency:(nonnull NSString *)depositCurrency
                      depositAccountId:(nonnull NSString *)depositAccountId
                  depositTransactionId:(nonnull NSString *)depositTransactionId
                      withdrawCurrency:(nonnull NSString *)withdrawCurrency
                     withdrawAccountId:(nonnull NSString *)withdrawAccountId
                 withdrawTransactionId:(nullable NSString *)withdrawTransactionId
                                amount:(nonnull NSString *)amount
                          returnAmount:(nonnull NSString *)returnAmount
                           submittedAt:(nullable NSNumber *)submittedAt
                           confirmedAt:(nullable NSNumber *)confirmedAt
{
    return [(ZKExchange*)[self alloc] initWithId:id
                                          status:status
                                 depositCurrency:depositCurrency
                                depositAccountId:depositAccountId
                            depositTransactionId:depositTransactionId
                                withdrawCurrency:withdrawCurrency
                               withdrawAccountId:withdrawAccountId
                           withdrawTransactionId:withdrawTransactionId
                                          amount:amount
                                    returnAmount:returnAmount
                                     submittedAt:submittedAt
                                     confirmedAt:confirmedAt];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKExchange class]]) {
        return NO;
    }
    ZKExchange *typedOther = (ZKExchange *)other;
    return [self.id isEqualToString:typedOther.id] &&
            self.status == typedOther.status &&
            [self.depositCurrency isEqualToString:typedOther.depositCurrency] &&
            [self.depositAccountId isEqualToString:typedOther.depositAccountId] &&
            [self.depositTransactionId isEqualToString:typedOther.depositTransactionId] &&
            [self.withdrawCurrency isEqualToString:typedOther.withdrawCurrency] &&
            [self.withdrawAccountId isEqualToString:typedOther.withdrawAccountId] &&
            ((self.withdrawTransactionId == nil && typedOther.withdrawTransactionId == nil) || (self.withdrawTransactionId != nil && [self.withdrawTransactionId isEqual:typedOther.withdrawTransactionId])) &&
            [self.amount isEqualToString:typedOther.amount] &&
            [self.returnAmount isEqualToString:typedOther.returnAmount] &&
            ((self.submittedAt == nil && typedOther.submittedAt == nil) || (self.submittedAt != nil && [self.submittedAt isEqual:typedOther.submittedAt])) &&
            ((self.confirmedAt == nil && typedOther.confirmedAt == nil) || (self.confirmedAt != nil && [self.confirmedAt isEqual:typedOther.confirmedAt]));
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            (NSUInteger)self.status ^
            self.depositCurrency.hash ^
            self.depositAccountId.hash ^
            self.depositTransactionId.hash ^
            self.withdrawCurrency.hash ^
            self.withdrawAccountId.hash ^
            self.withdrawTransactionId.hash ^
            self.amount.hash ^
            self.returnAmount.hash ^
            self.submittedAt.hash ^
            self.confirmedAt.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ status:%@ depositCurrency:%@ depositAccountId:%@ depositTransactionId:%@ withdrawCurrency:%@ withdrawAccountId:%@ withdrawTransactionId:%@ amount:%@ returnAmount:%@ submittedAt:%@ confirmedAt:%@>", self.class, (void *)self, self.id, @(self.status), self.depositCurrency, self.depositAccountId, self.depositTransactionId, self.withdrawCurrency, self.withdrawAccountId, self.withdrawTransactionId, self.amount, self.returnAmount, self.submittedAt, self.confirmedAt];
}

@end
