// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#import <Foundation/Foundation.h>


@protocol ZKSyncCallback

- (void)onError:(int16_t)errorCode
   errorMessage:(nonnull NSString *)errorMessage;

- (void)onSuccess;

@end
