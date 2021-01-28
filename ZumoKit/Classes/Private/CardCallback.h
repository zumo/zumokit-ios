#import <Foundation/Foundation.h>

#import "ZKCardCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^CardCompletionBlock)(ZKCard * _Nullable card, NSError * _Nullable error);

@interface CardCallback : NSObject <ZKCardCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(CardCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
