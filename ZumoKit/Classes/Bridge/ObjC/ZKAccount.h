// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKAccountType.h"
#import "ZKNetworkType.h"
#import <Foundation/Foundation.h>

@interface ZKAccount : NSObject
- (nonnull instancetype)initWithId:(nonnull NSString *)id
                              path:(nonnull NSString *)path
                            symbol:(nonnull NSString *)symbol
                              coin:(nonnull NSString *)coin
                           address:(nonnull NSString *)address
                           balance:(nonnull NSString *)balance
                             nonce:(nullable NSNumber *)nonce
                           network:(ZKNetworkType)network
                              type:(ZKAccountType)type
                           version:(int8_t)version;
+ (nonnull instancetype)accountWithId:(nonnull NSString *)id
                                 path:(nonnull NSString *)path
                               symbol:(nonnull NSString *)symbol
                                 coin:(nonnull NSString *)coin
                              address:(nonnull NSString *)address
                              balance:(nonnull NSString *)balance
                                nonce:(nullable NSNumber *)nonce
                              network:(ZKNetworkType)network
                                 type:(ZKAccountType)type
                              version:(int8_t)version;

@property (nonatomic, readonly, nonnull) NSString * id;

@property (nonatomic, readonly, nonnull) NSString * path;

@property (nonatomic, readonly, nonnull) NSString * symbol;

@property (nonatomic, readonly, nonnull) NSString * coin;

@property (nonatomic, readonly, nonnull) NSString * address;

@property (nonatomic, readonly, nonnull) NSString * balance;

@property (nonatomic, readonly, nullable) NSNumber * nonce;

@property (nonatomic, readonly) ZKNetworkType network;

@property (nonatomic, readonly) ZKAccountType type;

@property (nonatomic, readonly) int8_t version;

@end
