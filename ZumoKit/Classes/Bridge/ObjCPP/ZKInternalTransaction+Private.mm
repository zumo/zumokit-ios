// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKInternalTransaction+Private.h"
#import "DJIMarshal+Private.h"
#import "NSDecimalNumber+ZumoKit.h"
#include <cassert>

namespace djinni_generated {

auto InternalTransaction::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.fromUserId),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.fromUserIntegratorId),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.fromAccountId),
            ::djinni::String::toCpp(obj.fromAddress),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.toUserId),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.toUserIntegratorId),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.toAccountId),
            ::djinni::String::toCpp(obj.toAddress),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.amount),
            ::djinni::Optional<std::optional, ::djinni::Map<::djinni::String, ::djinni::F64>>::toCpp(obj.fiatAmount)};
}

auto InternalTransaction::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKInternalTransaction alloc] initWithFromUserId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.from_user_id))
                                        fromUserIntegratorId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.from_user_integrator_id))
                                               fromAccountId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.from_account_id))
                                                 fromAddress:(::djinni::String::fromCpp(cpp.from_address))
                                                    toUserId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.to_user_id))
                                          toUserIntegratorId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.to_user_integrator_id))
                                                 toAccountId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.to_account_id))
                                                   toAddress:(::djinni::String::fromCpp(cpp.to_address))
                                                      amount:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.amount))
                                                  fiatAmount:(::djinni::Optional<std::optional, ::djinni::Map<::djinni::String, ::djinni::F64>>::fromCpp(cpp.fiat_amount))];
}

}  // namespace djinni_generated
