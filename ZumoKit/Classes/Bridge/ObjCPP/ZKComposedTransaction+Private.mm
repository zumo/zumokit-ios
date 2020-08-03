// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

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
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.signedTransaction),
            ::djinni_generated::Account::toCpp(obj.account),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.destination),
            ::djinni::Optional<std::experimental::optional, ::zumo::djinni::objc::DecimalConverter>::toCpp(obj.amount),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.data),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.fee),
            ::djinni::String::toCpp(obj.nonce)};
}

auto ComposedTransaction::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKComposedTransaction alloc] initWithType:(::djinni::String::fromCpp(cpp.type))
                                     signedTransaction:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.signed_transaction))
                                               account:(::djinni_generated::Account::fromCpp(cpp.account))
                                           destination:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.destination))
                                                amount:(::djinni::Optional<std::experimental::optional, ::zumo::djinni::objc::DecimalConverter>::fromCpp(cpp.amount))
                                                  data:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.data))
                                                   fee:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.fee))
                                                 nonce:(::djinni::String::fromCpp(cpp.nonce))];
}

}  // namespace djinni_generated
