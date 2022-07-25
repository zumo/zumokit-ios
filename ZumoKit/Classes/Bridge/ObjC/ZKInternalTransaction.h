// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import <Foundation/Foundation.h>

/** Record containing internal transaction details. */
@interface ZKInternalTransaction : NSObject
- (nonnull instancetype)initWithFromUserId:(nullable NSString *)fromUserId
                      fromUserIntegratorId:(nullable NSString *)fromUserIntegratorId
                             fromAccountId:(nullable NSString *)fromAccountId
                               fromAddress:(nonnull NSString *)fromAddress
                                  toUserId:(nullable NSString *)toUserId
                        toUserIntegratorId:(nullable NSString *)toUserIntegratorId
                               toAccountId:(nullable NSString *)toAccountId
                                 toAddress:(nonnull NSString *)toAddress
                                    amount:(nonnull NSDecimalNumber *)amount;
+ (nonnull instancetype)internalTransactionWithFromUserId:(nullable NSString *)fromUserId
                                     fromUserIntegratorId:(nullable NSString *)fromUserIntegratorId
                                            fromAccountId:(nullable NSString *)fromAccountId
                                              fromAddress:(nonnull NSString *)fromAddress
                                                 toUserId:(nullable NSString *)toUserId
                                       toUserIntegratorId:(nullable NSString *)toUserIntegratorId
                                              toAccountId:(nullable NSString *)toAccountId
                                                toAddress:(nonnull NSString *)toAddress
                                                   amount:(nonnull NSDecimalNumber *)amount;

/** Sender user id or null if it is external user. */
@property (nonatomic, readonly, nullable) NSString * fromUserId;

/** Sender user integrator id or null if it is external user. */
@property (nonatomic, readonly, nullable) NSString * fromUserIntegratorId;

/** Sender account id or null if it is external user. */
@property (nonatomic, readonly, nullable) NSString * fromAccountId;

/** Sender address. */
@property (nonatomic, readonly, nonnull) NSString * fromAddress;

/** Recipient user id or null if it is external user. */
@property (nonatomic, readonly, nullable) NSString * toUserId;

/** Recipient user integrator id or null if it is external user. */
@property (nonatomic, readonly, nullable) NSString * toUserIntegratorId;

/** Recipient account id or null if it is external user. */
@property (nonatomic, readonly, nullable) NSString * toAccountId;

/** Recipient address. */
@property (nonatomic, readonly, nonnull) NSString * toAddress;

/** Transaction amount in transaction currency. */
@property (nonatomic, readonly, nonnull) NSDecimalNumber * amount;

@end
