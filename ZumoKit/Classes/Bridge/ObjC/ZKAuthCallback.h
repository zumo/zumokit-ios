// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#import <Foundation/Foundation.h>
@class ZKUser;


@protocol ZKAuthCallback

- (void)onError:(nonnull NSError *)e;

- (void)onSuccess:(nullable ZKUser *)user;

@end
