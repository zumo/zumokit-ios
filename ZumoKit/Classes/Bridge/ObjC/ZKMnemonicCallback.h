// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#import <Foundation/Foundation.h>


/** Callback interface used by methods in @link user class. */
@protocol ZKMnemonicCallback

- (void)onError:(nonnull NSError *)e;

- (void)onSuccess:(nonnull NSString *)mnemonic;

@end
