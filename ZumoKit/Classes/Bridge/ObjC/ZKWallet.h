// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import <Foundation/Foundation.h>
@protocol ZKComposeTransactionCallback;


/**
 * User wallet provides methods for transfer and exchange of fiat and cryptocurrency funds.
 * Sending a transaction or making an exchange is a two step process. First a transaction or
 * exchange has to be composed via one of the compose methods, then `ZKComposedTransaction` or
 * `ZKComposedExchange` can be submitted.
 * <p>
 * User wallet instance can be obtained by creating, unlocking or recovering user wallet via `ZKUser` instance.
 */
@interface ZKWallet : NSObject

/**
 * Compose BTC or BSV transaction. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/send-transactions#crypto">Send Transactions</a> guide for usage details.
 * <p>
 * On success `ZKComposedTransaction`  is returned via callback.
 *
 * @param fromAccountId   `ZKAccount` identifier
 * @param changeAccountId change `ZKAccount` identifier, which can be the same as fromAccountId
 * @param destination       destination wallet address
 * @param amount            amount in BTC or BSV
 * @param feeRate          fee rate in satoshis/byte
 * @param sendMax          send maximum possible funds to destination
 * @param callback          an interface to receive the result or error
 */
- (void)composeTransaction:(nonnull NSString *)fromAccountId
           changeAccountId:(nonnull NSString *)changeAccountId
               destination:(nonnull NSString *)destination
                    amount:(nullable NSDecimalNumber *)amount
                   feeRate:(nonnull NSDecimalNumber *)feeRate
                   sendMax:(BOOL)sendMax
                  callback:(nullable id<ZKComposeTransactionCallback>)callback;

/**
 * Compose Ethereum transaction. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/send-transactions#ethereum">Send Transactions</a> guide for usage details.
 * <p>
 * On success `ZKComposedTransaction` is returned via callback.
 *
 * @param fromAccountId `ZKAccount` identifier
 * @param gasPrice       gas price in gwei
 * @param gasLimit       gas limit
 * @param destination     destination wallet address
 * @param amount          amount in ETH
 * @param data            data in string format or null
 * @param nonce           next transaction nonce or null
 * @param sendMax        send maximum possible funds to destination
 * @param callback        an interface to receive the result or error
 */
- (void)composeEthTransaction:(nonnull NSString *)fromAccountId
                     gasPrice:(nonnull NSDecimalNumber *)gasPrice
                     gasLimit:(int32_t)gasLimit
                  destination:(nullable NSString *)destination
                       amount:(nullable NSDecimalNumber *)amount
                         data:(nullable NSString *)data
                        nonce:(nullable NSNumber *)nonce
                      sendMax:(BOOL)sendMax
                     callback:(nullable id<ZKComposeTransactionCallback>)callback;

@end
