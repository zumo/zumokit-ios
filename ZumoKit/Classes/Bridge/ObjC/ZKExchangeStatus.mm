// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKExchangeStatus.h"


NSString * __nonnull const ZKExchangeStatusPAUSED = @"PAUSED";

NSString * __nonnull const ZKExchangeStatusREJECTED = @"REJECTED";

NSString * __nonnull const ZKExchangeStatusPENDING = @"PENDING";

NSString * __nonnull const ZKExchangeStatusDEPOSITED = @"DEPOSITED";

NSString * __nonnull const ZKExchangeStatusCONFIRMED = @"CONFIRMED";

NSString * __nonnull const ZKExchangeStatusFAILED = @"FAILED";

NSString * __nonnull const ZKExchangeStatusRESUBMITTED = @"RESUBMITTED";

NSString * __nonnull const ZKExchangeStatusCANCELLED = @"CANCELLED";

@implementation ZKExchangeStatus

- (nonnull instancetype)init
{
    if (self = [super init]) {
    }
    return self;
}

+ (nonnull instancetype)exchangeStatus
{
    return [(ZKExchangeStatus*)[self alloc] init];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p>", self.class, (void *)self];
}

@end
