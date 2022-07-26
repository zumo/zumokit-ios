// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import <Foundation/Foundation.h>

/** Record containing Zumo exchange rate quote used in making exchanges. */
@interface ZKQuote : NSObject
- (nonnull instancetype)initWithId:(nonnull NSString *)id
                        expireTime:(int32_t)expireTime
                         expiresIn:(nullable NSNumber *)expiresIn
                      fromCurrency:(nonnull NSString *)fromCurrency
                        toCurrency:(nonnull NSString *)toCurrency
                     depositAmount:(nonnull NSDecimalNumber *)depositAmount
                             value:(nonnull NSDecimalNumber *)value;
+ (nonnull instancetype)quoteWithId:(nonnull NSString *)id
                         expireTime:(int32_t)expireTime
                          expiresIn:(nullable NSNumber *)expiresIn
                       fromCurrency:(nonnull NSString *)fromCurrency
                         toCurrency:(nonnull NSString *)toCurrency
                      depositAmount:(nonnull NSDecimalNumber *)depositAmount
                              value:(nonnull NSDecimalNumber *)value;

/** Identifier. */
@property (nonatomic, readonly, nonnull) NSString * id;

/** Epoch timestamp representing expiration time of this quote. */
@property (nonatomic, readonly) int32_t expireTime;

/** Seconds until expiration time for active quotes, null for historical quotes. */
@property (nonatomic, readonly, nullable) NSNumber * expiresIn;

/**
 * Deposit currency.
 * @see `ZKCurrencyCode`
 */
@property (nonatomic, readonly, nonnull) NSString * fromCurrency;

/**
 * Target currency.
 * @see `ZKCurrencyCode`
 */
@property (nonatomic, readonly, nonnull) NSString * toCurrency;

/** Deposit amount to be exchanged to target currency. */
@property (nonatomic, readonly, nonnull) NSDecimalNumber * depositAmount;

/** Value of 1 unit of deposit currency in target currency. */
@property (nonatomic, readonly, nonnull) NSDecimalNumber * value;

@end