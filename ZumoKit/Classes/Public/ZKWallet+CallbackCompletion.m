//
//  CPWallet+CallbackCompletion.m
//  Pods-ZumoKit_Example
//
//  Created by Ivan Romanovski on 02/10/2019.
//

#import <Foundation/Foundation.h>

#import "ZKWallet+CallbackCompletion.h"
#import "ComposeTransactionCallback.h"

@implementation ZKWallet (ZKWalletCallbackCompletion)

- (void)composeEthTransaction:(nonnull NSString *)fromAccountId
                     gasPrice:(nonnull NSDecimalNumber *)gasPrice
                     gasLimit:(int32_t)gasLimit
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

@end
