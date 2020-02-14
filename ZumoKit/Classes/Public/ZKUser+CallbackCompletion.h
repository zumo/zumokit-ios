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

typedef void(^WalletCompletionBlock)(bool success, NSString * _Nullable errorName, NSString * _Nullable errorMessage, ZKWallet * _Nullable wallet);

typedef void(^MnemonicCompletionBlock)(bool success, NSString * _Nullable errorName, NSString * _Nullable errorMessage, NSString * _Nullable mnemonic);

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
