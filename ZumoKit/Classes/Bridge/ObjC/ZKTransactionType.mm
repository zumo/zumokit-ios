// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enums.djinni

#import "ZKTransactionType.h"


NSString * __nonnull const ZKTransactionTypeCRYPTO = @"CRYPTO";

NSString * __nonnull const ZKTransactionTypeEXCHANGE = @"EXCHANGE";

NSString * __nonnull const ZKTransactionTypeFIAT = @"FIAT";

NSString * __nonnull const ZKTransactionTypeNOMINATED = @"NOMINATED";

NSString * __nonnull const ZKTransactionTypeCARD = @"CARD";

@implementation ZKTransactionType

- (nonnull instancetype)init
{
    if (self = [super init]) {
    }
    return self;
}

+ (nonnull instancetype)transactionType
{
    return [(ZKTransactionType*)[self alloc] init];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p>", self.class, (void *)self];
}

@end
