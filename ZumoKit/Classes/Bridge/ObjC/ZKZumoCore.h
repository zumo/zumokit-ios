// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#import "ZKState.h"
#import <Foundation/Foundation.h>
@class ZKUtils;
@class ZKZumoCore;
@protocol ZKHistoricalExchangeRatesCallback;
@protocol ZKHttpImpl;
@protocol ZKStateListener;
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
 * @param apiRoot         ZumoKit API url
 * @param txServiceRoot  ZumoKit Transaction Service url
 *
 * @return ZumoKit instance
 */
+ (nullable ZKZumoCore *)init:(nullable id<ZKHttpImpl>)httpImpl
                       wsImpl:(nullable id<ZKWebSocketImpl>)wsImpl
                       apiKey:(nonnull NSString *)apiKey
                      apiRoot:(nonnull NSString *)apiRoot
                txServiceRoot:(nonnull NSString *)txServiceRoot;

/**
 * Get user corresponding to user token set.
 * Refer to <a href="https://developers.zumo.money/docs/setup/server#get-zumokit-user-token">Server</a> guide for details on how to get user token set.
 *
 * @param userTokenSet   user token set
 * @param callback         an interface to receive the result or error
 *
 * @see `ZKUser`
 */
- (void)getUser:(nonnull NSString *)userTokenSet
       callback:(nullable id<ZKUserCallback>)callback;

/**
 * Get crypto utils class.
 *
 * @return crypto utils
 */
- (nullable ZKUtils *)getUtils;

/**
 * Fetch historical exchange rates for supported time intervals.
 * On success callback returns historical exchange rates are contained in a mapping between
 * time interval on a top level, from currency on second level, to currency on third level and `ZKExchangeRate` objects.
 *
 * @param callback         an interface to receive the result or error
 *
 * @see `ZKHistoricalExchangeRatesInterval`
 */
- (void)getHistoricalExchangeRates:(nullable id<ZKHistoricalExchangeRatesCallback>)callback;

/**
 * Returns current ZumoKit state. Refer to <a href="https://developers.zumo.money/docs/guides/zumokit-state">ZumoKit State</a> guide for details.
 *
 * @return current ZumoKit state
 */
- (nonnull ZKState *)getState;

/**
 * Listen to all state changes. Refer to <a href="https://developers.zumo.money/docs/guides/zumokit-state#listen-to-state-changes">ZumoKit State</a> guide for details.
 *
 * @param listener interface to listen to state changes
 */
- (void)addStateListener:(nullable id<ZKStateListener>)listener;

/**
 * Remove listener to state changes. Refer to <a href="https://developers.zumo.money/docs/guides/zumokit-state#remove-state-listener">ZumoKit State</a> guide for details.
 *
 * @param listener interface to listen to state changes
 */
- (void)removeStateListener:(nullable id<ZKStateListener>)listener;

@end
