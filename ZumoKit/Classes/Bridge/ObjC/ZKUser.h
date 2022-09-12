// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#import "ZKAccount.h"
#import "ZKAddress.h"
#import "ZKComposedExchange.h"
#import "ZKComposedTransaction.h"
#import "ZKKbaAnswer.h"
#import <Foundation/Foundation.h>
@protocol ZKAccountCallback;
@protocol ZKAccountDataListener;
@protocol ZKAccountFiatPropertiesCallback;
@protocol ZKAuthenticationConfigCallback;
@protocol ZKCardCallback;
@protocol ZKCardDetailsCallback;
@protocol ZKComposeExchangeCallback;
@protocol ZKComposeTransactionCallback;
@protocol ZKMnemonicCallback;
@protocol ZKPinCallback;
@protocol ZKSubmitExchangeCallback;
@protocol ZKSubmitTransactionCallback;
@protocol ZKSuccessCallback;
@protocol ZKWalletCallback;


/**
 * User class provides methods for managing user wallet and accounts.
 * <p>
 * User instance can be obtained via <code>getUser</code> method on `ZKZumoKit` instance.
 * <p>
 * See <a target="_top" href="https://developers.zumo.money/docs/guides/manage-user-wallet">Manage User Wallet</a>,
 * <a target="_top" href="https://developers.zumo.money/docs/guides/create-fiat-account">Create Fiat Account</a> and
 * <a target="_top" href="https://developers.zumo.money/docs/guides/view-user-data">View User Data</a>
 * guides for usage details.
 */
@interface ZKUser : NSObject

/**
 * Get user id.
 * @return user id
 */
- (nonnull NSString *)getId;

/**
 * Get user integrator id.
 * @return user integrator id
 */
- (nonnull NSString *)getIntegratorId;

/**
 * Check if user has wallet
 * @return true if user has wallet
 */
- (BOOL)hasWallet;

/**
 * Check if user is a registered fiat customer.
 * @return true if user is a registered fiat customer.
 */
- (BOOL)isFiatCustomer;

/**
 * Make user fiat customer by providing user's personal details.
 * @param  firstName     first name
 * @param  middleName    middle name or null
 * @param  lastName      last name
 * @param  dateOfBirth  date of birth in ISO 8601 format, e.g '2020-08-12'
 * @param  email          email
 * @param  phone          phone number
 * @param  address        home address
 * @param  callback       an interface to receive the result or error
 */
- (void)makeFiatCustomer:(nonnull NSString *)firstName
              middleName:(nullable NSString *)middleName
                lastName:(nonnull NSString *)lastName
             dateOfBirth:(nonnull NSString *)dateOfBirth
                   email:(nonnull NSString *)email
                   phone:(nonnull NSString *)phone
                 address:(nonnull ZKAddress *)address
                callback:(nullable id<ZKSuccessCallback>)callback;

/**
 * Create custody or fiat account for specified currency. When creating a fiat account, 
 * user must already be fiat customer.
 * @param  currencyCode  country code, e.g. 'GBP', 'BTC', 'ETH'
 * @param  callback       an interface to receive the result or error
 * @see    `ZKAccount`
 */
- (void)createAccount:(nonnull NSString *)currencyCode
             callback:(nullable id<ZKAccountCallback>)callback;

/**
 * Compose transaction between custody or fiat accounts in Zumo ecosystem. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/send-transactions#internal-transaction">Send Transactions</a> guide for usage details.
 * <p>
 * On success `ZKComposedTransaction` is returned via callback.
 *
 * @param fromAccountId custody or fiat `ZKAccount` identifier
 * @param toAccountId   custody or fiat `ZKAccount` identifier 
 * @param amount          amount in source account currency
 * @param sendMax        send maximum possible funds to destination
 * @param callback        an interface to receive the result or error
 */
- (void)composeTransaction:(nonnull NSString *)fromAccountId
               toAccountId:(nonnull NSString *)toAccountId
                    amount:(nullable NSDecimalNumber *)amount
                   sendMax:(BOOL)sendMax
                  callback:(nullable id<ZKComposeTransactionCallback>)callback;

/**
 * Compose custody withdraw transaction from custody account. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/send-transactions#custody-withdraw-transaction">Send Transactions</a> guide for usage details.
 * <p>
 * On success `ZKComposedTransaction` is returned via callback.
 *
 * @param fromAccountId custody `ZKAccount` identifier
 * @param destination     destination address or non-custodial account identifier
 * @param amount          amount in source account currency
 * @param sendMax        send maximum possible funds to destination
 * @param callback        an interface to receive the result or error
 */
