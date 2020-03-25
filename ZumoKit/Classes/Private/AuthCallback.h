//
//  iOSAuthCallback.h
//  Pods-ZumoKit_Example
//
//  Created by Stephen Radford on 25/04/2019.
//

#import <Foundation/Foundation.h>

#import "ZKAuthCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^AuthCompletionBlock)(ZKUser * _Nullable user, NSError * _Nullable error);

@interface AuthCallback : NSObject <ZKAuthCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(AuthCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
