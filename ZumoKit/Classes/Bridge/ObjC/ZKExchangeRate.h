// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import <Foundation/Foundation.h>

/**
 * Record containing Zumo exchange rates used in making exchanges.
 * Can also be used to display amounts in local currency to the user.
 */
@interface ZKExchangeRate : NSObject
- (nonnull instancetype)initWithId:(nonnull NSString *)id
                   depositCurrency:(nonnull NSString *)depositCurrency
                  withdrawCurrency:(nonnull NSString *)withdrawCurrency
                             value:(nonnull NSDecimalNumber *)value
                           validTo:(int64_t)validTo
                         timestamp:(int64_t)timestamp;
+ (nonnull instancetype)exchangeRateWithId:(nonnull NSString *)id
                           depositCurrency:(nonnull NSString *)depositCurrency
                          withdrawCurrency:(nonnull NSString *)withdrawCurrency
                                     value:(nonnull NSDecimalNumber *)value
                                   validTo:(int64_t)validTo
                                 timestamp:(int64_t)timestamp;

/** Identifier. */
@property (nonatomic, readonly, nonnull) NSString * id;

/**
 * Currency from which exchange is being made.
 * @see `ZKCurrencyCode`
 */
@property (nonatomic, readonly, nonnull) NSString * depositCurrency;

/**
 * Currency from which exchange is being made.
 * @see `ZKCurrencyCode`
 */
@property (nonatomic, readonly, nonnull) NSString * withdrawCurrency;

/** Value of 1 unit of deposit currency in withdraw currency. */
@property (nonatomic, readonly, nonnull) NSDecimalNumber * value;

/** Epoch timestamp representing expiration time of this exchange rate. */
@property (nonatomic, readonly) int64_t validTo;

/** Epoch timestamp when the exchange rate was issued. */
@property (nonatomic, readonly) int64_t timestamp;

@end
