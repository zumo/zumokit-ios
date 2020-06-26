#import <Foundation/Foundation.h>

#import "ZKAccountFiatPropertiesCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^AccountFiatPropertiesCompletionBlock)(ZKAccountFiatProperties * _Nullable accountFiatProperties, NSError * _Nullable error);

@interface AccountFiatPropertiesCallback : NSObject <ZKAccountFiatPropertiesCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(AccountFiatPropertiesCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
