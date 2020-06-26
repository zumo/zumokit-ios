// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKAccount+Private.h"
#import "DJIMarshal+Private.h"
#import "ZKAccountCryptoProperties+Private.h"
#import "ZKAccountFiatProperties+Private.h"
#include <cassert>

namespace djinni_generated {

auto Account::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.id),
            ::djinni::String::toCpp(obj.currencyType),
            ::djinni::String::toCpp(obj.currencyCode),
            ::djinni::String::toCpp(obj.network),
            ::djinni::String::toCpp(obj.type),
            ::djinni::String::toCpp(obj.balance),
            ::djinni::Optional<std::experimental::optional, ::djinni_generated::AccountCryptoProperties>::toCpp(obj.cryptoProperties),
            ::djinni::Optional<std::experimental::optional, ::djinni_generated::AccountFiatProperties>::toCpp(obj.fiatProperties)};
}

auto Account::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKAccount alloc] initWithId:(::djinni::String::fromCpp(cpp.id))
                            currencyType:(::djinni::String::fromCpp(cpp.currency_type))
                            currencyCode:(::djinni::String::fromCpp(cpp.currency_code))
                                 network:(::djinni::String::fromCpp(cpp.network))
                                    type:(::djinni::String::fromCpp(cpp.type))
                                 balance:(::djinni::String::fromCpp(cpp.balance))
                        cryptoProperties:(::djinni::Optional<std::experimental::optional, ::djinni_generated::AccountCryptoProperties>::fromCpp(cpp.crypto_properties))
                          fiatProperties:(::djinni::Optional<std::experimental::optional, ::djinni_generated::AccountFiatProperties>::fromCpp(cpp.fiat_properties))];
}

}  // namespace djinni_generated
