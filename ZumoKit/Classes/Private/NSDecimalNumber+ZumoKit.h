#import <Foundation/Foundation.h>
#include "decimal.hpp"

namespace zumo
{
namespace djinni
{
namespace objc
{

struct DecimalConverter
{
  using CppType = ::zumo::Decimal;
  using ObjcType = NSDecimalNumber *;

  using Boxed = DecimalConverter;

  static CppType toCpp(ObjcType cpp);
  static ObjcType fromCpp(const CppType &cpp);
};

} // namespace objc
} // namespace djinni
} // namespace zumo
