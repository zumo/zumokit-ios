// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKFeeRates+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto FeeRates::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.slow),
            ::djinni::String::toCpp(obj.average),
            ::djinni::String::toCpp(obj.fast),
            ::djinni::F32::toCpp(obj.slowTime),
            ::djinni::F32::toCpp(obj.averageTime),
            ::djinni::F32::toCpp(obj.fastTime),
            ::djinni::String::toCpp(obj.source)};
}

auto FeeRates::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKFeeRates alloc] initWithSlow:(::djinni::String::fromCpp(cpp.slow))
                                    average:(::djinni::String::fromCpp(cpp.average))
                                       fast:(::djinni::String::fromCpp(cpp.fast))
                                   slowTime:(::djinni::F32::fromCpp(cpp.slow_time))
                                averageTime:(::djinni::F32::fromCpp(cpp.average_time))
                                   fastTime:(::djinni::F32::fromCpp(cpp.fast_time))
                                     source:(::djinni::String::fromCpp(cpp.source))];
}

}  // namespace djinni_generated