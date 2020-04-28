//
//  SubmitTransactionCallback.h
//  ZumoKit
//
//  Created by Ivan Romanovski on 23/04/2020.
//

#import <Foundation/Foundation.h>

#import "ZKSubmitTransactionCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^SubmitTransactionCompletionBlock)(ZKTransaction * _Nullable transaction, NSError * _Nullable error);

@interface SubmitTransactionCallback : NSObject <ZKSubmitTransactionCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(SubmitTransactionCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END

