// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

#import "ZKZumoKitErrorCode.h"


NSString * __nonnull const ZKZumoKitErrorCodeNOTAUTHORIZED = @"not_authorized";

NSString * __nonnull const ZKZumoKitErrorCodeWALLETLIMITEXCEEDED = @"wallet_limit_exceeded";

NSString * __nonnull const ZKZumoKitErrorCodeNOWALLETTORECOVERFOUND = @"no_wallet_to_recover_found";

NSString * __nonnull const ZKZumoKitErrorCodeINVALIDRECOVERYMNEMONIC = @"invalid_recovery_mnemonic";

NSString * __nonnull const ZKZumoKitErrorCodeINVALIDMNEMONICWORDCOUNT = @"invalid_mnemonic_word_count";

NSString * __nonnull const ZKZumoKitErrorCodeINVALIDPASSWORD = @"invalid_password";

NSString * __nonnull const ZKZumoKitErrorCodeINVALIDNETWORKTYPE = @"invalid_network_type";

NSString * __nonnull const ZKZumoKitErrorCodeBITCOINOVERFLOW = @"bitcoin_overflow";

NSString * __nonnull const ZKZumoKitErrorCodeSIGNINGERROR = @"signing_error";

NSString * __nonnull const ZKZumoKitErrorCodeUTXOSIGNINGERROR = @"utxo_signing_error";

NSString * __nonnull const ZKZumoKitErrorCodeINVALIDHDWALLETPATH = @"invalid_hd_wallet_path";

NSString * __nonnull const ZKZumoKitErrorCodeCHANGEACCOUNTDOESNOTEXIST = @"change_account_does_not_exist";

NSString * __nonnull const ZKZumoKitErrorCodeACCOUNTDOESNOTEXIST = @"account_does_not_exist";

NSString * __nonnull const ZKZumoKitErrorCodeKNOWNTRANSACTION = @"known_transaction";

NSString * __nonnull const ZKZumoKitErrorCodeINVALIDTRANSACTIONVALUE = @"invalid_transaction_value";

NSString * __nonnull const ZKZumoKitErrorCodeINVALIDFEERATE = @"invalid_fee_rate";

NSString * __nonnull const ZKZumoKitErrorCodeINVALIDADDRESS = @"invalid_address";

NSString * __nonnull const ZKZumoKitErrorCodeINSUFFICIENTFUNDS = @"insufficient_funds";

@implementation ZKZumoKitErrorCode

- (nonnull instancetype)init
{
    if (self = [super init]) {
    }
    return self;
}

+ (nonnull instancetype)zumoKitErrorCode
{
    return [(ZKZumoKitErrorCode*)[self alloc] init];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p>", self.class, (void *)self];
}

@end
