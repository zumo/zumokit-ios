// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKExchange.h"


@implementation ZKExchange

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                            status:(nonnull NSString *)status
                      fromCurrency:(nonnull NSString *)fromCurrency
                     fromAccountId:(nonnull NSString *)fromAccountId
             outgoingTransactionId:(nullable NSString *)outgoingTransactionId
                        toCurrency:(nonnull NSString *)toCurrency
                       toAccountId:(nonnull NSString *)toAccountId
               returnTransactionId:(nullable NSString *)returnTransactionId
                            amount:(nonnull NSDecimalNumber *)amount
            outgoingTransactionFee:(nullable NSDecimalNumber *)outgoingTransactionFee
                      returnAmount:(nonnull NSDecimalNumber *)returnAmount
                       exchangeFee:(nonnull NSDecimalNumber *)exchangeFee
              returnTransactionFee:(nonnull NSDecimalNumber *)returnTransactionFee
                      exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
                  exchangeSettings:(nonnull ZKExchangeSettings *)exchangeSettings
                     exchangeRates:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeRate *> *> *)exchangeRates
                             nonce:(nullable NSString *)nonce
                       submittedAt:(nullable NSNumber *)submittedAt
                       confirmedAt:(nullable NSNumber *)confirmedAt
{
    if (self = [super init]) {
        _id = [id copy];
        _status = [status copy];
        _fromCurrency = [fromCurrency copy];
        _fromAccountId = [fromAccountId copy];
        _outgoingTransactionId = [outgoingTransactionId copy];
        _toCurrency = [toCurrency copy];
        _toAccountId = [toAccountId copy];
        _returnTransactionId = [returnTransactionId copy];
        _amount = amount;
        _outgoingTransactionFee = outgoingTransactionFee;
        _returnAmount = returnAmount;
        _exchangeFee = exchangeFee;
        _returnTransactionFee = returnTransactionFee;
        _exchangeRate = exchangeRate;
        _exchangeSettings = exchangeSettings;
        _exchangeRates = [exchangeRates copy];
        _nonce = [nonce copy];
        _submittedAt = submittedAt;
        _confirmedAt = confirmedAt;
    }
    return self;
}

