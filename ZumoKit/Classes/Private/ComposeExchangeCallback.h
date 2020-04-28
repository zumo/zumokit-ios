//
//  iOSSendTransactionCallback.h
//  Pods
//
//  Created by Ivan Romanovski on 22/04/2020.
//

#import <Foundation/Foundation.h>

#import "ZKComposeExchangeCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^ComposeExchangeCompletionBlock)(ZKComposedExchange * _Nullable composedExchange, NSError * _Nullable error);

@interface ComposeExchangeCallback : NSObject <ZKComposeExchangeCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(ComposeExchangeCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
