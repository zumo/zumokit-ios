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

typedef void(^WalletCompletionBlock)(ZKWallet * _Nullable wallet, NSError * _Nullable error);

typedef void(^MnemonicCompletionBlock)(NSString * _Nullable mnemonic, NSError * _Nullable error);

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

@end

#endif /* ZKUser_CallbackCompletion_h */
