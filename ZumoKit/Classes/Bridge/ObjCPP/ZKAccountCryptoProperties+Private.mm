// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKAccountCryptoProperties+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto AccountCryptoProperties::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.address),
            ::djinni::String::toCpp(obj.path),
            ::djinni::Optional<std::experimental::optional, ::djinni::I64>::toCpp(obj.nonce),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.utxoPool),
            ::djinni::I8::toCpp(obj.version)};
}

auto AccountCryptoProperties::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKAccountCryptoProperties alloc] initWithAddress:(::djinni::String::fromCpp(cpp.address))
                                                         path:(::djinni::String::fromCpp(cpp.path))
                                                        nonce:(::djinni::Optional<std::experimental::optional, ::djinni::I64>::fromCpp(cpp.nonce))
                                                     utxoPool:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.utxo_pool))
                                                      version:(::djinni::I8::fromCpp(cpp.version))];
}

}  // namespace djinni_generated
