// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import <Foundation/Foundation.h>

/** Record containing Zumo exchange setting used in making exchanges. */
@interface ZKExchangeSetting : NSObject
- (nonnull instancetype)initWithId:(nonnull NSString *)id
                   exchangeAddress:(nonnull NSDictionary<NSString *, NSString *> *)exchangeAddress
                      fromCurrency:(nonnull NSString *)fromCurrency
                        toCurrency:(nonnull NSString *)toCurrency
                 minExchangeAmount:(nonnull NSDecimalNumber *)minExchangeAmount
                   exchangeFeeRate:(nonnull NSDecimalNumber *)exchangeFeeRate
        outgoingTransactionFeeRate:(nonnull NSDecimalNumber *)outgoingTransactionFeeRate
              returnTransactionFee:(nonnull NSDecimalNumber *)returnTransactionFee;
+ (nonnull instancetype)exchangeSettingWithId:(nonnull NSString *)id
                              exchangeAddress:(nonnull NSDictionary<NSString *, NSString *> *)exchangeAddress
                                 fromCurrency:(nonnull NSString *)fromCurrency
                                   toCurrency:(nonnull NSString *)toCurrency
                            minExchangeAmount:(nonnull NSDecimalNumber *)minExchangeAmount
                              exchangeFeeRate:(nonnull NSDecimalNumber *)exchangeFeeRate
                   outgoingTransactionFeeRate:(nonnull NSDecimalNumber *)outgoingTransactionFeeRate
                         returnTransactionFee:(nonnull NSDecimalNumber *)returnTransactionFee;

/** Identifier. */
@property (nonatomic, readonly, nonnull) NSString * id;

/**
 * Mapping between networks and Zumo Exchange addresses.
 * @see `ZKNetworkType`
 */
@property (nonatomic, readonly, nonnull) NSDictionary<NSString *, NSString *> * exchangeAddress;

/**
 * Currency code of outgoing transaction.
 * @see `ZKCurrencyCode`
 */
@property (nonatomic, readonly, nonnull) NSString * fromCurrency;

/**
 * Currency code of return transaction.
 * @see `ZKCurrencyCode`
 */
@property (nonatomic, readonly, nonnull) NSString * toCurrency;

/** Minimum amount that can be exchanged in outgoing transaction currency. */
@property (nonatomic, readonly, nonnull) NSDecimalNumber * minExchangeAmount;

/** Exchange fee rate that will be charged once currency is exchanged. */
@property (nonatomic, readonly, nonnull) NSDecimalNumber * exchangeFeeRate;

/** Fee rate that will be used for outgoing transaction. */
@property (nonatomic, readonly, nonnull) NSDecimalNumber * outgoingTransactionFeeRate;

/** Fee that will charged for return transaction. */
@property (nonatomic, readonly, nonnull) NSDecimalNumber * returnTransactionFee;

@end