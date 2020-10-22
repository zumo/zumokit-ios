// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKExchangeSettings+Private.h"
#import "DJIMarshal+Private.h"
#import "NSDecimalNumber+ZumoKit.h"
#include <cassert>

namespace djinni_generated {

auto ExchangeSettings::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.id),
            ::djinni::Map<::djinni::String, ::djinni::String>::toCpp(obj.exchangeAddress),
            ::djinni::String::toCpp(obj.fromCurrency),
            ::djinni::String::toCpp(obj.toCurrency),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.minExchangeAmount),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.exchangeFeeRate),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.outgoingTransactionFeeRate),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.returnTransactionFee),
            ::djinni::I64::toCpp(obj.timestamp)};
}

auto ExchangeSettings::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKExchangeSettings alloc] initWithId:(::djinni::String::fromCpp(cpp.id))
                                  exchangeAddress:(::djinni::Map<::djinni::String, ::djinni::String>::fromCpp(cpp.exchange_address))
                                     fromCurrency:(::djinni::String::fromCpp(cpp.from_currency))
                                       toCurrency:(::djinni::String::fromCpp(cpp.to_currency))
                                minExchangeAmount:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.min_exchange_amount))
                                  exchangeFeeRate:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.exchange_fee_rate))
                       outgoingTransactionFeeRate:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.outgoing_transaction_fee_rate))
                             returnTransactionFee:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.return_transaction_fee))
                                        timestamp:(::djinni::I64::fromCpp(cpp.timestamp))];
}

}  // namespace djinni_generated
