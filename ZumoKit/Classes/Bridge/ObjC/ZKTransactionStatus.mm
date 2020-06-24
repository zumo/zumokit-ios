// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKTransactionStatus.h"


NSString * __nonnull const ZKTransactionStatusPENDING = @"PENDING";

NSString * __nonnull const ZKTransactionStatusCONFIRMED = @"CONFIRMED";

NSString * __nonnull const ZKTransactionStatusFAILED = @"FAILED";

NSString * __nonnull const ZKTransactionStatusRESUBMITTED = @"RESUBMITTED";

NSString * __nonnull const ZKTransactionStatusCANCELLED = @"CANCELLED";

NSString * __nonnull const ZKTransactionStatusPAUSED = @"PAUSED";

NSString * __nonnull const ZKTransactionStatusREJECTED = @"REJECTED";

@implementation ZKTransactionStatus

- (nonnull instancetype)init
{
    if (self = [super init]) {
    }
    return self;
}

+ (nonnull instancetype)transactionStatus
{
    return [(ZKTransactionStatus*)[self alloc] init];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p>", self.class, (void *)self];
}

@end
