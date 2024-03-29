// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKAccount.h"
#import "ZKQuote.h"
#import <Foundation/Foundation.h>

/** Record containing result of the compose exchange method on `ZKWallet` object. */
@interface ZKComposedExchange : NSObject
- (nonnull instancetype)initWithDebitAccount:(nonnull ZKAccount *)debitAccount
                               creditAccount:(nonnull ZKAccount *)creditAccount
                                       quote:(nonnull ZKQuote *)quote;
+ (nonnull instancetype)composedExchangeWithDebitAccount:(nonnull ZKAccount *)debitAccount
                                           creditAccount:(nonnull ZKAccount *)creditAccount
                                                   quote:(nonnull ZKQuote *)quote;

/** Debit account. */
@property (nonatomic, readonly, nonnull) ZKAccount * debitAccount;

/** Credit account. */
@property (nonatomic, readonly, nonnull) ZKAccount * creditAccount;

/** Exchange rate quote used when composing exchange. */
@property (nonatomic, readonly, nonnull) ZKQuote * quote;

@end
