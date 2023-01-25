// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#import "ZKAccountDataSnapshot.h"
#import <Foundation/Foundation.h>


/** Callback interface used to listen for account data changes in `ZKUser` class. */
@protocol ZKAccountDataListener

- (void)onDataChange:(nonnull NSArray<ZKAccountDataSnapshot *> *)snapshots;

@end