- (void)composeCustodyWithdrawTransaction:(nonnull NSString *)fromAccountId
                              destination:(nonnull NSString *)destination
                                   amount:(nullable NSDecimalNumber *)amount
                                  sendMax:(BOOL)sendMax
                                 callback:(nullable id<ZKComposeTransactionCallback>)callback;

/**
 * Compose transaction from user fiat account to user's nominated account. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/send-transactions#nominated-transaction">Send Transactions</a> guide for usage details.
 * <p>
 * On success `ZKComposedTransaction` object is returned via callback.
 *
 * @param fromAccountId `ZKAccount` identifier
 * @param amount          amount in source account currency
 * @param sendMax        send maximum possible funds to destination
 * @param callback        an interface to receive the result or error
 */
- (void)composeNominatedTransaction:(nonnull NSString *)fromAccountId
                             amount:(nullable NSDecimalNumber *)amount
                            sendMax:(BOOL)sendMax
                           callback:(nullable id<ZKComposeTransactionCallback>)callback;

/**
 * Submit a transaction. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/send-transactions#submit-transaction">Send Transactions</a> guide for usage details.
 * <p>
 * On success `ZKTransaction` object is returned via callback.
 *
 * @param composedTransaction Composed transaction retrieved as a result
 *                             of one of the compose transaction methods
 * @param metadata             Optional metadata (stringified JSON) that will be attached to transaction
 * @param callback An interface to receive the result or error
 */
- (void)submitTransaction:(nonnull ZKComposedTransaction *)composedTransaction
                 metadata:(nullable NSString *)metadata
                 callback:(nullable id<ZKSubmitTransactionCallback>)callback;

/**
 * Compose exchange. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/make-exchanges#compose-exchange">Make Exchanges</a> guide for usage details.
 * <p>
 * On success `ZKComposedExchange`  is returned via callback.
 *
 * @param fromAccountId     `ZKAccount` identifier
 * @param toAccountId       `ZKAccount` identifier
 * @param amount              amount in deposit account currency
 * @param sendMax            exchange maximum possible funds
 * @param callback            an interface to receive the result or error
 */
- (void)composeExchange:(nonnull NSString *)fromAccountId
            toAccountId:(nonnull NSString *)toAccountId
                 amount:(nullable NSDecimalNumber *)amount
                sendMax:(BOOL)sendMax
               callback:(nullable id<ZKComposeExchangeCallback>)callback;

/**
 * Submit an exchange. <a target="_top" href="https://developers.zumo.money/docs/guides/make-exchanges#submit-exchange">Make Exchanges</a> guide for usage details.
 * <p>
 * On success `ZKExchange` object is returned via callback.
 *
 * @param composedExchange Composed exchange retrieved as the result
 *                          of <code>composeExchange</code> method
 * @param callback An interface to receive the result or error
 */
- (void)submitExchange:(nonnull ZKComposedExchange *)composedExchange
              callback:(nullable id<ZKSubmitExchangeCallback>)callback;

/**
 * Get nominated account details for specified account if it exists.
 * Refer to
 * <a target="_top" href="https://developers.zumo.money/docs/guides/send-transactions#bitcoin">Create Fiat Account</a>
 * for explanation about nominated account.
 * @param  accountId     `ZKAccount` id
 * @param  callback       an interface to receive the result or error
 * @see `ZKAccountFiatProperties`
 */
- (void)getNominatedAccountFiatProperties:(nonnull NSString *)accountId
                                 callback:(nullable id<ZKAccountFiatPropertiesCallback>)callback;

/**
 * Fetch Strong Customer Authentication (SCA) config.
 *
 * @param callback         an interface to receive the result or error
 */
- (void)fetchAuthenticationConfig:(nullable id<ZKAuthenticationConfigCallback>)callback;

/**
 * Create card for a fiat account.
 * <p>
 * At least one Knowled-Based Authentication (KBA) answer should be defined, answers are limited to 256 characters and 
 * cannot be null or empty and only one answer per question type should be provided.
 * @param  fiatAccountId fiat account id
 * @param  cardType       'VIRTUAL' or 'PHYSICAL'
 * @param  mobileNumber   card holder mobile number, starting with a '+', followed by the country code and then the mobile number
 * @param  callback        an interface to receive the result or error
 * @param  knowledgeBase  list of KBA answers
 * @see    `ZKCard`
 * @see    `ZKCardType`
 */
