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

typedef void(^WalletCompletionBlock)(ZKWallet * _Nullable wallet, NSError * _Nullable error);

typedef void(^MnemonicCompletionBlock)(NSString * _Nullable mnemonic, NSError * _Nullable error);

typedef void(^SuccessCompletionBlock)(NSError * _Nullable error);

typedef void(^AccountCompletionBlock)(ZKAccount * _Nullable account, NSError * _Nullable error);

@interface ZKUser (ZKUserCallbackCompletion)

- (void)createWallet:(nonnull NSString *)mnemonic
            password:(nonnull NSString *)password
           completion:(_Nonnull WalletCompletionBlock)completionHandler;

- (void)unlockWallet:(nonnull NSString *)password
          completion:(_Nonnull WalletCompletionBlock)completionHandler;

- (void)revealMnemonic:(nonnull NSString *)password
            completion:(_Nonnull MnemonicCompletionBlock)completionHandler;

- (void)recoverWallet:(nonnull NSString *)mnemonic
             password:(nonnull NSString *)password
           completion:(_Nonnull WalletCompletionBlock)completionHandler;

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

- (void)createFiatAccount:(nonnull NSString *)network
             currencyCode:(nonnull NSString *)currencyCode
               completion:(_Nonnull AccountCompletionBlock)completionHandler;

@end

#endif /* ZKUser_CallbackCompletion_h */
