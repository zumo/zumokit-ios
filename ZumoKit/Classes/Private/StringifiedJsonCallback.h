#import <Foundation/Foundation.h>

#import "ZKStringifiedJsonCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^StringifiedJsonCompletionBlock)(NSString * _Nullable stringifiedJson, NSError * _Nullable error);

@interface StringifiedJsonCallback : NSObject <ZKStringifiedJsonCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(StringifiedJsonCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