+ (nonnull instancetype)exchangeWithId:(nonnull NSString *)id
                                status:(nonnull NSString *)status
                          fromCurrency:(nonnull NSString *)fromCurrency
                         fromAccountId:(nonnull NSString *)fromAccountId
                 outgoingTransactionId:(nullable NSString *)outgoingTransactionId
                            toCurrency:(nonnull NSString *)toCurrency
                           toAccountId:(nonnull NSString *)toAccountId
                   returnTransactionId:(nullable NSString *)returnTransactionId
                                amount:(nonnull NSDecimalNumber *)amount
                outgoingTransactionFee:(nullable NSDecimalNumber *)outgoingTransactionFee
                          returnAmount:(nonnull NSDecimalNumber *)returnAmount
                           exchangeFee:(nonnull NSDecimalNumber *)exchangeFee
                  returnTransactionFee:(nonnull NSDecimalNumber *)returnTransactionFee
                          exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
                      exchangeSettings:(nonnull ZKExchangeSettings *)exchangeSettings
                         exchangeRates:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeRate *> *> *)exchangeRates
                                 nonce:(nullable NSString *)nonce
                           submittedAt:(nullable NSNumber *)submittedAt
                           confirmedAt:(nullable NSNumber *)confirmedAt
{
    return [(ZKExchange*)[self alloc] initWithId:id
                                          status:status
                                    fromCurrency:fromCurrency
                                   fromAccountId:fromAccountId
                           outgoingTransactionId:outgoingTransactionId
                                      toCurrency:toCurrency
                                     toAccountId:toAccountId
                             returnTransactionId:returnTransactionId
                                          amount:amount
                          outgoingTransactionFee:outgoingTransactionFee
                                    returnAmount:returnAmount
                                     exchangeFee:exchangeFee
                            returnTransactionFee:returnTransactionFee
                                    exchangeRate:exchangeRate
                                exchangeSettings:exchangeSettings
                                   exchangeRates:exchangeRates
                                           nonce:nonce
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
            [self.status isEqualToString:typedOther.status] &&
            [self.fromCurrency isEqualToString:typedOther.fromCurrency] &&
            [self.fromAccountId isEqualToString:typedOther.fromAccountId] &&
            ((self.outgoingTransactionId == nil && typedOther.outgoingTransactionId == nil) || (self.outgoingTransactionId != nil && [self.outgoingTransactionId isEqual:typedOther.outgoingTransactionId])) &&
            [self.toCurrency isEqualToString:typedOther.toCurrency] &&
            [self.toAccountId isEqualToString:typedOther.toAccountId] &&
            ((self.returnTransactionId == nil && typedOther.returnTransactionId == nil) || (self.returnTransactionId != nil && [self.returnTransactionId isEqual:typedOther.returnTransactionId])) &&
            [self.amount isEqual:typedOther.amount] &&
            ((self.outgoingTransactionFee == nil && typedOther.outgoingTransactionFee == nil) || (self.outgoingTransactionFee != nil && [self.outgoingTransactionFee isEqual:typedOther.outgoingTransactionFee])) &&
            [self.returnAmount isEqual:typedOther.returnAmount] &&
            [self.exchangeFee isEqual:typedOther.exchangeFee] &&
            [self.returnTransactionFee isEqual:typedOther.returnTransactionFee] &&
            [self.exchangeRate isEqual:typedOther.exchangeRate] &&
            [self.exchangeSettings isEqual:typedOther.exchangeSettings] &&
            [self.exchangeRates isEqualToDictionary:typedOther.exchangeRates] &&
            ((self.nonce == nil && typedOther.nonce == nil) || (self.nonce != nil && [self.nonce isEqual:typedOther.nonce])) &&
            ((self.submittedAt == nil && typedOther.submittedAt == nil) || (self.submittedAt != nil && [self.submittedAt isEqual:typedOther.submittedAt])) &&
            ((self.confirmedAt == nil && typedOther.confirmedAt == nil) || (self.confirmedAt != nil && [self.confirmedAt isEqual:typedOther.confirmedAt]));
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            self.status.hash ^
            self.fromCurrency.hash ^
            self.fromAccountId.hash ^
            self.outgoingTransactionId.hash ^
            self.toCurrency.hash ^
            self.toAccountId.hash ^
            self.returnTransactionId.hash ^
            ((NSUInteger)self.amount) ^
            self.outgoingTransactionFee.hash ^
            ((NSUInteger)self.returnAmount) ^
            ((NSUInteger)self.exchangeFee) ^
            ((NSUInteger)self.returnTransactionFee) ^
            self.exchangeRate.hash ^
            self.exchangeSettings.hash ^
            self.exchangeRates.hash ^
            self.nonce.hash ^
            self.submittedAt.hash ^
            self.confirmedAt.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ status:%@ fromCurrency:%@ fromAccountId:%@ outgoingTransactionId:%@ toCurrency:%@ toAccountId:%@ returnTransactionId:%@ amount:%@ outgoingTransactionFee:%@ returnAmount:%@ exchangeFee:%@ returnTransactionFee:%@ exchangeRate:%@ exchangeSettings:%@ exchangeRates:%@ nonce:%@ submittedAt:%@ confirmedAt:%@>", self.class, (void *)self, self.id, self.status, self.fromCurrency, self.fromAccountId, self.outgoingTransactionId, self.toCurrency, self.toAccountId, self.returnTransactionId, self.amount, self.outgoingTransactionFee, self.returnAmount, self.exchangeFee, self.returnTransactionFee, self.exchangeRate, self.exchangeSettings, self.exchangeRates, self.nonce, self.submittedAt, self.confirmedAt];
}

@end
