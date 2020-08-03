#import "NSDecimalNumber+ZumoKit.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace zumo
{
namespace djinni
{
namespace objc
{

auto DecimalConverter::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return Decimal(::djinni::String::toCpp(obj.description));
}

auto DecimalConverter::fromCpp(const CppType& cpp) -> ObjcType
{
    const ::zumo::Decimal& d = cpp;
    return [NSDecimalNumber decimalNumberWithString:(::djinni::String::fromCpp(d.to_string()))];
}

}  // namespace objc
}  // namespace djinni
}  // namespace zumo
