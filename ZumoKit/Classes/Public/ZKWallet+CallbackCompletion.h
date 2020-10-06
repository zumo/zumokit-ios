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
typedef void(^ComposeTransactionCompletionBlock)(ZKComposedTransaction * _Nullable composedTransaction, NSError * _Nullable error);

/** Completion block used by methods in `ZKWallet` class. */
typedef void(^ComposeExchangeCompletionBlock)(ZKComposedExchange * _Nullable composedExchange, NSError * _Nullable error);

/** Completion block used by methods in `ZKWallet` class. */
typedef void(^SubmitTransactionCompletionBlock)(ZKTransaction * _Nullable transaction, NSError * _Nullable error);

/** Completion block used by methods in `ZKWallet` class. */
typedef void(^SubmitExchangeCompletionBlock)(ZKExchange * _Nullable exchange, NSError * _Nullable error);

@interface ZKWallet (ZKWalletCallbackCompletion)

/**
<code>composeEthTransaction</code> completion handler extension.
@see `-[ZKWallet composeEthTransaction:gasPrice:gasLimit:destination:amount:data:nonce:sendMax:callback:]`
*/
- (void)composeEthTransaction:(nonnull NSString *)fromAccountId
                     gasPrice:(nonnull NSDecimalNumber *)gasPrice
                     gasLimit:(nonnull NSDecimalNumber *)gasLimit
                  destination:(nullable NSString *)destination
                       amount:(nullable NSDecimalNumber *)amount
                         data:(nullable NSString *)data
                        nonce:(nullable NSNumber *)nonce
                      sendMax:(BOOL)sendMax
                   completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler;

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
                completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler;

/**
<code>composeInternalFiatTransaction</code> completion handler extension.
@see `-[ZKWallet composeInternalFiatTransaction:toAccountId:amount:sendMax:callback:]`
*/
- (void)composeInternalFiatTransaction:(nonnull NSString *)fromAccountId
                           toAccountId:(nonnull NSString *)toAccountId
                                amount:(nullable NSDecimalNumber *)amount
                               sendMax:(BOOL)sendMax
                            completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler;

/**
<code>composeInternalFiatTransaction</code> completion handler extension.
@see `-[ZKWallet composeTransactionToNominatedAccount:amount:sendMax:callback:]`
*/
- (void)composeTransactionToNominatedAccount:(nonnull NSString *)fromAccountId
                                      amount:(nullable NSDecimalNumber *)amount
                                     sendMax:(BOOL)sendMax
                                  completion:(_Nonnull ComposeTransactionCompletionBlock)completionHandler;

/**
<code>composeTransactionToNominatedAccount</code> completion handler extension.
@see `-[ZKWallet composeTransactionToNominatedAccount:amount:sendMax:callback:]`
*/
- (void)composeExchange:(nonnull NSString *)depositAccountId
      withdrawAccountId:(nonnull NSString *)withdrawAccountId
           exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
       exchangeSettings:(nonnull ZKExchangeSettings *)exchangeFees
                 amount:(nullable NSDecimalNumber *)amount
                sendMax:(BOOL)sendMax
             completion:(_Nonnull ComposeExchangeCompletionBlock)completionHandler;

/**
<code>submitTransaction</code> completion handler extension.
@see `-[ZKWallet submitTransaction:callback:]`
*/
- (void)submitTransaction:(nonnull ZKComposedTransaction *)composedTransaction
               completion:(_Nonnull SubmitTransactionCompletionBlock)completionHandler;

/**
<code>submitExchange</code> completion handler extension.
@see `-[ZKWallet submitExchange:callback:]`
*/
- (void)submitExchange:(nonnull ZKComposedExchange *)composedExchange
            completion:(_Nonnull SubmitExchangeCompletionBlock)completionHandler;

@end

#endif /* ZKWallet_CallbackCompletion_h */
