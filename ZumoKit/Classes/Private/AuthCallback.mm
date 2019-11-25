//
//  iOSAuthCallback.m
//  Pods-ZumoKit_Example
//
//  Created by Stephen Radford on 25/04/2019.
//

#import "AuthCallback.h"

@interface AuthCallback ()

@property (nonatomic, copy) AuthCompletionBlock completionHandler;

@end

@implementation AuthCallback

- (instancetype) initWithCompletionHandler:(AuthCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(int16_t)errorCode errorMessage:(nonnull NSString *)errorMessage {
    _completionHandler(NO, errorCode, errorMessage, NULL);
}

- (void)onSuccess:(nullable ZKUser *) user {
    _completionHandler(YES, 0, NULL, user);
}

@end
