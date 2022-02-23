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
- (void)makeFiatCustomer:(nonnull NSString *)network
               firstName:(nonnull NSString *)firstName
              middleName:(nullable NSString *)middleName
                lastName:(nonnull NSString *)lastName
             dateOfBirth:(nonnull NSString *)dateOfBirth
                   email:(nonnull NSString *)email
                   phone:(nonnull NSString *)phone
                 address:(nonnull ZKAddress *)address
              completion:(_Nonnull ZKSuccessCompletionBlock)completionHandler;

/**
<code>createFiatAccount</code> completion handler extension.
@see `-[ZKUser createFiatAccount:currencyCode:callback:]`
*/
- (void)createFiatAccount:(nonnull NSString *)network
             currencyCode:(nonnull NSString *)currencyCode
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
@see `-[ZKUser createCard:cardType:mobileNumber:callback:]`
*/
- (void)createCard:(nonnull NSString *)fiatAccountId
          cardType:(nonnull NSString *)cardType
      mobileNumber:(nonnull NSString *)mobileNumber
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

@end

#endif /* ZKUser_CallbackCompletion_h */
