//
//  ZumoKit.h
//  ZumoKit
//
//  Created by Tim Šabanov on 07/02/2019.
//  Copyright © 2019 Zumo. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for ZumoKit.
FOUNDATION_EXPORT double ZumoKitVersionNumber;

//! Project version string for ZumoKit.
FOUNDATION_EXPORT const unsigned char ZumoKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ZumoKit/PublicHeader.h>

#import <Foundation/Foundation.h>
#import "ZKError.h"
#import "ZKZumoKitErrorCode.h"
#import "ZKZumoKitErrorType.h"
#import "ZKUtils.h"
#import "ZKUser.h"
#import "ZKUser+CallbackCompletion.h"
#import "ZKWallet.h"
#import "ZKWallet+CallbackCompletion.h"
#import "ZKTimeInterval.h"
#import "ZKCurrencyCode.h"
#import "ZKNetworkType.h"
#import "ZKAccountType.h"
#import "ZKTransactionFeeRate.h"
#import "ZKChangeListener.h"
#import "ZKLogListener.h"
#import "ZKLogLevel.h"
#import "ZKAccountDataSnapshot.h"

typedef void (^ZKUserCompletionBlock)(ZKUser *_Nullable user, NSError *_Nullable error);

typedef NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeRate *> *> *ZKExchangeRates;

typedef NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeSetting *> *> *ZKExchangeSettings;

typedef NSDictionary<NSString *, ZKTransactionFeeRate *> *ZKTransactionFeeRates;

typedef NSDictionary<NSString *, NSDictionary<NSString *, NSDictionary<NSString *, NSArray<ZKExchangeRate *> *> *> *> *ZKHistoricalExchangeRates;

typedef void (^ZKHistoricalExchangeRatesCompletionBlock)(ZKHistoricalExchangeRates _Nullable historicalExchangeRates, NSError *_Nullable error);

NS_ASSUME_NONNULL_BEGIN
/**
 * Entry point to ZumoKit iOS SDK.
 * <p>
 * See <a target="_top" href="https://developers.zumo.money/docs/guides/getting-started">Getting Started</a> guide for usage details.
 * */
@interface ZumoKit : NSObject

/** ZumoKit SDK semantic version tag if exists, commit hash otherwise.*/
+ (nonnull NSString *)version;

/**
 * Sets log level for current logger.
 *
 * @param logLevel log level, e.g. debug or info
 *
 * @see `ZKLogLevel`
 */
+ (void)setLogLevel:(ZKLogLevel)logLevel;

/**
 * Sets log handler for all ZumoKit related logs.
 *
 * @param logListener interface to listen to changes
 * @param logLevel log level, e.g. debug or info
 */
+ (void)onLog:(nullable id<ZKLogListener>)logListener
     logLevel:(ZKLogLevel)logLevel;

/**
* Initializes ZumoKit SDK. Should only be called once.
*
* @param apiKey                         ZumoKit API Key
* @param apiUrl                           ZumoKit API URL
* @param transactionServiceUrl  ZumoKit Transaction Service URL
* @param cardServiceUrl             ZumoKit Card Service URL
*
* @return ZumoKit instance
*/
- (instancetype)initWithApiKey:(NSString *)apiKey
                        apiUrl:(NSString *)apiUrl
         transactionServiceUrl:(NSString *)transactionServiceUrl
                cardServiceUrl:(NSString *)cardServiceUrl;

/**
* Signs in user corresponding to user token set. Sets current user to the newly signed in user.
* Refer to <a href="https://developers.zumo.money/docs/setup/server#get-zumokit-user-token">Server</a> guide for details on how to get user token set.
*
* @param userTokenSet   user token set
* @param completion       completion block to receive the result or error
*
* @see `ZKUser`
*/
- (void)signIn:(nonnull NSString *)userTokenSet
    completion:(_Nonnull ZKUserCompletionBlock)completion;

/** Signs out current user. */
- (void)signOut;

/**
* Get currently signed-in user or null.
*
* @return current user or null
*/
- (nullable ZKUser *)getCurrentUser;

/**
* Get crypto utils.
*
* @return crypto utils
*/
- (nonnull ZKUtils *)getUtils;

/**
* Get exchange rate for selected currency pair.
*
* @param fromCurrency  currency code
* @param toCurrency       currency code
*/
- (nullable ZKExchangeRate *)getExchangeRate:(nonnull NSString *)fromCurrency
                                  toCurrency:(nonnull NSString *)toCurrency;

/**
 * Get all available exchange rates.
 *
 * @return mapping between currency pairs and exchange rates
 */
- (nonnull ZKExchangeRates)getExchangeRates;

/**
* Get exchange settings for selected currency pair.
*
* @param fromCurrency  currency code
* @param toCurrency       currency code
*/
- (nullable ZKExchangeSetting *)getExchangeSetting:(nonnull NSString *)fromCurrency
                                        toCurrency:(nonnull NSString *)toCurrency;

/**
 * Get all available exchange settings.
 *
 * @return mapping between currency pairs and exchange settings
 */
- (nonnull ZKExchangeSettings)getExchangeSettings;

/**
* Get transasction fee rate for selected crypto currency.
*
* @param currency  currency code
*/
- (nullable ZKTransactionFeeRate *)getTransactionFeeRate:(nonnull NSString *)currency;

/**
 * Get all available crypto transaction fee rates.
 *
 * @return mapping between cryptocurrencies and transaction fee rate
 */
- (nonnull ZKTransactionFeeRates)getTransactionFeeRates;

/**
* Fetch historical exchange rates for supported time intervals.
* On success callback returns historical exchange rates are contained in a mapping between
*  time interval on a top level, from currency on second level, to currency on third level and `ZKExchangeRate` objects.
*
* @param completion an interface to receive the result or error
*
* @see `ZKTimeInterval`
*/
- (void)fetchHistoricalExchangeRates:(_Nonnull ZKHistoricalExchangeRatesCompletionBlock)completion;

/**
 * Listen to changes in current user’s sign in state, exchange rates, exchange settings or
 * transaction fee rates.
 *
 * @param listener interface to listen to changes
 */
- (void)addChangeListener:(nullable id<ZKChangeListener>)listener;

/**
 * Remove change listener.
 *
 * @param listener interface to listen to changes
 */
- (void)removeChangeListener:(nullable id<ZKChangeListener>)listener;

@end
NS_ASSUME_NONNULL_END
