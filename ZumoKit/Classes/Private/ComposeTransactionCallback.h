//
//  iOSSendTransactionCallback.h
//  Pods
//
//  Created by Tim Šabanov on 26/04/2019.
//

#import <Foundation/Foundation.h>

#import "ZKComposeTransactionCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^ComposeTransactionCompletionBlock)(ZKComposedTransaction * _Nullable composedTransaction, NSError * _Nullable error);

@interface ComposeTransactionCallback : NSObject <ZKComposeTransactionCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(ComposeTransactionCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
