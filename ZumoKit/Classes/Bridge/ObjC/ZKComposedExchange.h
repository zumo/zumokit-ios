// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKAccount.h"
#import "ZKExchangeRate.h"
#import "ZKExchangeSettings.h"
#import <Foundation/Foundation.h>

@interface ZKComposedExchange : NSObject
- (nonnull instancetype)initWithSignedTransaction:(nonnull NSString *)signedTransaction
                                   depositAccount:(nonnull ZKAccount *)depositAccount
                                  withdrawAccount:(nonnull ZKAccount *)withdrawAccount
                                     exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
                                 exchangeSettings:(nonnull ZKExchangeSettings *)exchangeSettings
                                  exchangeAddress:(nonnull NSString *)exchangeAddress
                                            value:(nonnull NSString *)value
                                      returnValue:(nonnull NSString *)returnValue
                                       depositFee:(nonnull NSString *)depositFee
                                      exchangeFee:(nonnull NSString *)exchangeFee
                                      withdrawFee:(nonnull NSString *)withdrawFee;
+ (nonnull instancetype)composedExchangeWithSignedTransaction:(nonnull NSString *)signedTransaction
                                               depositAccount:(nonnull ZKAccount *)depositAccount
                                              withdrawAccount:(nonnull ZKAccount *)withdrawAccount
                                                 exchangeRate:(nonnull ZKExchangeRate *)exchangeRate
                                             exchangeSettings:(nonnull ZKExchangeSettings *)exchangeSettings
                                              exchangeAddress:(nonnull NSString *)exchangeAddress
                                                        value:(nonnull NSString *)value
                                                  returnValue:(nonnull NSString *)returnValue
                                                   depositFee:(nonnull NSString *)depositFee
                                                  exchangeFee:(nonnull NSString *)exchangeFee
                                                  withdrawFee:(nonnull NSString *)withdrawFee;

@property (nonatomic, readonly, nonnull) NSString * signedTransaction;

@property (nonatomic, readonly, nonnull) ZKAccount * depositAccount;

@property (nonatomic, readonly, nonnull) ZKAccount * withdrawAccount;

@property (nonatomic, readonly, nonnull) ZKExchangeRate * exchangeRate;

@property (nonatomic, readonly, nonnull) ZKExchangeSettings * exchangeSettings;

@property (nonatomic, readonly, nonnull) NSString * exchangeAddress;

@property (nonatomic, readonly, nonnull) NSString * value;

@property (nonatomic, readonly, nonnull) NSString * returnValue;

@property (nonatomic, readonly, nonnull) NSString * depositFee;

@property (nonatomic, readonly, nonnull) NSString * exchangeFee;

@property (nonatomic, readonly, nonnull) NSString * withdrawFee;

@end
