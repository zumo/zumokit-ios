//
//  CPWallet+CallbackCompletion.m
//  Pods-ZumoKit_Example
//
//  Created by Ivan Romanovski on 02/10/2019.
//

#import <Foundation/Foundation.h>

#import "ZKWallet+CallbackCompletion.h"
#import "ComposeTransactionCallback.h"
#import "ComposeExchangeCallback.h"
#import "SubmitTransactionCallback.h"
#import "SubmitExchangeCallback.h"

@implementation ZKWallet (ZKWalletCallbackCompletion)

- (void)composeEthTransaction:(nonnull NSString *)fromAccountId
                     gasPrice:(nonnull NSDecimalNumber *)gasPrice
                     gasLimit:(nonnull NSDecimalNumber *)gasLimit
                  destination:(nullable NSString *)destination
                       amount:(nullable NSDecimalNumber *)amount
                         data:(nullable NSString *)data
                        nonce:(nullable NSNumber *)nonce
                      sendMax:(BOOL)sendMax
                   completion:(_Nonnull ZKComposeTransactionCompletionBlock)completionHandler {

    [self composeEthTransaction:fromAccountId
                       gasPrice:gasPrice
                       gasLimit:gasLimit
                    destination:destination
                         amount:amount
                           data:data
                          nonce:nonce
                        sendMax:sendMax
                       callback:[[ComposeTransactionCallback alloc] initWithCompletionHandler: completionHandler]];

};


- (void)composeTransaction:(nonnull NSString *)fromAccountId
           changeAccountId:(nonnull NSString *)changeAccountId
               destination:(nonnull NSString *)destination
                    amount:(nullable NSDecimalNumber *)amount
                  feeRate:(nonnull NSDecimalNumber *)feeRate
                  sendMax:(BOOL)sendMax
               completion:(_Nonnull ZKComposeTransactionCompletionBlock)completionHandler {

    [self composeTransaction:fromAccountId
             changeAccountId:changeAccountId
                 destination:destination
                      amount:amount
                     feeRate:feeRate
                     sendMax:sendMax
                    callback:[[ComposeTransactionCallback alloc] initWithCompletionHandler: completionHandler]];

};

- (void)composeInternalFiatTransaction:(nonnull NSString *)fromAccountId
                           toAccountId:(nonnull NSString *)toAccountId
                                amount:(nullable NSDecimalNumber *)amount
                               sendMax:(BOOL)sendMax
                            completion:(_Nonnull ZKComposeTransactionCompletionBlock)completionHandler {
    [self composeInternalFiatTransaction:fromAccountId toAccountId:toAccountId amount:amount sendMax:sendMax callback:[[ComposeTransactionCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)composeTransactionToNominatedAccount:(nonnull NSString *)fromAccountId
                                      amount:(nullable NSDecimalNumber *)amount
                                     sendMax:(BOOL)sendMax
                                  completion:(_Nonnull ZKComposeTransactionCompletionBlock)completionHandler {
        [self composeTransactionToNominatedAccount:fromAccountId amount:amount sendMax:sendMax callback:[[ComposeTransactionCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)composeExchange:(nonnull NSString *)fromAccountId
            toAccountId:(nonnull NSString *)toAccountId
           exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
        exchangeSetting:(nonnull ZKExchangeSetting *)exchangeSetting
                 amount:(nullable NSDecimalNumber *)amount
                sendMax:(BOOL)sendMax
             completion:(_Nonnull ZKComposeExchangeCompletionBlock)completionHandler {

    [self composeExchange:fromAccountId
              toAccountId:toAccountId
             exchangeRate:exchangeRate
          exchangeSetting:exchangeSetting
                   amount:amount
                  sendMax:sendMax
                 callback:[[ComposeExchangeCallback alloc] initWithCompletionHandler: completionHandler]];

};


- (void)submitTransaction:(nonnull ZKComposedTransaction *)composedTransaction
               completion:(_Nonnull ZKSubmitTransactionCompletionBlock)completionHandler {
    [self submitTransaction:composedTransaction
                   callback:[[SubmitTransactionCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)submitExchange:(nonnull ZKComposedExchange *)composedExchange
            completion:(_Nonnull ZKSubmitExchangeCompletionBlock)completionHandler {
    [self submitExchange:composedExchange
                callback:[[SubmitExchangeCallback alloc] initWithCompletionHandler: completionHandler]];
};

@end
