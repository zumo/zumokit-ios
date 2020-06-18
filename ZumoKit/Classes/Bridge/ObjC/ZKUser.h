// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#import "ZKAccount.h"
#import "ZKExchange.h"
#import "ZKTransaction.h"
#import <Foundation/Foundation.h>
@protocol ZKAccountCallback;
@protocol ZKAccountListener;
@protocol ZKMnemonicCallback;
@protocol ZKSuccessCallback;
@protocol ZKTransactionListener;
@protocol ZKUserListener;
@protocol ZKWalletCallback;


@interface ZKUser : NSObject

- (nonnull NSString *)getId;

- (BOOL)hasWallet;

- (BOOL)isActiveUser;

- (BOOL)isModulrCustomer:(nonnull NSString *)network;

- (void)makeModulrCustomer:(nonnull NSString *)network
                 firstName:(nonnull NSString *)firstName
                middleName:(nullable NSString *)middleName
                  lastName:(nonnull NSString *)lastName
               dateOfBirth:(nonnull NSString *)dateOfBirth
                     email:(nonnull NSString *)email
                     phone:(nonnull NSString *)phone
              addressLine1:(nonnull NSString *)addressLine1
              addressLine2:(nullable NSString *)addressLine2
                   country:(nonnull NSString *)country
                  postCode:(nonnull NSString *)postCode
                  postTown:(nonnull NSString *)postTown
                  callback:(nullable id<ZKSuccessCallback>)callback;

- (void)createFiatAccount:(nonnull NSString *)network
             currencyCode:(nonnull NSString *)currencyCode
                 callback:(nullable id<ZKAccountCallback>)callback;

- (void)createWallet:(nonnull NSString *)mnemonic
            password:(nonnull NSString *)password
            callback:(nullable id<ZKWalletCallback>)callback;

- (void)unlockWallet:(nonnull NSString *)password
            callback:(nullable id<ZKWalletCallback>)callback;

- (void)revealMnemonic:(nonnull NSString *)password
              callback:(nullable id<ZKMnemonicCallback>)callback;

- (BOOL)isRecoveryMnemonic:(nonnull NSString *)mnemonic;

- (void)recoverWallet:(nonnull NSString *)mnemonic
             password:(nonnull NSString *)password
             callback:(nullable id<ZKWalletCallback>)callback;

- (nullable ZKAccount *)getAccount:(nonnull NSString *)currencyCode
                           network:(nonnull NSString *)network
                              type:(nonnull NSString *)type;

- (nonnull NSArray<ZKAccount *> *)getAccounts;

- (nonnull NSArray<ZKTransaction *> *)getAccountTransactions:(nonnull NSString *)accountId;

- (nonnull NSArray<ZKTransaction *> *)getTransactions;

- (nullable ZKTransaction *)getTransaction:(nonnull NSString *)transactionId;

- (nonnull NSArray<ZKExchange *> *)getExchanges;

- (nullable ZKExchange *)getExchangeByTransactionId:(nonnull NSString *)transactionId;

- (void)addListener:(nullable id<ZKUserListener>)listener;

- (void)removeListener:(nullable id<ZKUserListener>)listener;

- (void)addAccountListener:(nonnull NSString *)accountId
                  listener:(nullable id<ZKAccountListener>)listener;

- (void)removeAccountListener:(nullable id<ZKAccountListener>)listener;

- (void)addTransactionListener:(nonnull NSString *)transactionId
                      listener:(nullable id<ZKTransactionListener>)listener;

- (void)removeTransactionListener:(nullable id<ZKTransactionListener>)listener;

@end
