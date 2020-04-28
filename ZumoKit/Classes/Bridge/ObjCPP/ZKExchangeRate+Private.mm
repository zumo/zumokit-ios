// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKExchangeRate+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto ExchangeRate::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.id),
            ::djinni::String::toCpp(obj.depositCurrency),
            ::djinni::String::toCpp(obj.withdrawCurrency),
            ::djinni::I64::toCpp(obj.validTo),
            ::djinni::String::toCpp(obj.rate),
            ::djinni::String::toCpp(obj.feeRate),
            ::djinni::String::toCpp(obj.depositFeeRate),
            ::djinni::String::toCpp(obj.withdrawFee),
            ::djinni::I64::toCpp(obj.timestamp)};
}

auto ExchangeRate::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKExchangeRate alloc] initWithId:(::djinni::String::fromCpp(cpp.id))
                              depositCurrency:(::djinni::String::fromCpp(cpp.deposit_currency))
                             withdrawCurrency:(::djinni::String::fromCpp(cpp.withdraw_currency))
                                      validTo:(::djinni::I64::fromCpp(cpp.valid_to))
                                         rate:(::djinni::String::fromCpp(cpp.rate))
                                      feeRate:(::djinni::String::fromCpp(cpp.fee_rate))
                               depositFeeRate:(::djinni::String::fromCpp(cpp.deposit_fee_rate))
                                  withdrawFee:(::djinni::String::fromCpp(cpp.withdraw_fee))
                                    timestamp:(::djinni::I64::fromCpp(cpp.timestamp))];
}

}  // namespace djinni_generated