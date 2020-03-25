//
//  iOSSendTransactionCallback.h
//  Pods
//
//  Created by Tim Šabanov on 26/04/2019.
//

#import <Foundation/Foundation.h>

#import "ZKSendTransactionCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^SendTransactionCompletionBlock)(ZKTransaction * _Nullable transaction, NSError * _Nullable error);

@interface SendTransactionCallback : NSObject <ZKSendTransactionCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(SendTransactionCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
