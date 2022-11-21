// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKQuote.h"


@implementation ZKQuote

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                               ttl:(int32_t)ttl
                         createdAt:(nonnull NSString *)createdAt
                         expiresAt:(nonnull NSString *)expiresAt
                     debitCurrency:(nonnull NSString *)debitCurrency
                    creditCurrency:(nonnull NSString *)creditCurrency
                             price:(nonnull NSDecimalNumber *)price
                           feeRate:(nonnull NSDecimalNumber *)feeRate
                       debitAmount:(nonnull NSDecimalNumber *)debitAmount
                         feeAmount:(nonnull NSDecimalNumber *)feeAmount
                      creditAmount:(nonnull NSDecimalNumber *)creditAmount
{
    if (self = [super init]) {
        _id = [id copy];
        _ttl = ttl;
        _createdAt = [createdAt copy];
        _expiresAt = [expiresAt copy];
        _debitCurrency = [debitCurrency copy];
        _creditCurrency = [creditCurrency copy];
        _price = price;
        _feeRate = feeRate;
        _debitAmount = debitAmount;
        _feeAmount = feeAmount;
        _creditAmount = creditAmount;
    }
    return self;
}

+ (nonnull instancetype)quoteWithId:(nonnull NSString *)id
                                ttl:(int32_t)ttl
                          createdAt:(nonnull NSString *)createdAt
                          expiresAt:(nonnull NSString *)expiresAt
                      debitCurrency:(nonnull NSString *)debitCurrency
                     creditCurrency:(nonnull NSString *)creditCurrency
                              price:(nonnull NSDecimalNumber *)price
                            feeRate:(nonnull NSDecimalNumber *)feeRate
                        debitAmount:(nonnull NSDecimalNumber *)debitAmount
                          feeAmount:(nonnull NSDecimalNumber *)feeAmount
                       creditAmount:(nonnull NSDecimalNumber *)creditAmount
{
    return [(ZKQuote*)[self alloc] initWithId:id
                                          ttl:ttl
                                    createdAt:createdAt
                                    expiresAt:expiresAt
                                debitCurrency:debitCurrency
                               creditCurrency:creditCurrency
                                        price:price
                                      feeRate:feeRate
                                  debitAmount:debitAmount
                                    feeAmount:feeAmount
                                 creditAmount:creditAmount];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKQuote class]]) {
        return NO;
    }
    ZKQuote *typedOther = (ZKQuote *)other;
    return [self.id isEqualToString:typedOther.id] &&
            self.ttl == typedOther.ttl &&
            [self.createdAt isEqualToString:typedOther.createdAt] &&
            [self.expiresAt isEqualToString:typedOther.expiresAt] &&
            [self.debitCurrency isEqualToString:typedOther.debitCurrency] &&
            [self.creditCurrency isEqualToString:typedOther.creditCurrency] &&
            [self.price isEqual:typedOther.price] &&
            [self.feeRate isEqual:typedOther.feeRate] &&
            [self.debitAmount isEqual:typedOther.debitAmount] &&
            [self.feeAmount isEqual:typedOther.feeAmount] &&
            [self.creditAmount isEqual:typedOther.creditAmount];
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            (NSUInteger)self.ttl ^
            self.createdAt.hash ^
            self.expiresAt.hash ^
            self.debitCurrency.hash ^
            self.creditCurrency.hash ^
            ((NSUInteger)self.price) ^
            ((NSUInteger)self.feeRate) ^
            ((NSUInteger)self.debitAmount) ^
            ((NSUInteger)self.feeAmount) ^
            ((NSUInteger)self.creditAmount);
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ ttl:%@ createdAt:%@ expiresAt:%@ debitCurrency:%@ creditCurrency:%@ price:%@ feeRate:%@ debitAmount:%@ feeAmount:%@ creditAmount:%@>", self.class, (void *)self, self.id, @(self.ttl), self.createdAt, self.expiresAt, self.debitCurrency, self.creditCurrency, self.price, self.feeRate, self.debitAmount, self.feeAmount, self.creditAmount];
}

@end