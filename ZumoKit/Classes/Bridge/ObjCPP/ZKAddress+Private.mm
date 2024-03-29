// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKAddress+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto Address::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.houseNumber),
            ::djinni::String::toCpp(obj.addressLine1),
            ::djinni::Optional<std::optional, ::djinni::String>::toCpp(obj.addressLine2),
            ::djinni::String::toCpp(obj.country),
            ::djinni::String::toCpp(obj.postCode),
            ::djinni::String::toCpp(obj.postTown)};
}

auto Address::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKAddress alloc] initWithHouseNumber:(::djinni::String::fromCpp(cpp.house_number))
                                     addressLine1:(::djinni::String::fromCpp(cpp.address_line_1))
                                     addressLine2:(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(cpp.address_line_2))
                                          country:(::djinni::String::fromCpp(cpp.country))
                                         postCode:(::djinni::String::fromCpp(cpp.post_code))
                                         postTown:(::djinni::String::fromCpp(cpp.post_town))];
}

}  // namespace djinni_generated
