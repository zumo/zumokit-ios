// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#import "ZKExchangeRate.h"
#import "ZKExchangeSetting.h"
#import "ZKTransactionFeeRate.h"
#import <Foundation/Foundation.h>
@class ZKUser;
@class ZKUtils;
@class ZKZumoCore;
@protocol ZKChangeListener;
@protocol ZKHistoricalExchangeRatesCallback;
@protocol ZKHttpImpl;
@protocol ZKUserCallback;
@protocol ZKWebSocketImpl;


/** Entry point to ZumoKit C++ SDK */
@interface ZKZumoCore : NSObject

/**
 * Get ZumoKit SDK version.
 * @return semantic version tag if exists, commit hash otherwise
 */
+ (nonnull NSString *)getVersion;

/**
 * Initializes ZumoKit SDK. Should only be called once.
 *
 * @param httpImpl        HTTP implementation
 * @param wsImpl          WebSocet implementation
 * @param apiKey          ZumoKit Api-Key
 * @param apiUrl         ZumoKit API url
 * @param txServiceUrl  ZumoKit Transaction Service url
 *
 * @return ZumoKit instance
 */
+ (nullable ZKZumoCore *)init:(nullable id<ZKHttpImpl>)httpImpl
                       wsImpl:(nullable id<ZKWebSocketImpl>)wsImpl
                       apiKey:(nonnull NSString *)apiKey
                       apiUrl:(nonnull NSString *)apiUrl
                 txServiceUrl:(nonnull NSString *)txServiceUrl;

/**
 * Authenticates user token set and returns corresponding user. On success user is set as active user.
 * Refer to <a href="https://developers.zumo.money/docs/setup/server#get-zumokit-user-token">Server</a> guide for details on how to get user token set.
 *
 * @param userTokenSet   user token set
 * @param callback         an interface to receive the result or error
 *
 * @see `ZKUser`
 */
- (void)authUser:(nonnull NSString *)userTokenSet
        callback:(nullable id<ZKUserCallback>)callback;

/**
 * Get active user if exists.
 *
 * @return active user or null
 */
- (nullable ZKUser *)getActiveUser;

/**
 * Get crypto utils class.
 *
 * @return crypto utils
 */
- (nullable ZKUtils *)getUtils;

/**
 * Get exchange rate for selected currency pair.
 *
 * @param fromCurrency   currency code
 * @param toCurrency     currency code
 *
 * @return exchange rate or null
 */
- (nullable ZKExchangeRate *)getExchangeRate:(nonnull NSString *)fromCurrency
                                  toCurrency:(nonnull NSString *)toCurrency;

/**
 * Get all available exchange rates.
 *
 * @return mapping between currency pairs and exchange rates
 */
- (nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeRate *> *> *)getExchangeRates;

/**
 * Get exchange setting for selected currency pair.
 *
 * @param fromCurrency   currency code
 * @param toCurrency     currency code
 *
 * @return exchange setting or null
 */
- (nullable ZKExchangeSetting *)getExchangeSetting:(nonnull NSString *)fromCurrency
                                        toCurrency:(nonnull NSString *)toCurrency;

/**
 * Get all available exchange settings.
 *
 * @return mapping between currency pairs and exchange settings
 */
- (nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeSetting *> *> *)getExchangeSettings;

/**
 * Get transaction fee rates for selected crypto currency.
 *
 * @param currency currency code
 *
 * @return transaction fee rate or null
 */
- (nullable ZKTransactionFeeRate *)getTransactionFeeRate:(nonnull NSString *)currency;

/**
 * Get all available crypto transaction fee rates.
 *
 * @return mapping between cryptocurrencies and transaction fee rate
 */
- (nonnull NSDictionary<NSString *, ZKTransactionFeeRate *> *)getTransactionFeeRates;

/**
 * Fetch historical exchange rates for supported time intervals.
 * On success callback returns historical exchange rates are contained in a mapping between
 * time interval on a top level, from currency on second level, to currency on third level and `ZKExchangeRate` objects.
 *
 * @param callback         an interface to receive the result or error
 *
 * @see `ZKTimeInterval`
 */
- (void)fetchHistoricalExchangeRates:(nullable id<ZKHistoricalExchangeRatesCallback>)callback;

/**
 * Listen to changes in current user’s sign in state, exchange settings and transaction fee rates.
 * @param listener interface to listen to changes
 */
- (void)addChangeListener:(nullable id<ZKChangeListener>)listener;

/**
 * Remove change listener.
 * @param listener interface to listen to changes
 */
- (void)removeChangeListener:(nullable id<ZKChangeListener>)listener;

@end
