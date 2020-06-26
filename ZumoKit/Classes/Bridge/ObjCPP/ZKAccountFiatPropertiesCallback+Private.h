// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#include "account_fiat_properties_callback.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol ZKAccountFiatPropertiesCallback;

namespace djinni_generated {

class AccountFiatPropertiesCallback
{
public:
    using CppType = std::shared_ptr<::zumo::AccountFiatPropertiesCallback>;
    using CppOptType = std::shared_ptr<::zumo::AccountFiatPropertiesCallback>;
    using ObjcType = id<ZKAccountFiatPropertiesCallback>;

    using Boxed = AccountFiatPropertiesCallback;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

