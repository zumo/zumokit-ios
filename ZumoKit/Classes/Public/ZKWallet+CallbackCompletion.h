//
//  CPWallet+CallbackCompletion.h
//  ZumoKitSDK
//
//  Created by Ivan Romanovski on 02/10/2019.
//

#ifndef ZKWallet_CallbackCompletion_h
#define ZKWallet_CallbackCompletion_h

#import "ZKWallet.h"
#import "ZKSendTransactionCallback.h"

typedef void(^SendTransactionCompletionBlock)(bool success, NSString * _Nullable errorName, NSString * _Nullable errorMessage, ZKTransaction * _Nullable transaction);

@interface ZKWallet (ZKWalletCallbackCompletion)

- (void)sendEthTransaction:(nonnull NSString *)accountId
                  gasPrice:(nonnull NSString *)gasPrice
                  gasLimit:(nonnull NSString *)gasLimit
                        to:(nullable NSString *)to
                     value:(nullable NSString *)value
                      data:(nullable NSString *)data
                     nonce:(nullable NSNumber *)nonce
                completion:(_Nonnull SendTransactionCompletionBlock)completionHandler;

@end

#endif /* ZKWallet_CallbackCompletion_h */
