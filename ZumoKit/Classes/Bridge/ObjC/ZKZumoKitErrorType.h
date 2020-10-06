// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

#import <Foundation/Foundation.h>

/**
 * The type of error returned. In case of wallet errors, these errors can be safely displayed to the end users.
 * See <a href="https://developers.zumo.money/docs/guides/handling-errors">Handling Errors</a> for details.
 */
@interface ZKZumoKitErrorType : NSObject
- (nonnull instancetype)init;
+ (nonnull instancetype)zumoKitErrorType;

@end

/** Base ZumoKit error. */
extern NSString * __nonnull const ZKZumoKitErrorTypeZUMOKITERROR;
/** Failure to connect to ZumoKit’s API. */
extern NSString * __nonnull const ZKZumoKitErrorTypeAPICONNECTIONERROR;
/** Default error if something goes wrong on our side. */
extern NSString * __nonnull const ZKZumoKitErrorTypeAPIERROR;
/** Failed to authenticate with ZumoKit's API. */
extern NSString * __nonnull const ZKZumoKitErrorTypeAUTHENTICATIONERROR;
/**
 * Wallet errors are the most common type of error you should expect to handle.
 * They result when user's wallet action can't be performed, e.g. balance too low or
 * invalid wallet password are such errors.
 */
extern NSString * __nonnull const ZKZumoKitErrorTypeWALLETERROR;
/** Invalid request errors arise when request to API has invalid parameters. */
extern NSString * __nonnull const ZKZumoKitErrorTypeINVALIDREQUESTERROR;
/** Too many requests hit the API too quickly. */
extern NSString * __nonnull const ZKZumoKitErrorTypeRATELIMITERROR;
/**
 * Errors triggered when failing to validate arguments,
 * e.g. when a destination address is invalid.
 */
extern NSString * __nonnull const ZKZumoKitErrorTypeINVALIDARGUMENTERROR;
