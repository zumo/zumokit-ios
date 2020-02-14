// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import <Foundation/Foundation.h>
@protocol ZKSendTransactionCallback;


@interface ZKWallet : NSObject

- (void)sendEthTransaction:(nonnull NSString *)accountId
                  gasPrice:(nonnull NSString *)gasPrice
                  gasLimit:(nonnull NSString *)gasLimit
                        to:(nullable NSString *)to
                     value:(nullable NSString *)value
                      data:(nullable NSString *)data
                     nonce:(nullable NSNumber *)nonce
                  callback:(nullable id<ZKSendTransactionCallback>)callback;

- (nullable NSString *)maxSpendableEth:(nonnull NSString *)accountId
                              gasPrice:(nonnull NSString *)gasPrice
                              gasLimit:(nonnull NSString *)gasLimit;

- (void)sendBtcTransaction:(nonnull NSString *)accountId
           changeAccountId:(nonnull NSString *)changeAccountId
                        to:(nonnull NSString *)to
                     value:(nonnull NSString *)value
                   feeRate:(nonnull NSString *)feeRate
                  callback:(nullable id<ZKSendTransactionCallback>)callback;

- (nullable NSString *)maxSpendableBtc:(nonnull NSString *)accountId
                                    to:(nullable NSString *)to
                               feeRate:(nonnull NSString *)feeRate;

@end
