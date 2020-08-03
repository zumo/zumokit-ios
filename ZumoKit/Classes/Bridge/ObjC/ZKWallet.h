// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "ZKComposedExchange.h"
#import "ZKComposedTransaction.h"
#import "ZKExchangeRate.h"
#import "ZKExchangeSettings.h"
#import <Foundation/Foundation.h>
@protocol ZKComposeExchangeCallback;
@protocol ZKComposeTransactionCallback;
@protocol ZKSubmitExchangeCallback;
@protocol ZKSubmitTransactionCallback;


@interface ZKWallet : NSObject

- (void)submitTransaction:(nonnull ZKComposedTransaction *)composedTransaction
                 callback:(nullable id<ZKSubmitTransactionCallback>)callback;

- (void)composeEthTransaction:(nonnull NSString *)fromAccountId
                     gasPrice:(nonnull NSDecimalNumber *)gasPrice
                     gasLimit:(nonnull NSDecimalNumber *)gasLimit
                  destination:(nullable NSString *)destination
                       amount:(nullable NSDecimalNumber *)amount
                         data:(nullable NSString *)data
                        nonce:(nullable NSNumber *)nonce
                      sendMax:(BOOL)sendMax
                     callback:(nullable id<ZKComposeTransactionCallback>)callback;

- (void)composeBtcTransaction:(nonnull NSString *)fromAccountId
              changeAccountId:(nonnull NSString *)changeAccountId
                  destination:(nonnull NSString *)destination
                       amount:(nullable NSDecimalNumber *)amount
                      feeRate:(nonnull NSDecimalNumber *)feeRate
                      sendMax:(BOOL)sendMax
                     callback:(nullable id<ZKComposeTransactionCallback>)callback;

- (void)composeInternalFiatTransaction:(nonnull NSString *)fromAccountId
                           toAccountId:(nonnull NSString *)toAccountId
                                amount:(nullable NSDecimalNumber *)amount
                               sendMax:(BOOL)sendMax
                              callback:(nullable id<ZKComposeTransactionCallback>)callback;

- (void)composeTransactionToNominatedAccount:(nonnull NSString *)fromAccountId
                                      amount:(nullable NSDecimalNumber *)amount
                                     sendMax:(BOOL)sendMax
                                    callback:(nullable id<ZKComposeTransactionCallback>)callback;

- (void)submitExchange:(nonnull ZKComposedExchange *)composedExchange
              callback:(nullable id<ZKSubmitExchangeCallback>)callback;

- (void)composeExchange:(nonnull NSString *)depositAccountId
      withdrawAccountId:(nonnull NSString *)withdrawAccountId
           exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
       exchangeSettings:(nonnull ZKExchangeSettings *)exchangeSettings
                 amount:(nullable NSDecimalNumber *)amount
                sendMax:(BOOL)sendMax
               callback:(nullable id<ZKComposeExchangeCallback>)callback;

@end
