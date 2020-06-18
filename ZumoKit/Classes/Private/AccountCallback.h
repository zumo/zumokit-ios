#import <Foundation/Foundation.h>

#import "ZKAccountCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^AccountCompletionBlock)(ZKAccount * _Nullable account, NSError * _Nullable error);

@interface AccountCallback : NSObject <ZKAccountCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(AccountCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
