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

- (void)composeEthTransaction:(nonnull NSString *)accountId
                  gasPrice:(nonnull NSString *)gasPrice
                  gasLimit:(nonnull NSString *)gasLimit
                        to:(nullable NSString *)to
                     value:(nullable NSString *)value
                      data:(nullable NSString *)data
                     nonce:(nullable NSNumber *)nonce
             completion:(ComposeTransactionCompletionBlock)completionHandler {
    
    [self composeEthTransaction:accountId
                       gasPrice:gasPrice
                       gasLimit:gasLimit
                             to:to
                          value:value
                           data:data
                          nonce:nonce
                       callback:[[ComposeTransactionCallback alloc] initWithCompletionHandler: completionHandler]];
    
};


- (void)composeBtcTransaction:(nonnull NSString *)accountId
changeAccountId:(nonnull NSString *)changeAccountId
             to:(nonnull NSString *)to
          value:(nonnull NSString *)value
        feeRate:(nonnull NSString *)feeRate
                completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler {
    
    [self composeBtcTransaction:accountId
                changeAccountId:changeAccountId
                             to:to
                          value:value
                        feeRate:feeRate
                    callback:[[ComposeTransactionCallback alloc] initWithCompletionHandler: completionHandler]];
    
};


- (void)composeExchange:(nonnull NSString *)depositAccountId
      withdrawAccountId:(nonnull NSString *)withdrawAccountId
           exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
       exchangeSettings:(nonnull ZKExchangeSettings *)exchangeSettings
                  value:(nonnull NSString *)value
             completion:(_Nonnull ComposeExchangeCompletionBlock)completionHandler {
                 
    [self composeExchange:depositAccountId
        withdrawAccountId:withdrawAccountId
             exchangeRate:exchangeRate
        exchangeSettings:exchangeSettings
                    value:value
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
