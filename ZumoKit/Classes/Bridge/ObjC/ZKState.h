// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKAccount.h"
#import "ZKExchange.h"
#import "ZKExchangeRate.h"
#import "ZKExchangeSettings.h"
#import "ZKFeeRates.h"
#import "ZKSyncStatus.h"
#import "ZKTransaction.h"
#import "ZKTxServiceConnection.h"
#import <Foundation/Foundation.h>

@interface ZKState : NSObject
- (nonnull instancetype)initWithAccounts:(nonnull NSArray<ZKAccount *> *)accounts
                            transactions:(nonnull NSArray<ZKTransaction *> *)transactions
                               exchanges:(nonnull NSArray<ZKExchange *> *)exchanges
                                   token:(nonnull NSString *)token
                            activeUserId:(nullable NSString *)activeUserId
                           exchangeRates:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeRate *> *> *)exchangeRates
                        exchangeSettings:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeSettings *> *> *)exchangeSettings
                     txServiceConnection:(nonnull ZKTxServiceConnection *)txServiceConnection
                                feeRates:(nonnull NSDictionary<NSString *, ZKFeeRates *> *)feeRates
                              syncStatus:(ZKSyncStatus)syncStatus
                        isModulrCustomer:(BOOL)isModulrCustomer;
+ (nonnull instancetype)stateWithAccounts:(nonnull NSArray<ZKAccount *> *)accounts
                             transactions:(nonnull NSArray<ZKTransaction *> *)transactions
                                exchanges:(nonnull NSArray<ZKExchange *> *)exchanges
                                    token:(nonnull NSString *)token
                             activeUserId:(nullable NSString *)activeUserId
                            exchangeRates:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeRate *> *> *)exchangeRates
                         exchangeSettings:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeSettings *> *> *)exchangeSettings
                      txServiceConnection:(nonnull ZKTxServiceConnection *)txServiceConnection
                                 feeRates:(nonnull NSDictionary<NSString *, ZKFeeRates *> *)feeRates
                               syncStatus:(ZKSyncStatus)syncStatus
                         isModulrCustomer:(BOOL)isModulrCustomer;

@property (nonatomic, readonly, nonnull) NSArray<ZKAccount *> * accounts;

@property (nonatomic, readonly, nonnull) NSArray<ZKTransaction *> * transactions;

@property (nonatomic, readonly, nonnull) NSArray<ZKExchange *> * exchanges;

@property (nonatomic, readonly, nonnull) NSString * token;

@property (nonatomic, readonly, nullable) NSString * activeUserId;

@property (nonatomic, readonly, nonnull) NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeRate *> *> * exchangeRates;

@property (nonatomic, readonly, nonnull) NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeSettings *> *> * exchangeSettings;

@property (nonatomic, readonly, nonnull) ZKTxServiceConnection * txServiceConnection;

@property (nonatomic, readonly, nonnull) NSDictionary<NSString *, ZKFeeRates *> * feeRates;

@property (nonatomic, readonly) ZKSyncStatus syncStatus;

@property (nonatomic, readonly) BOOL isModulrCustomer;

@end
