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

typedef void(^SendTransactionCompletionBlock)(bool success, ZKZumoKitError * _Nullable error, ZKTransaction * _Nullable transaction);

@interface ZKWallet (ZKWalletCallbackCompletion)

- (void)sendEthTransaction:(nonnull NSString *)accountId
                  gasPrice:(nonnull NSString *)gasPrice
                  gasLimit:(nonnull NSString *)gasLimit
                        to:(nullable NSString *)to
                     value:(nullable NSString *)value
                      data:(nullable NSString *)data
                     nonce:(nullable NSNumber *)nonce
                completion:(_Nonnull SendTransactionCompletionBlock)completionHandler;

- (void)sendBtcTransaction:(nonnull NSString *)accountId
changeAccountId:(nonnull NSString *)changeAccountId
             to:(nonnull NSString *)to
          value:(nonnull NSString *)value
        feeRate:(nonnull NSString *)feeRate
       completion:(_Nonnull SendTransactionCompletionBlock)completionHandler;

@end

#endif /* ZKWallet_CallbackCompletion_h */
