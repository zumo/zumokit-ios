// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKNetworkType.h"


NSString * __nonnull const ZKNetworkTypeMAINNET = @"MAINNET";

NSString * __nonnull const ZKNetworkTypeTESTNET = @"TESTNET";

NSString * __nonnull const ZKNetworkTypeROPSTEN = @"ROPSTEN";

NSString * __nonnull const ZKNetworkTypeRINKEBY = @"RINKEBY";

NSString * __nonnull const ZKNetworkTypeGOERLI = @"GOERLI";

NSString * __nonnull const ZKNetworkTypeKOVAN = @"KOVAN";

@implementation ZKNetworkType

- (nonnull instancetype)init
{
    if (self = [super init]) {
    }
    return self;
}

+ (nonnull instancetype)networkType
{
    return [(ZKNetworkType*)[self alloc] init];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p>", self.class, (void *)self];
}

@end
