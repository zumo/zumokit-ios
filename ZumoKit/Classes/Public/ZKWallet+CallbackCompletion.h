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

/** Completion block used by methods in `ZKWallet` class. */
typedef void (^ZKComposeTransactionCompletionBlock)(ZKComposedTransaction *_Nullable composedTransaction, NSError *_Nullable error);

/** Completion block used by methods in `ZKWallet` class. */
typedef void (^ZKComposeExchangeCompletionBlock)(ZKComposedExchange *_Nullable composedExchange, NSError *_Nullable error);

/** Completion block used by methods in `ZKWallet` class. */
typedef void (^ZKSubmitTransactionCompletionBlock)(ZKTransaction *_Nullable transaction, NSError *_Nullable error);

/** Completion block used by methods in `ZKWallet` class. */
typedef void (^ZKSubmitExchangeCompletionBlock)(ZKExchange *_Nullable exchange, NSError *_Nullable error);

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

/**
<code>composeInternalFiatTransaction</code> completion handler extension.
@see `-[ZKWallet composeInternalFiatTransaction:toAccountId:amount:sendMax:callback:]`
*/
- (void)composeInternalFiatTransaction:(nonnull NSString *)fromAccountId
                           toAccountId:(nonnull NSString *)toAccountId
                                amount:(nullable NSDecimalNumber *)amount
                               sendMax:(BOOL)sendMax
                            completion:(_Nonnull ZKComposeTransactionCompletionBlock)completionHandler;

/**
<code>composeInternalFiatTransaction</code> completion handler extension.
@see `-[ZKWallet composeTransactionToNominatedAccount:amount:sendMax:callback:]`
*/
- (void)composeTransactionToNominatedAccount:(nonnull NSString *)fromAccountId
                                      amount:(nullable NSDecimalNumber *)amount
                                     sendMax:(BOOL)sendMax
                                  completion:(_Nonnull ZKComposeTransactionCompletionBlock)completionHandler;

/**
<code>composeTransactionToNominatedAccount</code> completion handler extension.
@see `-[ZKWallet composeTransactionToNominatedAccount:amount:sendMax:callback:]`
*/
- (void)composeExchange:(nonnull NSString *)fromAccountId
            toAccountId:(nonnull NSString *)toAccountId
           exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
        exchangeSetting:(nonnull ZKExchangeSetting *)exchangeFees
                 amount:(nullable NSDecimalNumber *)amount
                sendMax:(BOOL)sendMax
             completion:(_Nonnull ZKComposeExchangeCompletionBlock)completionHandler;

/**
<code>submitTransaction</code> completion handler extension.
@see `-[ZKWallet submitTransaction:metadata:callback:]`
*/
- (void)submitTransaction:(nonnull ZKComposedTransaction *)composedTransaction
                 metadata:(nullable NSString *)metadata
               completion:(_Nonnull ZKSubmitTransactionCompletionBlock)completionHandler;

/**
<code>submitExchange</code> completion handler extension.
@see `-[ZKWallet submitExchange:callback:]`
*/
- (void)submitExchange:(nonnull ZKComposedExchange *)composedExchange
            completion:(_Nonnull ZKSubmitExchangeCompletionBlock)completionHandler;

@end

#endif /* ZKWallet_CallbackCompletion_h */
