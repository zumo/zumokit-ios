// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKCustodyOrder+Private.h"
#import "DJIMarshal+Private.h"
#import "NSDecimalNumber+ZumoKit.h"
#include <cassert>

namespace djinni_generated {

auto CustodyOrder::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.id),
            ::djinni::String::toCpp(obj.type),
            ::djinni::String::toCpp(obj.status),
            ::djinni::Optional<std::optional, ::zumo::djinni::objc::DecimalConverter>::toCpp(obj.amount),
            ::djinni::Bool::toCpp(obj.feeInAmount),
            ::djinni::Optional<std::optional, ::zumo::djinni::objc::DecimalConverter>::toCpp(obj.estimatedFees),
            ::djinni::Optional<std::optional, ::zumo::djinni::objc::DecimalConverter>::toCpp(obj.fees),
            ::djinni::Optional<std::optional, ::djinni::List<::djinni::String>>::toCpp(obj.fromAddresses),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.fromAccountId),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.fromUserId),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.fromUserIntegratorId),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.toAddress),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.toAccountId),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.toUserId),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.toUserIntegratorId),
            ::djinni::I32::toCpp(obj.createdAt),
            ::djinni::I32::toCpp(obj.updatedAt)};
}

auto CustodyOrder::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKCustodyOrder alloc] initWithId:(::djinni::String::fromCpp(cpp.id))
                                         type:(::djinni::String::fromCpp(cpp.type))
                                       status:(::djinni::String::fromCpp(cpp.status))
                                       amount:(::djinni::Optional<std::optional, ::zumo::djinni::objc::DecimalConverter>::fromCpp(cpp.amount))
                                  feeInAmount:(::djinni::Bool::fromCpp(cpp.fee_in_amount))
                                estimatedFees:(::djinni::Optional<std::optional, ::zumo::djinni::objc::DecimalConverter>::fromCpp(cpp.estimated_fees))
                                         fees:(::djinni::Optional<std::optional, ::zumo::djinni::objc::DecimalConverter>::fromCpp(cpp.fees))
                                fromAddresses:(::djinni::Optional<std::optional, ::djinni::List<::djinni::String>>::fromCpp(cpp.from_addresses))
                                fromAccountId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.from_account_id))
                                   fromUserId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.from_user_id))
                         fromUserIntegratorId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.from_user_integrator_id))
                                    toAddress:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.to_address))
                                  toAccountId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.to_account_id))
                                     toUserId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.to_user_id))
                           toUserIntegratorId:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.to_user_integrator_id))
                                    createdAt:(::djinni::I32::fromCpp(cpp.created_at))
                                    updatedAt:(::djinni::I32::fromCpp(cpp.updated_at))];
}

}  // namespace djinni_generated
