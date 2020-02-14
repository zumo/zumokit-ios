//
//  CPWallet+CallbackCompletion.m
//  Pods-ZumoKit_Example
//
//  Created by Ivan Romanovski on 02/10/2019.
//

#import <Foundation/Foundation.h>

#import "ZKWallet+CallbackCompletion.h"
#import "SendTransactionCallback.h"

@implementation ZKWallet (ZKWalletCallbackCompletion)

- (void)sendEthTransaction:(nonnull NSString *)accountId
                  gasPrice:(nonnull NSString *)gasPrice
                  gasLimit:(nonnull NSString *)gasLimit
                        to:(nullable NSString *)to
                     value:(nullable NSString *)value
                      data:(nullable NSString *)data
                     nonce:(nullable NSNumber *)nonce
             completion:(SendTransactionCompletionBlock)completionHandler {
    
    [self sendEthTransaction:accountId gasPrice:gasPrice gasLimit:gasLimit to:to value:value data:data nonce:nonce callback:[[SendTransactionCallback alloc] initWithCompletionHandler: completionHandler]];
    
};


- (void)sendBtcTransaction:(nonnull NSString *)accountId
changeAccountId:(nonnull NSString *)changeAccountId
             to:(nonnull NSString *)to
          value:(nonnull NSString *)value
        feeRate:(nonnull NSString *)feeRate
                completion:(_Nonnull SendTransactionCompletionBlock)completionHandler {
    
    [self sendBtcTransaction:accountId changeAccountId:changeAccountId to:to value:value feeRate:feeRate
                    callback:[[SendTransactionCallback alloc] initWithCompletionHandler: completionHandler]];
    
};

@end
