// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enums.djinni

#import "ZKCardType.h"
#include "card_type.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class ZKCardType;

namespace djinni_generated {

struct CardType
{
    using CppType = ::zumo::CardType;
    using ObjcType = ZKCardType*;

    using Boxed = CardType;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
