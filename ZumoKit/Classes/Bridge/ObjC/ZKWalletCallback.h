// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#import <Foundation/Foundation.h>
@class ZKWallet;


/** Callback interface used by methods in @link user class. */
@protocol ZKWalletCallback

- (void)onError:(nonnull NSError *)e;

- (void)onSuccess:(nullable ZKWallet *)wallet;

@end
