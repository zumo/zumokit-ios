// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#import "ZKZumoKitError.h"
#import <Foundation/Foundation.h>
@class ZKUser;


@protocol ZKAuthCallback

- (void)onError:(nonnull ZKZumoKitError *)error;

- (void)onSuccess:(nullable ZKUser *)user;

@end
