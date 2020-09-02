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
#import "ZKState.h"
#import "ZKStateListener.h"
#import "ZKUtils.h"
#import "ZKUser.h"
#import "ZKUser+CallbackCompletion.h"
#import "ZKWallet.h"
#import "ZKWallet+CallbackCompletion.h"
#import "ZKHistoricalExchangeRatesInterval.h"
#import "ZKCurrencyCode.h"
#import "ZKNetworkType.h"
#import "ZKAccountType.h"

typedef void (^UserCompletionBlock)(ZKUser *_Nullable user, NSError *_Nullable error);

typedef NSDictionary<NSString *, NSDictionary<NSString *, NSDictionary<NSString *, NSArray<ZKExchangeRate *> *> *> *> *ZKHistoricalExchangeRates;

typedef void (^HistoricalExchangeRatesCompletionBlock)(ZKHistoricalExchangeRates _Nullable historicalExchangeRates, NSError *_Nullable error);

NS_ASSUME_NONNULL_BEGIN
/**
 * Entry point to ZumoKit Android SDK.
 * <p>
 * Once ZumoKit is initialized, this class provides access to user retrieval,
 * ZumoKit state object, crypto utility class and historical exchange rates.
 * State change listeners can be added and removed.
 * <p>
 * See <a target="_top" href="https://developers.zumo.money/docs/guides/getting-started">Getting Started</a> guide for usage details.
 * */
@interface ZumoKit : NSObject

@property(strong, nonatomic) ZKUtils *utils;

/** ZumoKit SDK semantic version tag if exists, commit hash otherwise.*/
+ (nonnull NSString *)version;

/**
* Initializes ZumoKit SDK. Should only be called once.
*
* @param apiKey           ZumoKit Api-Key
* @param apiRoot         ZumoKit API url
* @param txServiceUrl  ZumoKit Transaction Service url
*
* @return ZumoKit instance
*/
- (instancetype)initWithApiKey:(NSString *)apiKey
                       apiRoot:(NSString *)apiRoot
                  txServiceUrl:(NSString *)txServiceUrl;

/**
* Get user corresponding to user token set.
* Refer to <a target="_top" href="https://developers.zumo.money/docs/setup/server#get-zumokit-user-token">Server</a> guide for details on how to get user token set.
*
* @param userTokenSet   user token set
* @param completion       completion block to receive the result or error
*
* @see `ZKUser`
*/
- (void)getUser:(nonnull NSString *)userTokenSet
     completion:(_Nonnull UserCompletionBlock)completion;

/**
* Fetch historical exchange rates for supported time intervals.
* On success callback returns historical exchange rates are contained in a mapping between
*  time interval on a top level, from currency on second level, to currency on third level and `ZKExchangeRate` objects.
*
* @param completion an interface to receive the result or error
*
* @see `ZKHistoricalExchangeRatesInterval`
*/
- (void)getHistoricalExchangeRates:(_Nonnull HistoricalExchangeRatesCompletionBlock)completion;

/**
* Returns current ZumoKit state. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/zumokit-state">ZumoKit State</a> guide for details.
*
* @return current ZumoKit state
*/
- (nonnull ZKState *)getState;

/**
* Listen to all state changes. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/zumokit-state#listen-to-state-changes">ZumoKit State</a> guide for details.
*
* @param listener interface to listen to state changes
*/
- (void)addStateListener:(nullable id<ZKStateListener>)listener;

/**
* Remove listener to state changes. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/zumokit-state#remove-state-listener">ZumoKit State</a> guide for details.
*
* @param listener interface to listen to state changes
*/
- (void)removeStateListener:(nullable id<ZKStateListener>)listener;

@end
NS_ASSUME_NONNULL_END
