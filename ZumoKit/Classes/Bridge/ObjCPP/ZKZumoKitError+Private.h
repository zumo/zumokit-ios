// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

#import "ZKZumoKitError.h"
#include "zumo_kit_error.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class ZKZumoKitError;

namespace djinni_generated {

struct ZumoKitError
{
    using CppType = ::zumo::ZumoKitError;
    using ObjcType = ZKZumoKitError*;

    using Boxed = ZumoKitError;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
