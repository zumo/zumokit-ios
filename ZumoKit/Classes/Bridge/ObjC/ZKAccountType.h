// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import <Foundation/Foundation.h>

/** Account type. Only relevant for Bitcoin accounts. All other accounts are STANDARD account type. */
@interface ZKAccountType : NSObject
- (nonnull instancetype)init;
+ (nonnull instancetype)accountType;

@end

extern NSString * __nonnull const ZKAccountTypeSTANDARD;
extern NSString * __nonnull const ZKAccountTypeCOMPATIBILITY;
extern NSString * __nonnull const ZKAccountTypeSEGWIT;
