// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKTransactionDirection.h"
#include "transaction_direction.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class ZKTransactionDirection;

namespace djinni_generated {

struct TransactionDirection
{
    using CppType = ::zumo::TransactionDirection;
    using ObjcType = ZKTransactionDirection*;

    using Boxed = TransactionDirection;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
