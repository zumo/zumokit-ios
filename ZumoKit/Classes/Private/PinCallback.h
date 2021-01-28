#import <Foundation/Foundation.h>

#import "ZKPinCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^PinCompletionBlock)(int32_t pin, NSError * _Nullable error);

@interface PinCallback : NSObject <ZKPinCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(PinCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
