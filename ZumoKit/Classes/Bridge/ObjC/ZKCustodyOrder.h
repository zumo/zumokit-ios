// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import <Foundation/Foundation.h>

/** Record containing custody order. */
@interface ZKCustodyOrder : NSObject
- (nonnull instancetype)initWithId:(nonnull NSString *)id
                              type:(nonnull NSString *)type
                            status:(nonnull NSString *)status
                            amount:(nullable NSDecimalNumber *)amount
                       feeInAmount:(BOOL)feeInAmount
                     estimatedFees:(nullable NSDecimalNumber *)estimatedFees
                              fees:(nullable NSDecimalNumber *)fees
                     fromAddresses:(nullable NSArray<NSString *> *)fromAddresses
                     fromAccountId:(nullable NSString *)fromAccountId
                        fromUserId:(nullable NSString *)fromUserId
              fromUserIntegratorId:(nullable NSString *)fromUserIntegratorId
                         toAddress:(nullable NSString *)toAddress
                       toAccountId:(nullable NSString *)toAccountId
                          toUserId:(nullable NSString *)toUserId
                toUserIntegratorId:(nullable NSString *)toUserIntegratorId
                         createdAt:(int32_t)createdAt
                         updatedAt:(int32_t)updatedAt;
+ (nonnull instancetype)custodyOrderWithId:(nonnull NSString *)id
                                      type:(nonnull NSString *)type
                                    status:(nonnull NSString *)status
                                    amount:(nullable NSDecimalNumber *)amount
                               feeInAmount:(BOOL)feeInAmount
                             estimatedFees:(nullable NSDecimalNumber *)estimatedFees
                                      fees:(nullable NSDecimalNumber *)fees
                             fromAddresses:(nullable NSArray<NSString *> *)fromAddresses
                             fromAccountId:(nullable NSString *)fromAccountId
                                fromUserId:(nullable NSString *)fromUserId
                      fromUserIntegratorId:(nullable NSString *)fromUserIntegratorId
                                 toAddress:(nullable NSString *)toAddress
                               toAccountId:(nullable NSString *)toAccountId
                                  toUserId:(nullable NSString *)toUserId
                        toUserIntegratorId:(nullable NSString *)toUserIntegratorId
                                 createdAt:(int32_t)createdAt
                                 updatedAt:(int32_t)updatedAt;

/** Identifier. */
@property (nonatomic, readonly, nonnull) NSString * id;

/**
 * Custody order type.
 * @see `ZKCustodyOrderType`
 */
@property (nonatomic, readonly, nonnull) NSString * type;

/**
 * Transaction status.
 * @see `ZKCustodyOrder`
 */
@property (nonatomic, readonly, nonnull) NSString * status;

/** Custody order amount, null if not known yet. */
@property (nonatomic, readonly, nullable) NSDecimalNumber * amount;

/** Flag indicating if fees are included in order amount. */
@property (nonatomic, readonly) BOOL feeInAmount;

/** Estimated custody order fees. */
@property (nonatomic, readonly, nullable) NSDecimalNumber * estimatedFees;

/** Actual custody order fees, null if not known yet.  */
@property (nonatomic, readonly, nullable) NSDecimalNumber * fees;

/** Crypto addresses from which funds where received, if any. */
@property (nonatomic, readonly, nullable) NSArray<NSString *> * fromAddresses;

/** Debit `ZKAccount` identifier, if applicable.  */
@property (nonatomic, readonly, nullable) NSString * fromAccountId;

/** Debit `ZKAccount's` user identifier, if applicable.  */
@property (nonatomic, readonly, nullable) NSString * fromUserId;

/** Debit `ZKAccount's` user integrator identifier, if applicable.  */
@property (nonatomic, readonly, nullable) NSString * fromUserIntegratorId;

/** Destination crypto address, if applicable. */
@property (nonatomic, readonly, nullable) NSString * toAddress;

/** Credit `ZKAccount` identifier, if applicable. */
@property (nonatomic, readonly, nullable) NSString * toAccountId;

/** Credit `ZKAccount's` user identifier, if applicable.  */
@property (nonatomic, readonly, nullable) NSString * toUserId;

/** Credit `ZKAccount's` user integrator identifier, if applicable.  */
@property (nonatomic, readonly, nullable) NSString * toUserIntegratorId;

/** Epoch timestamp when custody order was created.  */
@property (nonatomic, readonly) int32_t createdAt;

/** Epoch timestamp when custody order was updated.  */
@property (nonatomic, readonly) int32_t updatedAt;

@end
