// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enums.djinni

#import "ZKExchangeStatus.h"
#include "exchange_status.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class ZKExchangeStatus;

namespace djinni_generated {

struct ExchangeStatus
{
    using CppType = ::zumo::ExchangeStatus;
    using ObjcType = ZKExchangeStatus*;

    using Boxed = ExchangeStatus;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated