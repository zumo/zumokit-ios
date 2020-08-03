#import <Foundation/Foundation.h>

namespace zumo
{

  class ZumoKitException;

  namespace djinni
  {
    namespace objc
    {

      struct ZumoKitExceptionConverter
      {
        using CppType = ::zumo::ZumoKitException;
        using ObjcType = NSError *;

        using Boxed = NSError;

        static ObjcType fromCpp(const CppType &cpp);
      };

    } // namespace objc
  }   // namespace djinni
} // namespace zumo
