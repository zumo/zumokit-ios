// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#include "zumo_core.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class ZKZumoCore;

namespace djinni_generated {

class ZumoCore
{
public:
    using CppType = std::shared_ptr<::zumo::ZumoCore>;
    using CppOptType = std::shared_ptr<::zumo::ZumoCore>;
    using ObjcType = ZKZumoCore*;

    using Boxed = ZumoCore;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

