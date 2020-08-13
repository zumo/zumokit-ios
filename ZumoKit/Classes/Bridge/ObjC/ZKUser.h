// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#import "ZKAccount.h"
#import "ZKExchange.h"
#import "ZKTransaction.h"
#import <Foundation/Foundation.h>
@protocol ZKAccountCallback;
@protocol ZKAccountFiatPropertiesCallback;
@protocol ZKAccountListener;
@protocol ZKMnemonicCallback;
@protocol ZKSuccessCallback;
@protocol ZKTransactionListener;
@protocol ZKUserListener;
@protocol ZKWalletCallback;


/**
 * User class provides methods for managing user wallet and accounts.
 * <p>
 * User instance can be obtained via <code>getUser</code> method on @link ZumoKit instance.
 * <p>
 * See <a href="https://developers.zumo.money/docs/guides/manage-user-wallet">Manage User Wallet</a>,
 * <a href="https://developers.zumo.money/docs/guides/create-fiat-account">Create Fiat Account</a> and
 * <a href="https://developers.zumo.money/docs/guides/view-user-data">View User Data</a>
 * guides for usage details.
 */
@interface ZKUser : NSObject

/**
 * Get user id.
 * @return user id
 */
- (nonnull NSString *)getId;

/**
 * Check if user has wallet
 * @return true if user has wallet
 */
- (BOOL)hasWallet;

/**
 * Check if user is currenly active user. Only one user can be active at a time.
 * @return true if user is currenly active user
 */
- (BOOL)isActiveUser;

/**
 * Check if user is a Modulr customer on 'MAINNET' or 'TESTNET' network.
 * @param  network 'MAINNET' or 'TESTNET'
 * @return true if user is currenly active user.
 * @see    network_type
 */
- (BOOL)isModulrCustomer:(nonnull NSString *)network;

/**
 * Make user Modulr customer on specified network by providing user's personal details.
 * @param  network        'MAINNET' or 'TESTNET'
 * @param  firstName     first name
 * @param  middleName    middle name or null
 * @param  lastName      last name
 * @param  dateOfBirth  date of birth in ISO 8601 format, e.g '2020-08-12'
 * @param  phone          phone number
 * @param  addressLine1 address line 1
 * @param  addressLine2 adress line 2 or null
 * @param  country        country code in ISO 3166-1 Alpha-2 format, e.g. 'GB'
 * @param  postCode      post code
 * @param  postTown      post town
 * @param callback        an interface to receive the result or error
 * @see    network_type
 */
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

/**
 * Create fiat account on specified network and currency code. User must already be Modulr customer on specified network.
 * @param  network        'MAINNET' or 'TESTNET'
 * @param  currencyCode  country code in ISO 4217 format, e.g. 'GBP'
 * @param  callback       an interface to receive the result or error
 * @see    account
 * @see    network_type
 */
- (void)createFiatAccount:(nonnull NSString *)network
             currencyCode:(nonnull NSString *)currencyCode
                 callback:(nullable id<ZKAccountCallback>)callback;

/**
 * Get nominated account details for specified account if it exists.
 * Refer to
 * <a href="https://developers.zumo.money/docs/guides/send-transactions#bitcoin">Create Fiat Account</a>
 * for explanation about nominated account.
 * @param  accountId     @link Account id
 * @param  callback       an interface to receive the result or error
 * @see account_fiat_properties
 */
- (void)getNominatedAccountFiatProperties:(nonnull NSString *)accountId
                                 callback:(nullable id<ZKAccountFiatPropertiesCallback>)callback;

/**
 * Create user wallet seeded by provided mnemonic and encrypted with user's password.
 * <p>
 * Mnemonic can be generated by <code>generateMnemonic</code> method in @link utils class.
 * @param  mnemonic       mnemonic seed phrase
 * @param  password       user provided password
 * @param  callback       an interface to receive the result or error
 * @see    wallet
 */
- (void)createWallet:(nonnull NSString *)mnemonic
            password:(nonnull NSString *)password
            callback:(nullable id<ZKWalletCallback>)callback;

/**
 * Unlock user wallet with user's password.
 * @param  password       user provided password
 * @param  callback       an interface to receive the result or error
 * @see    wallet
 */
