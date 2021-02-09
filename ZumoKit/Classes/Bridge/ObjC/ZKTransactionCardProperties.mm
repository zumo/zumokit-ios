// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKTransactionCardProperties.h"


@implementation ZKTransactionCardProperties

- (nonnull instancetype)initWithCardId:(nonnull NSString *)cardId
                     transactionAmount:(nonnull NSDecimalNumber *)transactionAmount
                   transactionCurrency:(nonnull NSString *)transactionCurrency
                         billingAmount:(nonnull NSDecimalNumber *)billingAmount
                       billingCurrency:(nonnull NSString *)billingCurrency
                     exchangeRateValue:(nonnull NSDecimalNumber *)exchangeRateValue
                                   mcc:(nullable NSString *)mcc
                          merchantName:(nullable NSString *)merchantName
                       merchantCountry:(nullable NSString *)merchantCountry
{
    if (self = [super init]) {
        _cardId = [cardId copy];
        _transactionAmount = transactionAmount;
        _transactionCurrency = [transactionCurrency copy];
        _billingAmount = billingAmount;
        _billingCurrency = [billingCurrency copy];
        _exchangeRateValue = exchangeRateValue;
        _mcc = [mcc copy];
        _merchantName = [merchantName copy];
        _merchantCountry = [merchantCountry copy];
    }
    return self;
}

+ (nonnull instancetype)transactionCardPropertiesWithCardId:(nonnull NSString *)cardId
                                          transactionAmount:(nonnull NSDecimalNumber *)transactionAmount
                                        transactionCurrency:(nonnull NSString *)transactionCurrency
                                              billingAmount:(nonnull NSDecimalNumber *)billingAmount
                                            billingCurrency:(nonnull NSString *)billingCurrency
                                          exchangeRateValue:(nonnull NSDecimalNumber *)exchangeRateValue
                                                        mcc:(nullable NSString *)mcc
                                               merchantName:(nullable NSString *)merchantName
                                            merchantCountry:(nullable NSString *)merchantCountry
{
    return [(ZKTransactionCardProperties*)[self alloc] initWithCardId:cardId
                                                    transactionAmount:transactionAmount
                                                  transactionCurrency:transactionCurrency
                                                        billingAmount:billingAmount
                                                      billingCurrency:billingCurrency
                                                    exchangeRateValue:exchangeRateValue
                                                                  mcc:mcc
                                                         merchantName:merchantName
                                                      merchantCountry:merchantCountry];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKTransactionCardProperties class]]) {
        return NO;
    }
    ZKTransactionCardProperties *typedOther = (ZKTransactionCardProperties *)other;
    return [self.cardId isEqualToString:typedOther.cardId] &&
            [self.transactionAmount isEqual:typedOther.transactionAmount] &&
            [self.transactionCurrency isEqualToString:typedOther.transactionCurrency] &&
            [self.billingAmount isEqual:typedOther.billingAmount] &&
            [self.billingCurrency isEqualToString:typedOther.billingCurrency] &&
            [self.exchangeRateValue isEqual:typedOther.exchangeRateValue] &&
            ((self.mcc == nil && typedOther.mcc == nil) || (self.mcc != nil && [self.mcc isEqual:typedOther.mcc])) &&
            ((self.merchantName == nil && typedOther.merchantName == nil) || (self.merchantName != nil && [self.merchantName isEqual:typedOther.merchantName])) &&
            ((self.merchantCountry == nil && typedOther.merchantCountry == nil) || (self.merchantCountry != nil && [self.merchantCountry isEqual:typedOther.merchantCountry]));
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.cardId.hash ^
            ((NSUInteger)self.transactionAmount) ^
            self.transactionCurrency.hash ^
            ((NSUInteger)self.billingAmount) ^
            self.billingCurrency.hash ^
            ((NSUInteger)self.exchangeRateValue) ^
            self.mcc.hash ^
            self.merchantName.hash ^
            self.merchantCountry.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p cardId:%@ transactionAmount:%@ transactionCurrency:%@ billingAmount:%@ billingCurrency:%@ exchangeRateValue:%@ mcc:%@ merchantName:%@ merchantCountry:%@>", self.class, (void *)self, self.cardId, self.transactionAmount, self.transactionCurrency, self.billingAmount, self.billingCurrency, self.exchangeRateValue, self.mcc, self.merchantName, self.merchantCountry];
}

@end
