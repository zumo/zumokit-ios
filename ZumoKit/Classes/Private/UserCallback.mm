//
//  iOSAuthCallback.m
//  Pods-ZumoKit_Example
//
//  Created by Stephen Radford on 25/04/2019.
//

#import "UserCallback.h"

@interface UserCallback ()

@property (nonatomic, copy) UserCompletionBlock completionHandler;

@end

@implementation UserCallback

- (instancetype) initWithCompletionHandler:(UserCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error {
    _completionHandler(nil, error);
}

- (void)onSuccess:(nullable ZKUser *) user {
    _completionHandler(user, nil);
}

@end
