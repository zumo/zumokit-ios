// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKFeeRates.h"
#include "fee_rates.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class ZKFeeRates;

namespace djinni_generated {

struct FeeRates
{
    using CppType = ::zumo::FeeRates;
    using ObjcType = ZKFeeRates*;

    using Boxed = FeeRates;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
