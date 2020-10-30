// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKExchangeSetting.h"


@implementation ZKExchangeSetting

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                   exchangeAddress:(nonnull NSDictionary<NSString *, NSString *> *)exchangeAddress
                      fromCurrency:(nonnull NSString *)fromCurrency
                        toCurrency:(nonnull NSString *)toCurrency
                 minExchangeAmount:(nonnull NSDecimalNumber *)minExchangeAmount
                   exchangeFeeRate:(nonnull NSDecimalNumber *)exchangeFeeRate
        outgoingTransactionFeeRate:(nonnull NSDecimalNumber *)outgoingTransactionFeeRate
              returnTransactionFee:(nonnull NSDecimalNumber *)returnTransactionFee
                         timestamp:(int64_t)timestamp
{
    if (self = [super init]) {
        _id = [id copy];
        _exchangeAddress = [exchangeAddress copy];
        _fromCurrency = [fromCurrency copy];
        _toCurrency = [toCurrency copy];
        _minExchangeAmount = minExchangeAmount;
        _exchangeFeeRate = exchangeFeeRate;
        _outgoingTransactionFeeRate = outgoingTransactionFeeRate;
        _returnTransactionFee = returnTransactionFee;
        _timestamp = timestamp;
    }
    return self;
}

+ (nonnull instancetype)exchangeSettingWithId:(nonnull NSString *)id
                              exchangeAddress:(nonnull NSDictionary<NSString *, NSString *> *)exchangeAddress
                                 fromCurrency:(nonnull NSString *)fromCurrency
                                   toCurrency:(nonnull NSString *)toCurrency
                            minExchangeAmount:(nonnull NSDecimalNumber *)minExchangeAmount
                              exchangeFeeRate:(nonnull NSDecimalNumber *)exchangeFeeRate
                   outgoingTransactionFeeRate:(nonnull NSDecimalNumber *)outgoingTransactionFeeRate
                         returnTransactionFee:(nonnull NSDecimalNumber *)returnTransactionFee
                                    timestamp:(int64_t)timestamp
{
    return [(ZKExchangeSetting*)[self alloc] initWithId:id
                                        exchangeAddress:exchangeAddress
                                           fromCurrency:fromCurrency
                                             toCurrency:toCurrency
                                      minExchangeAmount:minExchangeAmount
                                        exchangeFeeRate:exchangeFeeRate
                             outgoingTransactionFeeRate:outgoingTransactionFeeRate
                                   returnTransactionFee:returnTransactionFee
                                              timestamp:timestamp];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKExchangeSetting class]]) {
        return NO;
    }
    ZKExchangeSetting *typedOther = (ZKExchangeSetting *)other;
    return [self.id isEqualToString:typedOther.id] &&
            [self.exchangeAddress isEqualToDictionary:typedOther.exchangeAddress] &&
            [self.fromCurrency isEqualToString:typedOther.fromCurrency] &&
            [self.toCurrency isEqualToString:typedOther.toCurrency] &&
            [self.minExchangeAmount isEqual:typedOther.minExchangeAmount] &&
            [self.exchangeFeeRate isEqual:typedOther.exchangeFeeRate] &&
            [self.outgoingTransactionFeeRate isEqual:typedOther.outgoingTransactionFeeRate] &&
            [self.returnTransactionFee isEqual:typedOther.returnTransactionFee] &&
            self.timestamp == typedOther.timestamp;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            self.exchangeAddress.hash ^
            self.fromCurrency.hash ^
            self.toCurrency.hash ^
            ((NSUInteger)self.minExchangeAmount) ^
            ((NSUInteger)self.exchangeFeeRate) ^
            ((NSUInteger)self.outgoingTransactionFeeRate) ^
            ((NSUInteger)self.returnTransactionFee) ^
            (NSUInteger)self.timestamp;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ exchangeAddress:%@ fromCurrency:%@ toCurrency:%@ minExchangeAmount:%@ exchangeFeeRate:%@ outgoingTransactionFeeRate:%@ returnTransactionFee:%@ timestamp:%@>", self.class, (void *)self, self.id, self.exchangeAddress, self.fromCurrency, self.toCurrency, self.minExchangeAmount, self.exchangeFeeRate, self.outgoingTransactionFeeRate, self.returnTransactionFee, @(self.timestamp)];
}

@end