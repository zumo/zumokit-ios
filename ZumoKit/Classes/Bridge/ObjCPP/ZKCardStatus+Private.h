// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enums.djinni

#import "ZKCardStatus.h"
#include "card_status.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class ZKCardStatus;

namespace djinni_generated {

struct CardStatus
{
    using CppType = ::zumo::CardStatus;
    using ObjcType = ZKCardStatus*;

    using Boxed = CardStatus;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated