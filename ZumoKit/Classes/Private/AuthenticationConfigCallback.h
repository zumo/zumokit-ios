#import <Foundation/Foundation.h>

#import "ZKAuthenticationConfigCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^AuthenticationConfigCompletionBlock)(ZKAuthenticationConfig * _Nullable authenticationConfig, NSError * _Nullable error);

@interface AuthenticationConfigCallback : NSObject <ZKAuthenticationConfigCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(AuthenticationConfigCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
