#import "NSDecimalNumber+ZumoKit.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace zumo
{
namespace djinni
{
namespace objc
{

NSDictionary * decimalLocale = [NSDictionary dictionaryWithObject:@"." forKey:NSLocaleDecimalSeparator];

auto DecimalConverter::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return Decimal(::djinni::String::toCpp([obj descriptionWithLocale:decimalLocale]));
}

auto DecimalConverter::fromCpp(const CppType& cpp) -> ObjcType
{
    const ::zumo::Decimal& d = cpp;
    return [NSDecimalNumber decimalNumberWithString:(::djinni::String::fromCpp(d.to_string())) locale:decimalLocale];
}

}  // namespace objc
}  // namespace djinni
}  // namespace zumo
