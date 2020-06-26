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
                     gasPrice:(nonnull NSString *)gasPrice
                     gasLimit:(nonnull NSString *)gasLimit
                  destination:(nullable NSString *)destination
                       amount:(nullable NSString *)amount
                         data:(nullable NSString *)data
                        nonce:(nullable NSNumber *)nonce
                      sendMax:(BOOL)sendMax
                   completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler {
    
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


- (void)composeBtcTransaction:(nonnull NSString *)fromAccountId
              changeAccountId:(nonnull NSString *)changeAccountId
                  destination:(nonnull NSString *)destination
                       amount:(nullable NSString *)amount
                      feeRate:(nonnull NSString *)feeRate
                      sendMax:(BOOL)sendMax
                   completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler {
    
    [self composeBtcTransaction:fromAccountId
                changeAccountId:changeAccountId
                    destination:destination
                         amount:amount
                        feeRate:feeRate
                        sendMax:sendMax
                    callback:[[ComposeTransactionCallback alloc] initWithCompletionHandler: completionHandler]];
    
};

- (void)composeInternalFiatTransaction:(nonnull NSString *)fromAccountId
                           toAccountId:(nonnull NSString *)toAccountId
                                amount:(nullable NSString *)amount
                               sendMax:(BOOL)sendMax
                            completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler {
    [self composeInternalFiatTransaction:fromAccountId toAccountId:toAccountId amount:amount sendMax:sendMax callback:[[ComposeTransactionCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)composeTransactionToNominatedAccount:(nonnull NSString *)fromAccountId
                                      amount:(nullable NSString *)amount
                                     sendMax:(BOOL)sendMax
                                  completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler {
        [self composeTransactionToNominatedAccount:fromAccountId amount:amount sendMax:sendMax callback:[[ComposeTransactionCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)composeExchange:(nonnull NSString *)depositAccountId
      withdrawAccountId:(nonnull NSString *)withdrawAccountId
           exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
       exchangeSettings:(nonnull ZKExchangeSettings *)exchangeSettings
                  value:(nullable NSString *)value
                sendMax:(BOOL)sendMax
             completion:(_Nonnull ComposeExchangeCompletionBlock)completionHandler {
                 
    [self composeExchange:depositAccountId
        withdrawAccountId:withdrawAccountId
             exchangeRate:exchangeRate
        exchangeSettings:exchangeSettings
                    value:value
                  sendMax:sendMax
                 callback:[[ComposeExchangeCallback alloc] initWithCompletionHandler: completionHandler]];

};


- (void)submitTransaction:(nonnull ZKComposedTransaction *)composedTransaction
               completion:(_Nonnull SubmitTransactionCompletionBlock)completionHandler {
    [self submitTransaction:composedTransaction
                   callback:[[SubmitTransactionCallback alloc] initWithCompletionHandler: completionHandler]];
};

- (void)submitExchange:(nonnull ZKComposedExchange *)composedExchange
            completion:(_Nonnull SubmitExchangeCompletionBlock)completionHandler {
    [self submitExchange:composedExchange
                callback:[[SubmitExchangeCallback alloc] initWithCompletionHandler: completionHandler]];
};

@end
