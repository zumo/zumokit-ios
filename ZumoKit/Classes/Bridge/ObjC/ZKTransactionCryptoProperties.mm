// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKTransactionCryptoProperties.h"


@implementation ZKTransactionCryptoProperties

- (nonnull instancetype)initWithTxHash:(nullable NSString *)txHash
                                 nonce:(nullable NSNumber *)nonce
                           fromAddress:(nonnull NSString *)fromAddress
                             toAddress:(nullable NSString *)toAddress
                                  data:(nullable NSString *)data
                              gasPrice:(nullable NSDecimalNumber *)gasPrice
                              gasLimit:(nullable NSNumber *)gasLimit
                            fiatAmount:(nullable NSDictionary<NSString *, NSNumber *> *)fiatAmount
                               fiatFee:(nullable NSDictionary<NSString *, NSNumber *> *)fiatFee
{
    if (self = [super init]) {
        _txHash = [txHash copy];
        _nonce = nonce;
        _fromAddress = [fromAddress copy];
        _toAddress = [toAddress copy];
        _data = [data copy];
        _gasPrice = gasPrice;
        _gasLimit = gasLimit;
        _fiatAmount = [fiatAmount copy];
        _fiatFee = [fiatFee copy];
    }
    return self;
}

+ (nonnull instancetype)transactionCryptoPropertiesWithTxHash:(nullable NSString *)txHash
                                                        nonce:(nullable NSNumber *)nonce
                                                  fromAddress:(nonnull NSString *)fromAddress
                                                    toAddress:(nullable NSString *)toAddress
                                                         data:(nullable NSString *)data
                                                     gasPrice:(nullable NSDecimalNumber *)gasPrice
                                                     gasLimit:(nullable NSNumber *)gasLimit
                                                   fiatAmount:(nullable NSDictionary<NSString *, NSNumber *> *)fiatAmount
                                                      fiatFee:(nullable NSDictionary<NSString *, NSNumber *> *)fiatFee
{
    return [(ZKTransactionCryptoProperties*)[self alloc] initWithTxHash:txHash
                                                                  nonce:nonce
                                                            fromAddress:fromAddress
                                                              toAddress:toAddress
                                                                   data:data
                                                               gasPrice:gasPrice
                                                               gasLimit:gasLimit
                                                             fiatAmount:fiatAmount
                                                                fiatFee:fiatFee];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKTransactionCryptoProperties class]]) {
        return NO;
    }
    ZKTransactionCryptoProperties *typedOther = (ZKTransactionCryptoProperties *)other;
    return ((self.txHash == nil && typedOther.txHash == nil) || (self.txHash != nil && [self.txHash isEqual:typedOther.txHash])) &&
            ((self.nonce == nil && typedOther.nonce == nil) || (self.nonce != nil && [self.nonce isEqual:typedOther.nonce])) &&
            [self.fromAddress isEqualToString:typedOther.fromAddress] &&
            ((self.toAddress == nil && typedOther.toAddress == nil) || (self.toAddress != nil && [self.toAddress isEqual:typedOther.toAddress])) &&
            ((self.data == nil && typedOther.data == nil) || (self.data != nil && [self.data isEqual:typedOther.data])) &&
            ((self.gasPrice == nil && typedOther.gasPrice == nil) || (self.gasPrice != nil && [self.gasPrice isEqual:typedOther.gasPrice])) &&
            ((self.gasLimit == nil && typedOther.gasLimit == nil) || (self.gasLimit != nil && [self.gasLimit isEqual:typedOther.gasLimit])) &&
            ((self.fiatAmount == nil && typedOther.fiatAmount == nil) || (self.fiatAmount != nil && [self.fiatAmount isEqual:typedOther.fiatAmount])) &&
            ((self.fiatFee == nil && typedOther.fiatFee == nil) || (self.fiatFee != nil && [self.fiatFee isEqual:typedOther.fiatFee]));
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.txHash.hash ^
            self.nonce.hash ^
            self.fromAddress.hash ^
            self.toAddress.hash ^
            self.data.hash ^
            self.gasPrice.hash ^
            self.gasLimit.hash ^
            self.fiatAmount.hash ^
            self.fiatFee.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p txHash:%@ nonce:%@ fromAddress:%@ toAddress:%@ data:%@ gasPrice:%@ gasLimit:%@ fiatAmount:%@ fiatFee:%@>", self.class, (void *)self, self.txHash, self.nonce, self.fromAddress, self.toAddress, self.data, self.gasPrice, self.gasLimit, self.fiatAmount, self.fiatFee];
}

@end
