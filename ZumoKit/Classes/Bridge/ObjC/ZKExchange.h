// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKQuote.h"
#import <Foundation/Foundation.h>

/** Record containing exchange details. */
@interface ZKExchange : NSObject
- (nonnull instancetype)initWithId:(nonnull NSString *)id
                            status:(nonnull NSString *)status
                              pair:(nonnull NSString *)pair
                              side:(nonnull NSString *)side
                             price:(nonnull NSDecimalNumber *)price
                            amount:(nonnull NSDecimalNumber *)amount
                    debitAccountId:(nonnull NSString *)debitAccountId
                debitTransactionId:(nonnull NSString *)debitTransactionId
                   creditAccountId:(nonnull NSString *)creditAccountId
               creditTransactionId:(nullable NSString *)creditTransactionId
                             quote:(nonnull ZKQuote *)quote
                             rates:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, NSDecimalNumber *> *> *)rates
                             nonce:(nullable NSString *)nonce
                         createdAt:(nonnull NSString *)createdAt
                         updatedAt:(nonnull NSString *)updatedAt;
+ (nonnull instancetype)exchangeWithId:(nonnull NSString *)id
                                status:(nonnull NSString *)status
                                  pair:(nonnull NSString *)pair
                                  side:(nonnull NSString *)side
                                 price:(nonnull NSDecimalNumber *)price
                                amount:(nonnull NSDecimalNumber *)amount
                        debitAccountId:(nonnull NSString *)debitAccountId
                    debitTransactionId:(nonnull NSString *)debitTransactionId
                       creditAccountId:(nonnull NSString *)creditAccountId
                   creditTransactionId:(nullable NSString *)creditTransactionId
                                 quote:(nonnull ZKQuote *)quote
                                 rates:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, NSDecimalNumber *> *> *)rates
                                 nonce:(nullable NSString *)nonce
                             createdAt:(nonnull NSString *)createdAt
                             updatedAt:(nonnull NSString *)updatedAt;

/** Identifier */
@property (nonatomic, readonly, nonnull) NSString * id;

/**
 * Exchange status.
 * @see `ZKExchangeStatus`
 */
@property (nonatomic, readonly, nonnull) NSString * status;

/** Exchange pair, e.g. "ETH-GBP". */
@property (nonatomic, readonly, nonnull) NSString * pair;

/**
 * Exchange side, "BUY" or "SELL".
 * @see `ZKExchangeSide`
 */
@property (nonatomic, readonly, nonnull) NSString * side;

/** Exchange quote price. */
@property (nonatomic, readonly, nonnull) NSDecimalNumber * price;

/** Amount in base currency. */
@property (nonatomic, readonly, nonnull) NSDecimalNumber * amount;

/** Debit `ZKAccount` identifier. */
@property (nonatomic, readonly, nonnull) NSString * debitAccountId;

/** Debit `ZKTransaction` identifier. */
@property (nonatomic, readonly, nonnull) NSString * debitTransactionId;

/** Credit `ZKAccount` identifier. */
@property (nonatomic, readonly, nonnull) NSString * creditAccountId;

/** Credit `ZKTransaction` identifier. */
@property (nonatomic, readonly, nullable) NSString * creditTransactionId;

/** Exchange rate quote used. */
@property (nonatomic, readonly, nonnull) ZKQuote * quote;

/**
 * Exchange rates at the time exchange was made.
 * This can be used to display amounts in local currency to the user.
 */
@property (nonatomic, readonly, nonnull) NSDictionary<NSString *, NSDictionary<NSString *, NSDecimalNumber *> *> * rates;

/** Exchange nonce or null. Used to prevent double spend. */
@property (nonatomic, readonly, nullable) NSString * nonce;

/** Timestamp when exchange was created, e.g. "2020-07-29T09:46:34.288Z". */
@property (nonatomic, readonly, nonnull) NSString * createdAt;

/** Timestamp when exchange was updated, e.g. "2020-07-29T09:46:34.288Z". */
@property (nonatomic, readonly, nonnull) NSString * updatedAt;

@end
