// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#import "ZKAccount.h"
#import "ZKTransaction.h"
#import <Foundation/Foundation.h>


/** Callback interface used by methods in `ZKUser` class. */
@protocol ZKUserListener

- (void)update:(nonnull NSArray<ZKAccount *> *)accounts
  transactions:(nonnull NSArray<ZKTransaction *> *)transactions;

@end
