// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from utils.djinni

#import <Foundation/Foundation.h>


/**
 * Utility class providing blockchain related utility methods. Accessed from `ZKZumoKit` class.
 * <p>
 * This class provides mnemonic phrase generation utility and
 *  Bitcoin & Ethereum address validation utilities.
 */
@interface ZKUtils : NSObject

/**
 * Generates mnemonic seed phrase used in wallet creation process.
 * @param wordCount   12, 15, 18, 21 or 24
 */
- (nonnull NSString *)generateMnemonic:(int32_t)wordCount;

/**
 * Validates Ethereum, Bitcoin or Bitcoin SV address.
 * @param currencyCode 'ETH', 'BTC' or 'BSV'
 * @param address       blockchain address
 * @param network       network type
 * @return true if address is valid on the given network
 * @see `ZKNetworkType`
 */
- (BOOL)isValidAddress:(nonnull NSString *)currencyCode
               address:(nonnull NSString *)address
               network:(nonnull NSString *)network;

@end
