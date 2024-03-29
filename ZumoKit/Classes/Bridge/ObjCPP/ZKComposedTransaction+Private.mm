// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKComposedTransaction+Private.h"
#import "DJIMarshal+Private.h"
#import "NSDecimalNumber+ZumoKit.h"
#import "ZKAccount+Private.h"
#include <cassert>

namespace djinni_generated {

auto ComposedTransaction::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.type),
            ::djinni_generated::Account::toCpp(obj.account),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.destination),
            ::djinni::Optional<std::optional, ::zumo::djinni::objc::DecimalConverter>::toCpp(obj.amount),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.fee),
            ::djinni::String::toCpp(obj.nonce),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.signedTransaction),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.custodyOrderId),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.data)};
}

auto ComposedTransaction::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKComposedTransaction alloc] initWithType:(::djinni::String::fromCpp(cpp.type))
                                               account:(::djinni_generated::Account::fromCpp(cpp.account))
                                           destination:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.destination))
                                                amount:(::djinni::Optional<std::optional, ::zumo::djinni::objc::DecimalConverter>::fromCpp(cpp.amount))
                                                   fee:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.fee))
                                                 nonce:(::djinni::String::fromCpp(cpp.nonce))
                                     signedTransaction:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.signed_transaction))
                                        custodyOrderId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.custody_order_id))
                                                  data:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.data))];
}

}  // namespace djinni_generated
