// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKAccountCryptoProperties+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto AccountCryptoProperties::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.address),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.directDepositAddress),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.path),
            ::djinni::Optional<std::optional, ::djinni::I32>::toCpp(obj.nonce)};
}

auto AccountCryptoProperties::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKAccountCryptoProperties alloc] initWithAddress:(::djinni::String::fromCpp(cpp.address))
                                         directDepositAddress:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.direct_deposit_address))
                                                         path:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.path))
                                                        nonce:(::djinni::Optional<std::optional, ::djinni::I32>::fromCpp(cpp.nonce))];
}

}  // namespace djinni_generated
