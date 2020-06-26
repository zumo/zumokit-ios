// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKTransaction+Private.h"
#import "DJIMarshal+Private.h"
#import "ZKTransactionCryptoProperties+Private.h"
#import "ZKTransactionFiatProperties+Private.h"
#include <cassert>

namespace djinni_generated {

auto Transaction::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.id),
            ::djinni::String::toCpp(obj.type),
            ::djinni::String::toCpp(obj.currencyCode),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.fromUserId),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.toUserId),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.fromAccountId),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.toAccountId),
            ::djinni::String::toCpp(obj.network),
            ::djinni::String::toCpp(obj.status),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.amount),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.fee),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.nonce),
            ::djinni::Optional<std::experimental::optional, ::djinni_generated::TransactionCryptoProperties>::toCpp(obj.cryptoProperties),
            ::djinni::Optional<std::experimental::optional, ::djinni_generated::TransactionFiatProperties>::toCpp(obj.fiatProperties),
            ::djinni::Optional<std::experimental::optional, ::djinni::I64>::toCpp(obj.submittedAt),
            ::djinni::Optional<std::experimental::optional, ::djinni::I64>::toCpp(obj.confirmedAt),
            ::djinni::I64::toCpp(obj.timestamp)};
}

auto Transaction::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKTransaction alloc] initWithId:(::djinni::String::fromCpp(cpp.id))
                                        type:(::djinni::String::fromCpp(cpp.type))
                                currencyCode:(::djinni::String::fromCpp(cpp.currency_code))
                                  fromUserId:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.from_user_id))
                                    toUserId:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.to_user_id))
                               fromAccountId:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.from_account_id))
                                 toAccountId:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.to_account_id))
                                     network:(::djinni::String::fromCpp(cpp.network))
                                      status:(::djinni::String::fromCpp(cpp.status))
                                      amount:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.amount))
                                         fee:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.fee))
                                       nonce:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.nonce))
                            cryptoProperties:(::djinni::Optional<std::experimental::optional, ::djinni_generated::TransactionCryptoProperties>::fromCpp(cpp.crypto_properties))
                              fiatProperties:(::djinni::Optional<std::experimental::optional, ::djinni_generated::TransactionFiatProperties>::fromCpp(cpp.fiat_properties))
                                 submittedAt:(::djinni::Optional<std::experimental::optional, ::djinni::I64>::fromCpp(cpp.submitted_at))
                                 confirmedAt:(::djinni::Optional<std::experimental::optional, ::djinni::I64>::fromCpp(cpp.confirmed_at))
                                   timestamp:(::djinni::I64::fromCpp(cpp.timestamp))];
}

}  // namespace djinni_generated
