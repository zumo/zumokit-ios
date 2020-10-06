// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enums.djinni

#import "ZKAccountType.h"
#include "account_type.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class ZKAccountType;

namespace djinni_generated {

struct AccountType
{
    using CppType = ::zumo::AccountType;
    using ObjcType = ZKAccountType*;

    using Boxed = AccountType;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
