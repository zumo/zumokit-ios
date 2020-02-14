// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKAccount.h"
#import "ZKFeeRates.h"
#import "ZKSyncStatus.h"
#import "ZKTransaction.h"
#import "ZKTxServiceConnection.h"
#import <Foundation/Foundation.h>

@interface ZKState : NSObject
- (nonnull instancetype)initWithAccounts:(nonnull NSArray<ZKAccount *> *)accounts
                            transactions:(nonnull NSArray<ZKTransaction *> *)transactions
                                   token:(nonnull NSString *)token
                            activeUserId:(nullable NSString *)activeUserId
                           exchangeRates:(nonnull NSString *)exchangeRates
                     txServiceConnection:(nonnull ZKTxServiceConnection *)txServiceConnection
                                feeRates:(nonnull NSDictionary<NSString *, ZKFeeRates *> *)feeRates
                              syncStatus:(ZKSyncStatus)syncStatus;
+ (nonnull instancetype)stateWithAccounts:(nonnull NSArray<ZKAccount *> *)accounts
                             transactions:(nonnull NSArray<ZKTransaction *> *)transactions
                                    token:(nonnull NSString *)token
                             activeUserId:(nullable NSString *)activeUserId
                            exchangeRates:(nonnull NSString *)exchangeRates
                      txServiceConnection:(nonnull ZKTxServiceConnection *)txServiceConnection
                                 feeRates:(nonnull NSDictionary<NSString *, ZKFeeRates *> *)feeRates
                               syncStatus:(ZKSyncStatus)syncStatus;

@property (nonatomic, readonly, nonnull) NSArray<ZKAccount *> * accounts;

@property (nonatomic, readonly, nonnull) NSArray<ZKTransaction *> * transactions;

@property (nonatomic, readonly, nonnull) NSString * token;

@property (nonatomic, readonly, nullable) NSString * activeUserId;

@property (nonatomic, readonly, nonnull) NSString * exchangeRates;

@property (nonatomic, readonly, nonnull) ZKTxServiceConnection * txServiceConnection;

@property (nonatomic, readonly, nonnull) NSDictionary<NSString *, ZKFeeRates *> * feeRates;

@property (nonatomic, readonly) ZKSyncStatus syncStatus;

@end
