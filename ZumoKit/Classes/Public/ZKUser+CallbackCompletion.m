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

@end
