#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ZKError.h"
#import "ZKUser+CallbackCompletion.h"
#import "ZKWallet+CallbackCompletion.h"
#import "ZumoKit.h"
#import "ZKAccount.h"
#import "ZKAccountCallback.h"
#import "ZKAccountCryptoProperties.h"
#import "ZKAccountDataListener.h"
#import "ZKAccountDataSnapshot.h"
#import "ZKAccountFiatProperties.h"
#import "ZKAccountFiatPropertiesCallback.h"
#import "ZKAccountType.h"
#import "ZKAddress.h"
#import "ZKAuthenticationConfig.h"
#import "ZKAuthenticationConfigCallback.h"
#import "ZKCard.h"
#import "ZKCardCallback.h"
#import "ZKCardDetails.h"
#import "ZKCardDetailsCallback.h"
#import "ZKCardStatus.h"
#import "ZKCardType.h"
#import "ZKChangeListener.h"
#import "ZKComposedExchange.h"
#import "ZKComposedTransaction.h"
#import "ZKComposeExchangeCallback.h"
#import "ZKComposeTransactionCallback.h"
#import "ZKCurrencyCode.h"
#import "ZKCurrencyType.h"
#import "ZKCustodyType.h"
#import "ZKExchange.h"
#import "ZKExchangeRate.h"
#import "ZKExchangeSetting.h"
#import "ZKExchangeStatus.h"
#import "ZKHistoricalExchangeRatesCallback.h"
#import "ZKInternalTransaction.h"
#import "ZKKbaAnswer.h"
#import "ZKKbaQuestion.h"
#import "ZKLogListener.h"
#import "ZKMnemonicCallback.h"
#import "ZKNetworkType.h"
#import "ZKPinCallback.h"
#import "ZKQuote.h"
#import "ZKSubmitExchangeCallback.h"
#import "ZKSubmitTransactionCallback.h"
#import "ZKSuccessCallback.h"
#import "ZKTimeInterval.h"
#import "ZKTransaction.h"
#import "ZKTransactionAmount.h"
#import "ZKTransactionCardProperties.h"
#import "ZKTransactionCryptoProperties.h"
#import "ZKTransactionDirection.h"
#import "ZKTransactionFeeRate.h"
#import "ZKTransactionFiatProperties.h"
#import "ZKTransactionStatus.h"
#import "ZKTransactionType.h"
#import "ZKUser.h"
#import "ZKUserCallback.h"
#import "ZKUtils.h"
#import "ZKWallet.h"
#import "ZKWalletCallback.h"
#import "ZKZumoKitErrorCode.h"
#import "ZKZumoKitErrorType.h"

FOUNDATION_EXPORT double ZumoKitVersionNumber;
FOUNDATION_EXPORT const unsigned char ZumoKitVersionString[];

