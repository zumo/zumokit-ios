// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import <Foundation/Foundation.h>

/**
 * Record containing transaction's crypto properties.
 * @see `ZKTransaction`
 */
@interface ZKTransactionCryptoProperties : NSObject
- (nonnull instancetype)initWithTxHash:(nullable NSString *)txHash
                                 nonce:(nullable NSNumber *)nonce
                           fromAddress:(nonnull NSString *)fromAddress
                             toAddress:(nullable NSString *)toAddress
                                  data:(nullable NSString *)data
                              gasPrice:(nullable NSDecimalNumber *)gasPrice
                              gasLimit:(nullable NSNumber *)gasLimit
                            fiatAmount:(nullable NSDictionary<NSString *, NSNumber *> *)fiatAmount
                               fiatFee:(nullable NSDictionary<NSString *, NSNumber *> *)fiatFee;
+ (nonnull instancetype)transactionCryptoPropertiesWithTxHash:(nullable NSString *)txHash
                                                        nonce:(nullable NSNumber *)nonce
                                                  fromAddress:(nonnull NSString *)fromAddress
                                                    toAddress:(nullable NSString *)toAddress
                                                         data:(nullable NSString *)data
                                                     gasPrice:(nullable NSDecimalNumber *)gasPrice
                                                     gasLimit:(nullable NSNumber *)gasLimit
                                                   fiatAmount:(nullable NSDictionary<NSString *, NSNumber *> *)fiatAmount
                                                      fiatFee:(nullable NSDictionary<NSString *, NSNumber *> *)fiatFee;

/** Transaction hash or null. */
@property (nonatomic, readonly, nullable) NSString * txHash;

/**
 * Ethereum transaction nonce if greater than 0 and
 * it is Ethereum transaction, otherwise returns null.
 */
@property (nonatomic, readonly, nullable) NSNumber * nonce;

/** Ethereum wallet address of sender. */
@property (nonatomic, readonly, nonnull) NSString * fromAddress;

/** Ethereum wallet address of recipient or null, if it is Ethereum contract deploy. */
@property (nonatomic, readonly, nullable) NSString * toAddress;

/** Transaction data or null. */
@property (nonatomic, readonly, nullable) NSString * data;

/** Ethereum gas price if it is Ethereum transaction, otherwise null. */
@property (nonatomic, readonly, nullable) NSDecimalNumber * gasPrice;

/** Ethereum gas limit if it is Ethereum transaction, otherwise null. */
@property (nonatomic, readonly, nullable) NSNumber * gasLimit;

/**
 * Value in fiat currencies at the time of the transaction submission.
 * @see `ZKCurrencyCode`
 */
@property (nonatomic, readonly, nullable) NSDictionary<NSString *, NSNumber *> * fiatAmount;

/**
 * Fee in fiat currencies at the time of the transaction submission.
 * @see `ZKCurrencyCode`
 */
@property (nonatomic, readonly, nullable) NSDictionary<NSString *, NSNumber *> * fiatFee;

@end
