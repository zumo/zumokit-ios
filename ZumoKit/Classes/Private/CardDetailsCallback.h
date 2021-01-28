#import <Foundation/Foundation.h>

#import "ZKCardDetailsCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^CardDetailsCompletionBlock)(ZKCardDetails * _Nullable cardDetails, NSError * _Nullable error);

@interface CardDetailsCallback : NSObject <ZKCardDetailsCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(CardDetailsCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
