// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import <Foundation/Foundation.h>

/**
 * Exchange status, such as 'PENDING', 'DEPOSITED' and 'CONFIRMED'.
 * <p>
 * Once exchange is submitted it has to be confirmed. Once exchange is confirmed its status will change from pending to confirmed.
 * <p>
 * See <a href="https://developers.zumo.money/docs/guides/make-exchanges#exchange-statuses">Make Exchanges</a> guide for details.
 */
@interface ZKExchangeStatus : NSObject
- (nonnull instancetype)init;
+ (nonnull instancetype)exchangeStatus;

@end

/** Exchange has been paused by Transaction Service before being submitted to blockchain. */
extern NSString * __nonnull const ZKExchangeStatusPAUSED;
/** Exchange has been rejected by Transaction Service before being submitted to blockchain. */
extern NSString * __nonnull const ZKExchangeStatusREJECTED;
/** Deposit transaction has been submitted to blockchain. */
extern NSString * __nonnull const ZKExchangeStatusPENDING;
/** Deposit transaction has been mined and exchange has been initiated. */
extern NSString * __nonnull const ZKExchangeStatusDEPOSITED;
/** Exchange was confirmed. */
extern NSString * __nonnull const ZKExchangeStatusCONFIRMED;
/** Exchange has failed. */
extern NSString * __nonnull const ZKExchangeStatusFAILED;
/** Ethereum deposit transaction was overriden by sending the same transaction with higher gas price. */
extern NSString * __nonnull const ZKExchangeStatusRESUBMITTED;
/**
 * Ethereum deposit transaction was overriden by a different transaction with higher gas price than
 * the previously submitted transaction and with with the same nonce as that previously submitted transaction.
 */
extern NSString * __nonnull const ZKExchangeStatusCANCELLED;
