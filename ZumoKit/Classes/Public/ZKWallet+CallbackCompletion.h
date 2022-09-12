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

/** Completion block used by methods in `ZKWallet` class. */
typedef void (^ZKComposeTransactionCompletionBlock)(ZKComposedTransaction *_Nullable composedTransaction, NSError *_Nullable error);

@interface ZKWallet (ZKWalletCallbackCompletion)

/**
<code>composeEthTransaction</code> completion handler extension.
@see `-[ZKWallet composeEthTransaction:gasPrice:gasLimit:destination:amount:data:nonce:sendMax:callback:]`
*/
- (void)composeEthTransaction:(nonnull NSString *)fromAccountId
                     gasPrice:(nonnull NSDecimalNumber *)gasPrice
                     gasLimit:(int32_t)gasLimit
                  destination:(nullable NSString *)destination
                       amount:(nullable NSDecimalNumber *)amount
                         data:(nullable NSString *)data
                        nonce:(nullable NSNumber *)nonce
                      sendMax:(BOOL)sendMax
                   completion:(_Nonnull ZKComposeTransactionCompletionBlock)completionHandler;

/**
<code>composeTransaction</code> completion handler extension.
@see `-[ZKWallet composeTransaction:changeAccountId:destination:amount:feeRate:sendMax:callback:]`
*/
- (void)composeTransaction:(nonnull NSString *)fromAccountId
           changeAccountId:(nonnull NSString *)changeAccountId
               destination:(nonnull NSString *)destination
                    amount:(nullable NSDecimalNumber *)amount
                   feeRate:(nonnull NSDecimalNumber *)feeRate
                   sendMax:(BOOL)sendMax
                completion:(_Nonnull ZKComposeTransactionCompletionBlock)completionHandler;

@end

#endif /* ZKWallet_CallbackCompletion_h */
