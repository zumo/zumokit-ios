#import "NSError+ZumoKit.h"
#import "ZKError.h"
#import "exceptions.hpp"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace zumo
{
namespace djinni
{
namespace objc
{

// Exceptions will only be translated from C++ to Objc, so no need for Objc -> C++ converter
// auto ZumoKitExceptionConverter::toCpp(ObjcType obj) -> CppType
// {
//     assert(obj);
//     return {::djinni::String::toCpp(@"Custom Exception"),
//             ::djinni::String::toCpp(@"Custom Reason")};
// }

auto ZumoKitExceptionConverter::fromCpp(const CppType& cpp) -> ObjcType
{
    const ::zumo::ZumoKitException& e = cpp;
    NSString *zumoKitErrorType = [NSString stringWithCString:e.get_type() encoding:NSUTF8StringEncoding];
    NSString *zumoKitErrorCode = [NSString stringWithCString:e.get_code() encoding:NSUTF8StringEncoding];
    NSString *message = [NSString stringWithCString:e.what() encoding:NSUTF8StringEncoding];

    return [NSError errorFromZumoKitException:zumoKitErrorType
                                         code:zumoKitErrorCode
                                      message:message];
}

}  // namespace objc
}  // namespace djinni
}  // namespace zumo
