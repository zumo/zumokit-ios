#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString * __nonnull const ZumoKitDomain;

/**
 Possible error code values for NSError's with the `StripeDomain` domain
 */
typedef NS_ENUM(NSInteger, ZKErrorCode)
{
    /**
     Trouble connecting to ZumoKit API.
     */
    ZKAPIConnectionError,
    
    /**
     General-purpose API error.
     */
    ZKAPIError,

    /**
     Authentication with ZumoKit's API failed
     */
    ZKAuthenticationError,
    
    /**
     Something was wrong with the given wallet operation.
     */
    ZKWalletError,
    
    /**
    API call was invalid for some reason.
     */
    ZKInvalidRequestError,
    
    /**
     Rate limit exceeded.
     */
    ZKRateLimitError,
    
    /**
     Something went wrong validating arguments.
     */
    ZKInvalidArgumentError

};

#pragma mark userInfo keys

/**
 Error type.

 @see https://developers.zumo.money/docs/guides/handling-errors.html#error-types
 */
FOUNDATION_EXPORT NSString * __nonnull const ZKZumoKitErrorTypeKey;

/**
Error code.
 
 @see https://developers.zumo.money/docs/guides/handling-errors.html#error-codes
 */
FOUNDATION_EXPORT NSString * __nonnull const ZKZumoKitErrorCodeKey;

/**
 NSError extensions for creating error objects from ZumoKitException params.
 */
@interface NSError(ZumoKit)

/**
 Creates an NSError object from a given Stripe API json response.

 @param zumoKitErrorType ZumoKit error type
 
 @param zumoKitErrorCode ZumoKit error code
 
 @param message Error message.

 @return An NSError object with the error information
 */
+ (nonnull NSError *)errorFromZumoKitException:(nullable NSString *)zumoKitErrorType
                                          code:(nullable NSString *)zumoKitErrorCode
                                       message:(nullable NSString *)message;

/**
  Creates an exception with the name "NSError", setting the reason to the debugDescription.
  The Error instance is added to the UserInfo dictionary under the key "NSError".
*/
- (void)throw;

@end
