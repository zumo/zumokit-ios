//
//  SubmitExchangeCallback.h
//  ZumoKit
//
//  Created by Ivan Romanovski on 08/05/2020.
//

#ifndef SubmitExchangeCallback_h
#define SubmitExchangeCallback_h

#import <Foundation/Foundation.h>

#import "ZKSubmitExchangeCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^SubmitExchangeCompletionBlock)(ZKExchange * _Nullable exchange, NSError * _Nullable error);

@interface SubmitExchangeCallback : NSObject <ZKSubmitExchangeCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(SubmitExchangeCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END

#endif /* SubmitExchangeCallback_h */
