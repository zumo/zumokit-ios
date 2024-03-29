// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKAccount.h"
#import "ZKTransaction.h"
#import <Foundation/Foundation.h>

/** Record containing account data snapshot. */
@interface ZKAccountDataSnapshot : NSObject
- (nonnull instancetype)initWithAccount:(nonnull ZKAccount *)account
                           transactions:(nonnull NSArray<ZKTransaction *> *)transactions;
+ (nonnull instancetype)accountDataSnapshotWithAccount:(nonnull ZKAccount *)account
                                          transactions:(nonnull NSArray<ZKTransaction *> *)transactions;

/** Account. */
@property (nonatomic, readonly, nonnull) ZKAccount * account;

/** Account's transactions. */
@property (nonatomic, readonly, nonnull) NSArray<ZKTransaction *> * transactions;

@end
