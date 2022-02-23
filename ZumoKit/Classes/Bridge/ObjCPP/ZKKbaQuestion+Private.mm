// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKKbaQuestion+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto KbaQuestion::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.type),
            ::djinni::String::toCpp(obj.question)};
}

auto KbaQuestion::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKKbaQuestion alloc] initWithType:(::djinni::String::fromCpp(cpp.type))
                                      question:(::djinni::String::fromCpp(cpp.question))];
}

}  // namespace djinni_generated
