//
//  iOSAuthCallback.h
//  Pods-ZumoKit_Example
//
//  Created by Stephen Radford on 25/04/2019.
//

#import <Foundation/Foundation.h>

#import "ZKAuthCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^AuthCompletionBlock)(bool success, short errorCode, NSString * _Nullable errorMessage, ZKUser * _Nullable user);

@interface AuthCallback : NSObject <ZKAuthCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(AuthCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
