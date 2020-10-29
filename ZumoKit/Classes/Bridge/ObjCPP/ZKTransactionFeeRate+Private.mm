// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKTransactionFeeRate+Private.h"
#import "DJIMarshal+Private.h"
#import "NSDecimalNumber+ZumoKit.h"
#include <cassert>

namespace djinni_generated {

auto TransactionFeeRate::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::zumo::djinni::objc::DecimalConverter::toCpp(obj.slow),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.average),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.fast),
            ::djinni::F32::toCpp(obj.slowTime),
            ::djinni::F32::toCpp(obj.averageTime),
            ::djinni::F32::toCpp(obj.fastTime),
            ::djinni::String::toCpp(obj.source)};
}

auto TransactionFeeRate::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKTransactionFeeRate alloc] initWithSlow:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.slow))
                                              average:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.average))
                                                 fast:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.fast))
                                             slowTime:(::djinni::F32::fromCpp(cpp.slow_time))
                                          averageTime:(::djinni::F32::fromCpp(cpp.average_time))
                                             fastTime:(::djinni::F32::fromCpp(cpp.fast_time))
                                               source:(::djinni::String::fromCpp(cpp.source))];
}

}  // namespace djinni_generated
