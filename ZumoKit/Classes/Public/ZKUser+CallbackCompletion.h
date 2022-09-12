//
//  CPUser+CallbackCompletion.h
//  ZumoKitSDK
//
//  Created by Ivan Romanovski on 09/10/2019.
//

#ifndef ZKUser_CallbackCompletion_h
#define ZKUser_CallbackCompletion_h

#import "ZKUser.h"
#import "ZKWalletCallback.h"
#import "ZKMnemonicCallback.h"
#import "ZKSuccessCallback.h"
#import "ZKAccountCallback.h"
#import "ZKAccountFiatPropertiesCallback.h"
#import "ZKCardCallback.h"
#import "ZKCardDetailsCallback.h"
#import "ZKPinCallback.h"
#import "ZKAuthenticationConfigCallback.h"
#import "ZKComposedTransaction.h"
#import "ZKComposedExchange.h"
#import "ZKTransaction.h"
#import "ZKExchange.h"

/** Completion block used by methods in `ZKUser class. */
typedef void (^ZKWalletCompletionBlock)(ZKWallet *_Nullable wallet, NSError *_Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void (^ZKMnemonicCompletionBlock)(NSString *_Nullable mnemonic, NSError *_Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void (^ZKSuccessCompletionBlock)(NSError *_Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void (^ZKAccountCompletionBlock)(ZKAccount *_Nullable account, NSError *_Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void (^ZKAccountFiatPropertiesCompletionBlock)(ZKAccountFiatProperties *_Nullable accountFiatProperties, NSError *_Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void (^ZKAuthenticationConfigCompletionBlock)(ZKAuthenticationConfig *_Nullable authConfig, NSError *_Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void (^ZKCardCompletionBlock)(ZKCard *_Nullable card, NSError *_Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void (^ZKCardDetailsCompletionBlock)(ZKCardDetails *_Nullable card, NSError *_Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void (^ZKPinCompletionBlock)(int32_t card, NSError *_Nullable error);

/** Completion block used by methods in `ZKUser` class. */
typedef void (^ZKComposeTransactionCompletionBlock)(ZKComposedTransaction *_Nullable composedTransaction, NSError *_Nullable error);

/** Completion block used by methods in `ZKUser` class. */
typedef void (^ZKComposeExchangeCompletionBlock)(ZKComposedExchange *_Nullable composedExchange, NSError *_Nullable error);

/** Completion block used by methods in `ZKUser` class. */
typedef void (^ZKSubmitTransactionCompletionBlock)(ZKTransaction *_Nullable transaction, NSError *_Nullable error);

/** Completion block used by methods in `ZKUser` class. */
typedef void (^ZKSubmitExchangeCompletionBlock)(ZKExchange *_Nullable exchange, NSError *_Nullable error);

@interface ZKUser (ZKUserCallbackCompletion)

/**
<code>createWallet</code> completion handler extension.
@see `-[ZKUser createWallet:password:callback:]`
*/
- (void)createWallet:(nonnull NSString *)mnemonic
            password:(nonnull NSString *)password
          completion:(_Nonnull ZKWalletCompletionBlock)completionHandler;

/**
<code>unlockWallet</code> completion handler extension.
@see `-[ZKUser unlockWallet:callback:]`
*/
- (void)unlockWallet:(nonnull NSString *)password
          completion:(_Nonnull ZKWalletCompletionBlock)completionHandler;

/**
<code>revealMnemonic</code> completion handler extension.
@see `-[ZKUser revealMnemonic:callback:]`
*/
- (void)revealMnemonic:(nonnull NSString *)password
            completion:(_Nonnull ZKMnemonicCompletionBlock)completionHandler;

/**
<code>recoverWallet</code> completion handler extension.
@see `-[ZKUser recoverWallet:password:callback:]`
*/
- (void)recoverWallet:(nonnull NSString *)mnemonic
             password:(nonnull NSString *)password
           completion:(_Nonnull ZKWalletCompletionBlock)completionHandler;

/**
<code>makeFiatCustomer</code> completion handler extension.
@see `-[ZKUser makeFiatCustomer:firstName:middleName:lastName:dateOfBirth:email:phone:address:callback:]`
*/
- (void)makeFiatCustomer:(nonnull NSString *)firstName
              middleName:(nullable NSString *)middleName
                lastName:(nonnull NSString *)lastName
             dateOfBirth:(nonnull NSString *)dateOfBirth
                   email:(nonnull NSString *)email
                   phone:(nonnull NSString *)phone
                 address:(nonnull ZKAddress *)address
              completion:(_Nonnull ZKSuccessCompletionBlock)completionHandler;

/**
<code>createAccount</code> completion handler extension.
@see `-[ZKUser createAccount:callback:]`
*/
- (void)createAccount:(nonnull NSString *)currencyCode
          completion:(_Nonnull ZKAccountCompletionBlock)completionHandler;

/**
<code>getNominatedAccountFiatProperties</code> completion handler extension.
@see `-[ZKUser getNominatedAccountFiatProperties:callback:]`
*/
- (void)getNominatedAccountFiatProperties:(nonnull NSString *)accountId
                               completion:(_Nonnull ZKAccountFiatPropertiesCompletionBlock)completionHandler;

/**
<code>fetchAuthenticationConfig</code> completion handler extension.
@see `-[ZKUser fetchAuthenticationConfig:callback:]`
*/
- (void)fetchAuthenticationConfigWithCompletion:(_Nonnull ZKAuthenticationConfigCompletionBlock)completionHandler;

/**
<code>createCard</code> completion handler extension.
@see `-[ZKUser createCard:cardType:mobileNumber:knowledgeBase:callback:]`
*/
- (void)createCard:(nonnull NSString *)fiatAccountId
          cardType:(nonnull NSString *)cardType
      mobileNumber:(nonnull NSString *)mobileNumber
     knowledgeBase:(nonnull NSArray<ZKKbaAnswer *> *)knowledgeBase
        completion:(_Nonnull ZKCardCompletionBlock)completionHandler;

/**
<code>setCardStatus</code> completion handler extension.
@see `-[ZKUser setCardStatus:pan:cvv2:callback:]`
*/
- (void)setCardStatus:(nonnull NSString *)cardId
           cardStatus:(nonnull NSString *)cardStatus
                  pan:(nullable NSString *)pan
                 cvv2:(nullable NSString *)cvv2
           completion:(_Nonnull ZKSuccessCompletionBlock)completionHandler;

/**
<code>revealCardDetails</code> completion handler extension.
@see `-[ZKUser revealCardDetails:callback:]`
*/
- (void)revealCardDetails:(nonnull NSString *)cardId
               completion:(_Nonnull ZKCardDetailsCompletionBlock)completionHandler;

/**
<code>revealPin</code> completion handler extension.
@see `-[ZKUser revealPin:callback:]`
*/
- (void)revealPin:(nonnull NSString *)cardId
       completion:(_Nonnull ZKPinCompletionBlock)completionHandler;

/**
<code>unblockPin</code> completion handler extension.
@see `-[ZKUser unblockPin:callback:]`
*/
- (void)unblockPin:(nonnull NSString *)cardId
        completion:(_Nonnull ZKSuccessCompletionBlock)completionHandler;

/**
<code>setAuthentication</code> completion handler extension.
@see `-[ZKUser setAuthentication:knowledgeBase:callback:]`
*/
- (void)setAuthentication:(nonnull NSString *)cardId
            knowledgeBase:(nonnull NSArray<ZKKbaAnswer *> *)knowledgeBase
               completion:(_Nonnull ZKSuccessCompletionBlock)completionHandler;

/**
<code>composeTransaction</code> completion handler extension.
@see `-[ZKUser composeTransaction:toAccountId:amount:sendMax:callback:]`
*/
- (void)composeTransaction:(nonnull NSString *)fromAccountId
               toAccountId:(nonnull NSString *)toAccountId
                    amount:(nullable NSDecimalNumber *)amount
                   sendMax:(BOOL)sendMax
                completion:(_Nonnull ZKComposeTransactionCompletionBlock)completionHandler;

/**
<code>composeCustodyWithdrawTransaction</code> completion handler extension.
@see `-[ZKUser composeCustodyWithdrawTransaction:destination:amount:sendMax:callback:]`
*/
- (void)composeCustodyWithdrawTransaction:(nonnull NSString *)fromAccountId
                              destination:(nonnull NSString *)destination
                                   amount:(nullable NSDecimalNumber *)amount
                                  sendMax:(BOOL)sendMax
                               completion:(_Nonnull ZKComposeTransactionCompletionBlock)completionHandler;

/**
<code>composeNominatedTransaction</code> completion handler extension.
@see `-[ZKUser composeNominatedTransaction:amount:sendMax:callback:]`
*/
- (void)composeNominatedTransaction:(nonnull NSString *)fromAccountId
                             amount:(nullable NSDecimalNumber *)amount
                            sendMax:(BOOL)sendMax
                         completion:(_Nonnull ZKComposeTransactionCompletionBlock)completionHandler;

/**
<code>composeExchange</code> completion handler extension.
@see `-[ZKUser composeExchange:toAccountId:amount:sendMax:callback:]`
*/
- (void)composeExchange:(nonnull NSString *)fromAccountId
            toAccountId:(nonnull NSString *)toAccountId
                 amount:(nullable NSDecimalNumber *)amount
                sendMax:(BOOL)sendMax
             completion:(_Nonnull ZKComposeExchangeCompletionBlock)completionHandler;

/**
<code>submitTransaction</code> completion handler extension.
@see `-[ZKUser submitTransaction:metadata:callback:]`
*/
- (void)submitTransaction:(nonnull ZKComposedTransaction *)composedTransaction
                 metadata:(nullable NSString *)metadata
               completion:(_Nonnull ZKSubmitTransactionCompletionBlock)completionHandler;

/**
<code>submitExchange</code> completion handler extension.
@see `-[ZKUser submitExchange:callback:]`
*/
- (void)submitExchange:(nonnull ZKComposedExchange *)composedExchange
            completion:(_Nonnull ZKSubmitExchangeCompletionBlock)completionHandler;

@end

#endif /* ZKUser_CallbackCompletion_h */
