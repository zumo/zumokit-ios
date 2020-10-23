//
//  CPUser+CallbackCompletion.m
//  ZumoKitSDK
//
//  Created by Ivan Romanovski on 09/10/2019.
//

#import <Foundation/Foundation.h>

#import "ZKUser+CallbackCompletion.h"
#import "WalletCallback.h"
#import "MnemonicCallback.h"
#import "SuccessCallback.h"
#import "AccountCallback.h"
#import "AccountFiatPropertiesCallback.h"

@implementation ZKUser (ZKUserCallbackCompletion)

- (void)createWallet:(nonnull NSString *)mnemonic
            password:(nonnull NSString *)password
           completion:(_Nonnull WalletCompletionBlock)completionHandler {
    [self createWallet:mnemonic password:password callback:[[WalletCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)unlockWallet:(nonnull NSString *)password
          completion:(_Nonnull WalletCompletionBlock)completionHandler {
    [self unlockWallet:password callback:[[WalletCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)revealMnemonic:(nonnull NSString *)password
            completion:(_Nonnull MnemonicCompletionBlock)completionHandler {
    [self revealMnemonic:password callback:[[MnemonicCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)recoverWallet:(nonnull NSString *)mnemonic
            password:(nonnull NSString *)password
           completion:(_Nonnull WalletCompletionBlock)completionHandler {
    [self recoverWallet:mnemonic password:password callback:[[WalletCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)makeFiatCustomer:(nonnull NSString *)network
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
                completion:(_Nonnull SuccessCompletionBlock)completionHandler {
    [self makeFiatCustomer:network firstName:firstName middleName:middleName lastName:lastName dateOfBirth:dateOfBirth email:email phone:phone addressLine1:addressLine1 addressLine2:addressLine2 country:country postCode:postCode postTown:postTown callback:[[SuccessCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)createFiatAccount:(nonnull NSString *)network
             currencyCode:(nonnull NSString *)currencyCode
               completion:(_Nonnull AccountCompletionBlock)completionHandler {
    [self createFiatAccount:network currencyCode:currencyCode callback:[[AccountCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)getNominatedAccountFiatProperties:(nonnull NSString *)accountId
                               completion:(_Nonnull AccountFiatPropertiesCompletionBlock)completionHandler {
    [self getNominatedAccountFiatProperties:accountId callback:[[AccountFiatPropertiesCallback alloc] initWithCompletionHandler: completionHandler]];
};

@end
