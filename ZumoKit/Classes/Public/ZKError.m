#import "ZKError.h"
#import "ZKZumoKitErrorType.h"

NSString *const ZumoKitDoman = @"money.zumo.zumokit";
NSString *const ZKZumoKitErrorTypeKey = @"money.zumo.zumokit:ZumoKitErrorTypeKey";
NSString *const ZKZumoKitErrorCodeKey = @"money.zumo.zumokit:ZumoKitErrorCodeKey";

@implementation NSError (ZumoKit)

+ (nonnull NSError *)errorFromZumoKitException:(nullable NSString *)zumoKitErrorType
                                          code:(nullable NSString *)zumoKitErrorCode
                                       message:(nullable NSString *)message {
    NSInteger code = 0;
     if ([zumoKitErrorType isEqualToString:ZKZumoKitErrorTypeAPICONNECTIONERROR]) {
         code = ZKAPIConnectionError;
     } else if ([zumoKitErrorType isEqualToString:ZKZumoKitErrorTypeAPIERROR]) {
         code = ZKAPIError;
     } else if ([zumoKitErrorType isEqualToString:ZKZumoKitErrorTypeAUTHENTICATIONERROR]) {
         code = ZKAuthenticationError;
     } else if ([zumoKitErrorType isEqualToString:ZKZumoKitErrorTypeWALLETERROR]) {
         code = ZKWalletError;
     } else if ([zumoKitErrorType isEqualToString:ZKZumoKitErrorTypeINVALIDREQUESTERROR]) {
         code = ZKInvalidRequestError;
     } else if ([zumoKitErrorType isEqualToString:ZKZumoKitErrorTypeRATELIMITERROR]) {
         code = ZKRateLimitError;
     } else if ([zumoKitErrorType isEqualToString:ZKZumoKitErrorTypeINVALIDARGUMENTERROR]) {
         code = ZKInvalidArgumentError;
     }
     
     NSMutableDictionary *userInfo = [NSMutableDictionary dictionary];

     userInfo[ZKZumoKitErrorTypeKey] = zumoKitErrorType;
     userInfo[ZKZumoKitErrorCodeKey] = zumoKitErrorCode;
     userInfo[NSLocalizedDescriptionKey] = message;

    return [NSError errorWithDomain:ZKZumoKitErrorTypeKey
                               code:code
                           userInfo:userInfo];
}

- (void)throw
{
    @throw [NSException exceptionWithName:@"NSError"
                                   reason:self.debugDescription
                                 userInfo:@{ @"NSError" : self }];
}

@end
