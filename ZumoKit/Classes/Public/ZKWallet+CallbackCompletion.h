//
//  CPWallet+CallbackCompletion.h
//  ZumoKitSDK
//
//  Created by Ivan Romanovski on 02/10/2019.
//

#ifndef ZKWallet_CallbackCompletion_h
#define ZKWallet_CallbackCompletion_h

#import "ZKWallet.h"
#import "ZKComposedTransaction.h"
#import "ZKComposedExchange.h"
#import "ZKTransaction.h"
#import "ZKExchange.h"

typedef void(^ComposeTransactionCompletionBlock)(ZKComposedTransaction * _Nullable composedTransaction, NSError * _Nullable error);

typedef void(^ComposeExchangeCompletionBlock)(ZKComposedExchange * _Nullable composedExchange, NSError * _Nullable error);

typedef void(^SubmitTransactionCompletionBlock)(ZKTransaction * _Nullable transaction, NSError * _Nullable error);

typedef void(^SubmitExchangeCompletionBlock)(ZKExchange * _Nullable exchange, NSError * _Nullable error);

@interface ZKWallet (ZKWalletCallbackCompletion)

- (void)composeEthTransaction:(nonnull NSString *)fromAccountId
                     gasPrice:(nonnull NSString *)gasPrice
                     gasLimit:(nonnull NSString *)gasLimit
                  destination:(nullable NSString *)destination
                       amount:(nullable NSString *)amount
                         data:(nullable NSString *)data
                        nonce:(nullable NSNumber *)nonce
                      sendMax:(BOOL)sendMax
                   completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler;

- (void)composeBtcTransaction:(nonnull NSString *)fromAccountId
              changeAccountId:(nonnull NSString *)changeAccountId
                  destination:(nonnull NSString *)destination
                       amount:(nullable NSString *)amount
                      feeRate:(nonnull NSString *)feeRate
                      sendMax:(BOOL)sendMax
                  completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler;

- (void)composeInternalFiatTransaction:(nonnull NSString *)fromAccountId
                           toAccountId:(nonnull NSString *)toAccountId
                                amount:(nullable NSString *)amount
                               sendMax:(BOOL)sendMax
                            completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler;

- (void)composeTransactionToNominatedAccount:(nonnull NSString *)fromAccountId
                                      amount:(nullable NSString *)amount
                                     sendMax:(BOOL)sendMax
                                  completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler;

- (void)composeExchange:(nonnull NSString *)depositAccountId
      withdrawAccountId:(nonnull NSString *)withdrawAccountId
           exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
       exchangeSettings:(nonnull ZKExchangeSettings *)exchangeFees
                  value:(nullable NSString *)value
                sendMax:(BOOL)sendMax
             completion:(_Nonnull ComposeExchangeCompletionBlock)completionHandler;

- (void)submitTransaction:(nonnull ZKComposedTransaction *)composedTransaction
               completion:(_Nonnull SubmitTransactionCompletionBlock)completionHandler;

- (void)submitExchange:(nonnull ZKComposedExchange *)composedExchange
            completion:(_Nonnull SubmitExchangeCompletionBlock)completionHandler;

@end

#endif /* ZKWallet_CallbackCompletion_h */
