// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#include "change_listener.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol ZKChangeListener;

namespace djinni_generated {

class ChangeListener
{
public:
    using CppType = std::shared_ptr<::zumo::ChangeListener>;
    using CppOptType = std::shared_ptr<::zumo::ChangeListener>;
    using ObjcType = id<ZKChangeListener>;

    using Boxed = ChangeListener;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

