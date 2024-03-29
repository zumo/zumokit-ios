// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import <Foundation/Foundation.h>

/**
 * Record containing account's crypto related properties.
 * @see `ZKAccount`
 */
@interface ZKAccountCryptoProperties : NSObject
- (nonnull instancetype)initWithAddress:(nonnull NSString *)address
                   directDepositAddress:(nullable NSString *)directDepositAddress
                                   path:(nullable NSString *)path
                                  nonce:(nullable NSNumber *)nonce;
+ (nonnull instancetype)accountCryptoPropertiesWithAddress:(nonnull NSString *)address
                                      directDepositAddress:(nullable NSString *)directDepositAddress
                                                      path:(nullable NSString *)path
                                                     nonce:(nullable NSNumber *)nonce;

/** Account crypto address. */
@property (nonatomic, readonly, nonnull) NSString * address;

/**
 * Account direct deposit crypto address, only applicable to custody accounts. 
 * Should only be used to deposit funds from Zumo non-custody accounts.
 */
@property (nonatomic, readonly, nullable) NSString * directDepositAddress;

/** Hierarchical Deterministic (HD) account derivation path. */
@property (nonatomic, readonly, nullable) NSString * path;

/** Ethereum account nonce if greater than 0 or null otherwise. */
@property (nonatomic, readonly, nullable) NSNumber * nonce;

@end
