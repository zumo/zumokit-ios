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
#import "CardCallback.h"
#import "CardDetailsCallback.h"
#import "PinCallback.h"

@implementation ZKUser (ZKUserCallbackCompletion)

- (void)createWallet:(nonnull NSString *)mnemonic
            password:(nonnull NSString *)password
           completion:(_Nonnull ZKWalletCompletionBlock)completionHandler {
    [self createWallet:mnemonic password:password callback:[[WalletCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)unlockWallet:(nonnull NSString *)password
          completion:(_Nonnull ZKWalletCompletionBlock)completionHandler {
    [self unlockWallet:password callback:[[WalletCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)revealMnemonic:(nonnull NSString *)password
            completion:(_Nonnull ZKMnemonicCompletionBlock)completionHandler {
    [self revealMnemonic:password callback:[[MnemonicCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)recoverWallet:(nonnull NSString *)mnemonic
            password:(nonnull NSString *)password
           completion:(_Nonnull ZKWalletCompletionBlock)completionHandler {
    [self recoverWallet:mnemonic password:password callback:[[WalletCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)makeFiatCustomer:(nonnull NSString *)network
               firstName:(nonnull NSString *)firstName
              middleName:(nullable NSString *)middleName
                lastName:(nonnull NSString *)lastName
             dateOfBirth:(nonnull NSString *)dateOfBirth
                   email:(nonnull NSString *)email
                   phone:(nonnull NSString *)phone
                 address:(nonnull ZKAddress *)address
              completion:(_Nonnull ZKSuccessCompletionBlock)completionHandler {
    [self makeFiatCustomer:network firstName:firstName middleName:middleName lastName:lastName dateOfBirth:dateOfBirth email:email phone:phone address:address callback:[[SuccessCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)createFiatAccount:(nonnull NSString *)network
             currencyCode:(nonnull NSString *)currencyCode
               completion:(_Nonnull ZKAccountCompletionBlock)completionHandler {
    [self createFiatAccount:network currencyCode:currencyCode callback:[[AccountCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)getNominatedAccountFiatProperties:(nonnull NSString *)accountId
                               completion:(_Nonnull ZKAccountFiatPropertiesCompletionBlock)completionHandler {
    [self getNominatedAccountFiatProperties:accountId callback:[[AccountFiatPropertiesCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)createCard:(nonnull NSString *)fiatAccountId
          cardType:(nonnull NSString *)cardType
      mobileNumber:(nonnull NSString *)mobileNumber
        completion:(_Nonnull ZKCardCompletionBlock)completionHandler {
    [self createCard:fiatAccountId cardType:cardType mobileNumber:mobileNumber callback:[[CardCallback alloc] initWithCompletionHandler:completionHandler]];
};

- (void)setCardStatus:(nonnull NSString *)cardId
           cardStatus:(nonnull NSString *)cardStatus
                  pan:(nullable NSString *)pan
                 cvv2:(nullable NSString *)cvv2
           completion:(_Nonnull ZKSuccessCompletionBlock)completionHandler {
    [self setCardStatus:cardId cardStatus:cardStatus pan:pan cvv2:cvv2 callback:[[SuccessCallback alloc] initWithCompletionHandler:completionHandler]];
};

- (void)revealCardDetails:(nonnull NSString *)cardId
               completion:(_Nonnull ZKCardDetailsCompletionBlock)completionHandler {
    [self revealCardDetails:cardId callback:[[CardDetailsCallback alloc] initWithCompletionHandler:completionHandler]];
};

- (void)revealPin:(nonnull NSString *)cardId
       completion:(_Nonnull ZKPinCompletionBlock)completionHandler {
    [self revealPin:cardId callback:[[PinCallback alloc] initWithCompletionHandler:completionHandler]];
};

- (void)unblockPin:(nonnull NSString *)cardId
        completion:(_Nonnull ZKSuccessCompletionBlock)completionHandler {
    [self unblockPin:cardId callback:[[SuccessCallback alloc] initWithCompletionHandler:completionHandler]];
};

@end
