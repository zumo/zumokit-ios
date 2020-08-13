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

/** Completion block used by methods in `ZKUser class. */
typedef void(^WalletCompletionBlock)(ZKWallet * _Nullable wallet, NSError * _Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void(^MnemonicCompletionBlock)(NSString * _Nullable mnemonic, NSError * _Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void(^SuccessCompletionBlock)(NSError * _Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void(^AccountCompletionBlock)(ZKAccount * _Nullable account, NSError * _Nullable error);

/** Completion block used by methods in `ZKUser class. */
typedef void(^AccountFiatPropertiesCompletionBlock)(ZKAccountFiatProperties * _Nullable accountFiatProperties, NSError * _Nullable error);


@interface ZKUser (ZKUserCallbackCompletion)

/**
<code>createWallet</code> completion handler extension.
@see `-[ZKUser createWallet:password:callback:]`
*/
- (void)createWallet:(nonnull NSString *)mnemonic
            password:(nonnull NSString *)password
           completion:(_Nonnull WalletCompletionBlock)completionHandler;

/**
<code>unlockWallet</code> completion handler extension.
@see `-[ZKUser unlockWallet:callback:]`
*/
- (void)unlockWallet:(nonnull NSString *)password
          completion:(_Nonnull WalletCompletionBlock)completionHandler;

/**
<code>revealMnemonic</code> completion handler extension.
@see `-[ZKUser revealMnemonic:callback:]`
*/
- (void)revealMnemonic:(nonnull NSString *)password
            completion:(_Nonnull MnemonicCompletionBlock)completionHandler;

/**
<code>recoverWallet</code> completion handler extension.
@see `-[ZKUser recoverWallet:password:callback:]`
*/
- (void)recoverWallet:(nonnull NSString *)mnemonic
             password:(nonnull NSString *)password
           completion:(_Nonnull WalletCompletionBlock)completionHandler;

/**
<code>makeModulrCustomer</code> completion handler extension.
@see `-[ZKUser makeModulrCustomer:firstName:middleName:lastName:dateOfBirth:email:phone:addressLine1:addressLine2:country:postCode:postTown:callback:]`
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
                completion:(_Nonnull SuccessCompletionBlock)completionHandler;

/**
<code>createFiatAccount</code> completion handler extension.
@see `-[ZKUser createFiatAccount:currencyCode:callback:]`
*/
- (void)createFiatAccount:(nonnull NSString *)network
             currencyCode:(nonnull NSString *)currencyCode
               completion:(_Nonnull AccountCompletionBlock)completionHandler;

/**
<code>getNominatedAccountFiatProperties</code> completion handler extension.
@see `-[ZKUser getNominatedAccountFiatProperties:callback:]`
*/
- (void)getNominatedAccountFiatProperties:(nonnull NSString *)accountId
                               completion:(_Nonnull AccountFiatPropertiesCompletionBlock)completionHandler;

@end

#endif /* ZKUser_CallbackCompletion_h */
