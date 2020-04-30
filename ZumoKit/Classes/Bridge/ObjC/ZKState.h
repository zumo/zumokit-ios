// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKAccount.h"
#import "ZKExchange.h"
#import "ZKExchangeFees.h"
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
                           exchangeRates:(nonnull NSString *)exchangeRates
                            exchangeFees:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeFees *> *> *)exchangeFees
                   bitcoinDepositAddress:(nonnull NSString *)bitcoinDepositAddress
                  ethereumDepositAddress:(nonnull NSString *)ethereumDepositAddress
                     txServiceConnection:(nonnull ZKTxServiceConnection *)txServiceConnection
                                feeRates:(nonnull NSDictionary<NSString *, ZKFeeRates *> *)feeRates
                              syncStatus:(ZKSyncStatus)syncStatus;
+ (nonnull instancetype)stateWithAccounts:(nonnull NSArray<ZKAccount *> *)accounts
                             transactions:(nonnull NSArray<ZKTransaction *> *)transactions
                                exchanges:(nonnull NSArray<ZKExchange *> *)exchanges
                                    token:(nonnull NSString *)token
                             activeUserId:(nullable NSString *)activeUserId
                            exchangeRates:(nonnull NSString *)exchangeRates
                             exchangeFees:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeFees *> *> *)exchangeFees
                    bitcoinDepositAddress:(nonnull NSString *)bitcoinDepositAddress
                   ethereumDepositAddress:(nonnull NSString *)ethereumDepositAddress
                      txServiceConnection:(nonnull ZKTxServiceConnection *)txServiceConnection
                                 feeRates:(nonnull NSDictionary<NSString *, ZKFeeRates *> *)feeRates
                               syncStatus:(ZKSyncStatus)syncStatus;

@property (nonatomic, readonly, nonnull) NSArray<ZKAccount *> * accounts;

@property (nonatomic, readonly, nonnull) NSArray<ZKTransaction *> * transactions;

@property (nonatomic, readonly, nonnull) NSArray<ZKExchange *> * exchanges;

@property (nonatomic, readonly, nonnull) NSString * token;

@property (nonatomic, readonly, nullable) NSString * activeUserId;

@property (nonatomic, readonly, nonnull) NSString * exchangeRates;

/** exchange_rates: map<string, map<string, exchange_rate>>; */
@property (nonatomic, readonly, nonnull) NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeFees *> *> * exchangeFees;

@property (nonatomic, readonly, nonnull) NSString * bitcoinDepositAddress;

/** should be moved to internal state */
@property (nonatomic, readonly, nonnull) NSString * ethereumDepositAddress;

/** should be moved to internal state */
@property (nonatomic, readonly, nonnull) ZKTxServiceConnection * txServiceConnection;

@property (nonatomic, readonly, nonnull) NSDictionary<NSString *, ZKFeeRates *> * feeRates;

@property (nonatomic, readonly) ZKSyncStatus syncStatus;

@end