- (void)unlockWallet:(nonnull NSString *)password
            callback:(nullable id<ZKWalletCallback>)callback;

/**
 * Reveal menmonic seed phrase used to seed user wallet.
 * @param  password       user provided password
 * @param  callback       an interface to receive the result or error
 */
- (void)revealMnemonic:(nonnull NSString *)password
              callback:(nullable id<ZKMnemonicCallback>)callback;

/**
 * Check if mnemonic seed phrase corresponds to user's wallet.
 * This is useful for validating seed phrase before trying to recover wallet.
 * @param  mnemonic       mnemonic seed phrase
 * @return true if mnemonic seed phrase corresponds to user's wallet
 */
- (BOOL)isRecoveryMnemonic:(nonnull NSString *)mnemonic;

/**
 * Recover user wallet with mnemonic seed phrase corresponding to user's wallet.
 * This can be used if user forgets his password or wants to change his wallet password.
 * @param  mnemonic       mnemonic seed phrase corresponding to user's wallet
 * @param  password       user provided password
 * @param  callback       an interface to receive the result or error
 */
- (void)recoverWallet:(nonnull NSString *)mnemonic
             password:(nonnull NSString *)password
             callback:(nullable id<ZKWalletCallback>)callback;

/**
 * Get account in specific currency, on specific network, with specific type.
 * @param  currencyCode       currency code, e.g. 'BTC', 'ETH' or 'GBP'
 * @param  network             network type, e.g. 'MAINNET', 'TESTNET' or 'RINKEBY'
 * @param  type                account type, e.g. 'STANDARD', 'COMPATIBILITY' or 'SEGWIT'
 * @return account with selected parameters if it exists, null otherwise
 * @see currencyCode
 * @see network_type
 * @see account_type
 */
- (nullable ZKAccount *)getAccount:(nonnull NSString *)currencyCode
                           network:(nonnull NSString *)network
                              type:(nonnull NSString *)type;

/**
 * Get all user accounts.
 * @return all user accounts
 */
- (nonnull NSArray<ZKAccount *> *)getAccounts;

/**
 * Get account transactions for specified account.
 * @param accountId @link account identifier
 * @return all transactions corresponding to specified account
 */
- (nonnull NSArray<ZKTransaction *> *)getAccountTransactions:(nonnull NSString *)accountId;

/**
 * Get all user transactions.
 * @return all user transactions
 */
- (nonnull NSArray<ZKTransaction *> *)getTransactions;

/**
 * Get transaction with specific transaction identifier if such transaction exists.
 * @param transactionId @link transaction identifier
 * @return transaction with specified identifier if exists, null otherwise
 */
- (nullable ZKTransaction *)getTransaction:(nonnull NSString *)transactionId;

/**
 * Get all user exchanges.
 * @return all user exchanges
 */
- (nonnull NSArray<ZKExchange *> *)getExchanges;

/**
 * Get exchange associated with selected transaction if such exchange exists.
 * @return exchange associated with selected transaction if such exchange exists
 */
- (nullable ZKExchange *)getExchangeByTransactionId:(nonnull NSString *)transactionId;

/**
 * Listen to all user changes.
 * @param listener interface to listen to user changes
 */
- (void)addListener:(nullable id<ZKUserListener>)listener;

/**
 * Remove listener to user changes.
 * @param listener interface to listen to user changes
 */
- (void)removeListener:(nullable id<ZKUserListener>)listener;

/**
 * Listen to all account changes for specific account.
 * @param accountId @link account identifier
 * @param listener   interface to listen to account changes
 */
- (void)addAccountListener:(nonnull NSString *)accountId
                  listener:(nullable id<ZKAccountListener>)listener;

/**
 * Remove listener to account changes.
 * @param listener interface to listen to user changes
 */
- (void)removeAccountListener:(nullable id<ZKAccountListener>)listener;

/**
 * Listen to all transaction changes for specific transaction.
 * @param transactionId @link transaction identifier
 * @param listener       interface to listen to transaction changes
 */
- (void)addTransactionListener:(nonnull NSString *)transactionId
                      listener:(nullable id<ZKTransactionListener>)listener;

/**
 * Remove listener to transaction changes.
 * @param listener interface to listen to transaction changes
 */
- (void)removeTransactionListener:(nullable id<ZKTransactionListener>)listener;

@end
