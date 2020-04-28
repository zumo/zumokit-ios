//
//  iOSAuthCallback.h
//  Pods-ZumoKit_Example
//
//  Created by Stephen Radford on 25/04/2019.
//

#import <Foundation/Foundation.h>

#import "ZKUserCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^UserCompletionBlock)(ZKUser * _Nullable user, NSError * _Nullable error);

@interface UserCallback : NSObject <ZKUserCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(UserCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
