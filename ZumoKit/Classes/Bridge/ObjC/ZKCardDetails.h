// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import <Foundation/Foundation.h>

/** Record containing sensitive card details. */
@interface ZKCardDetails : NSObject
- (nonnull instancetype)initWithPan:(nonnull NSString *)pan
                               cvv2:(nonnull NSString *)cvv2
                             expiry:(nonnull NSString *)expiry;
+ (nonnull instancetype)cardDetailsWithPan:(nonnull NSString *)pan
                                      cvv2:(nonnull NSString *)cvv2
                                    expiry:(nonnull NSString *)expiry;

/** Card PAN, e.g 4564 6545 7997 5454. */
@property (nonatomic, readonly, nonnull) NSString * pan;

/** Card CVV2, e.g. 078. */
@property (nonatomic, readonly, nonnull) NSString * cvv2;

/** Card year and month of expiry, e.g. 2024-08. */
@property (nonatomic, readonly, nonnull) NSString * expiry;

@end
