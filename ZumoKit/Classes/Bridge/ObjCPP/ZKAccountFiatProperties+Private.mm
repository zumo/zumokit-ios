// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKAccountFiatProperties+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto AccountFiatProperties::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.accountNumber),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.sortCode),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.bic),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.iban),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.customerName)};
}

auto AccountFiatProperties::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKAccountFiatProperties alloc] initWithAccountNumber:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.account_number))
                                                         sortCode:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.sort_code))
                                                              bic:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.bic))
                                                             iban:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.iban))
                                                     customerName:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.customer_name))];
}

}  // namespace djinni_generated
