// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKCurrencyCode.h"
#include "currency_code.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class ZKCurrencyCode;

namespace djinni_generated {

struct CurrencyCode
{
    using CppType = ::zumo::CurrencyCode;
    using ObjcType = ZKCurrencyCode*;

    using Boxed = CurrencyCode;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
