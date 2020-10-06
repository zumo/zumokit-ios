// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enums.djinni

#import "ZKNetworkType.h"
#include "network_type.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class ZKNetworkType;

namespace djinni_generated {

struct NetworkType
{
    using CppType = ::zumo::NetworkType;
    using ObjcType = ZKNetworkType*;

    using Boxed = NetworkType;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
