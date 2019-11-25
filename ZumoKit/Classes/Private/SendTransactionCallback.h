//
//  iOSSendTransactionCallback.h
//  Pods
//
//  Created by Tim Šabanov on 26/04/2019.
//

#import <Foundation/Foundation.h>

#import "ZKSendTransactionCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^SendTransactionCompletionBlock)(bool success, NSString * _Nullable errorName, NSString * _Nullable errorMessage, ZKTransaction * _Nullable transaction);

@interface SendTransactionCallback : NSObject <ZKSendTransactionCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(SendTransactionCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
