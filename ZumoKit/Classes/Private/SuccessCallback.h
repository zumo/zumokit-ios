#import <Foundation/Foundation.h>

#import "ZKSuccessCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^SuccessCompletionBlock)(NSError * _Nullable error);

@interface SuccessCallback : NSObject <ZKSuccessCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(SuccessCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