- (void)createCard:(nonnull NSString *)fiatAccountId
          cardType:(nonnull NSString *)cardType
      mobileNumber:(nonnull NSString *)mobileNumber
     knowledgeBase:(nonnull NSArray<ZKKbaAnswer *> *)knowledgeBase
          callback:(nullable id<ZKCardCallback>)callback;

/**
 * Set card status to 'ACTIVE', 'BLOCKED' or 'CANCELLED'. 
 * - To block card, set card status to 'BLOCKED'. 
 * - To activate a physical card, set card status to 'ACTIVE' and provide PAN and CVV2 fields.
 * - To cancel a card, set card status to 'CANCELLED'.
 * - To unblock a card, set card status to 'ACTIVE.'. 
 * @param  cardId         card id
 * @param  cardStatus     new card status
 * @param  pan             PAN when activating a physical card, null otherwise
 * @param  cvv2            CVV2 when activating a physical card, null otherwise
 * @param  callback        an interface to receive the result or error
 * @see    `ZKCardStatus`
 */
- (void)setCardStatus:(nonnull NSString *)cardId
           cardStatus:(nonnull NSString *)cardStatus
                  pan:(nullable NSString *)pan
                 cvv2:(nullable NSString *)cvv2
             callback:(nullable id<ZKSuccessCallback>)callback;

/**
 * Reveals sensitive card details.
 * @param  cardId         card id
 * @param  callback        an interface to receive the result or error
 * @see    `ZKCardDetails`
 */
- (void)revealCardDetails:(nonnull NSString *)cardId
                 callback:(nullable id<ZKCardDetailsCallback>)callback;

/**
 * Reveal card PIN.
 * @param  cardId         card id
 * @param  callback        an interface to receive the result or error
 */
- (void)revealPin:(nonnull NSString *)cardId
         callback:(nullable id<ZKPinCallback>)callback;

/**
 * Unblock card PIN.
 * @param  cardId         card id
 * @param  callback        an interface to receive the result or error
 */
- (void)unblockPin:(nonnull NSString *)cardId
          callback:(nullable id<ZKSuccessCallback>)callback;

/**
 * Add KBA answers to a card without SCA.
 * <p>
 * This endpoint is used to set Knowledge-Based Authentication (KBA) answers to 
 * a card without Strong Customer Authentication (SCA). Once it is set SCA flag 
 * on corresponding card is set to true.
 * <p>
 * At least one answer should be defined, answers are limited to 256 characters and 
 * cannot be null or empty and only one answer per question type should be provided.
 * @param  cardId         card id
 * @param  knowledgeBase  list of KBA answers
 * @param  callback        an interface to receive the result or error
 */
- (void)setAuthentication:(nonnull NSString *)cardId
            knowledgeBase:(nonnull NSArray<ZKKbaAnswer *> *)knowledgeBase
                 callback:(nullable id<ZKSuccessCallback>)callback;

/**
 * Create user wallet seeded by provided mnemonic and encrypted with user's password.
 * <p>
 * Mnemonic can be generated by <code>generateMnemonic</code> method in `ZKUtils` class.
 * @param  mnemonic       mnemonic seed phrase
 * @param  password       user provided password
 * @param  callback       an interface to receive the result or error
 * @see    `ZKWallet`
 */
- (void)createWallet:(nonnull NSString *)mnemonic
            password:(nonnull NSString *)password
            callback:(nullable id<ZKWalletCallback>)callback;

/**
 * Unlock user wallet with user's password.
 * @param  password       user provided password
 * @param  callback       an interface to receive the result or error
 * @see    `ZKWallet`
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
 * @param  custodyType        custdoy type, i.e. 'CUSTODY' or 'NON-CUSTODY'
 * @return account with selected parameters if it exists, null otherwise
 * @see `ZKCurrencyCode`
 * @see `ZKNetworkType`
 * @see `ZKAccountType`
 * @see `ZKCustodyType`
 */
- (nullable ZKAccount *)getAccount:(nonnull NSString *)currencyCode
                           network:(nonnull NSString *)network
                              type:(nonnull NSString *)type
                       custodyType:(nonnull NSString *)custodyType;

/**
 * Get all user accounts.
 * @return all user accounts
 */
- (nonnull NSArray<ZKAccount *> *)getAccounts;

/**
 * Listen to all account data changes.
 * @param listener interface to listen to user changes
 */
- (void)addAccountDataListener:(nullable id<ZKAccountDataListener>)listener;

/**
 * Remove listener to account data changes.
 * @param listener interface to listen to user changes
 */
- (void)removeAccountDataListener:(nullable id<ZKAccountDataListener>)listener;

@end
