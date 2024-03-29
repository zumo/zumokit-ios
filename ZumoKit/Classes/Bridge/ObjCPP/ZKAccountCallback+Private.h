// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#include "account_callback.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol ZKAccountCallback;

namespace djinni_generated {

class AccountCallback
{
public:
    using CppType = std::shared_ptr<::zumo::AccountCallback>;
    using CppOptType = std::shared_ptr<::zumo::AccountCallback>;
    using ObjcType = id<ZKAccountCallback>;

    using Boxed = AccountCallback;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

