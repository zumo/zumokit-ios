#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString *__nonnull const ZumoKitDomain;

/**
 Possible error code values for NSError's with the `ZumoKitDomain` domain
 */
typedef NS_ENUM(NSInteger, ZKErrorCode) {
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
Error type, such as api_connection_error, api_error, wallet_error etc.

 @see https://developers.zumo.money/docs/guides/handling-errors.html#error-types
 */
FOUNDATION_EXPORT NSString *__nonnull const ZKZumoKitErrorTypeKey;

/**
In case an error could be handled programmatically in addition to error type error code is returned.

 @see https://developers.zumo.money/docs/guides/handling-errors.html#error-codes
 */
FOUNDATION_EXPORT NSString *__nonnull const ZKZumoKitErrorCodeKey;

/**
 * NSError extension with error type and error code and message.
 * Refer to <a href="https://developers.zumo.money/docs/guides/handling-errors">Handling Errors</a>
 * guide for details on handling errors.
 */
@interface NSError (ZumoKit)

/**
 Creates an NSError object extended with error type and error code.

 @param zumoKitErrorType ZumoKit error type

 @param zumoKitErrorCode ZumoKit error code

 @param message error message

 @return an NSError object with the error information
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
