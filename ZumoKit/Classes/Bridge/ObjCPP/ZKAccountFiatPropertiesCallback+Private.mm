// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#import "ZKAccountFiatPropertiesCallback+Private.h"
#import "ZKAccountFiatPropertiesCallback.h"
#import "DJIObjcWrapperCache+Private.h"
#import "NSError+ZumoKit.h"
#import "ZKAccountFiatProperties+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class AccountFiatPropertiesCallback::ObjcProxy final
: public ::zumo::AccountFiatPropertiesCallback
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::AccountFiatPropertiesCallback;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void on_error(const ::zumo::ZumoKitException & c_e) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onError:(::zumo::djinni::objc::ZumoKitExceptionConverter::fromCpp(c_e))];
        }
    }
    void on_success(const ::zumo::AccountFiatProperties & c_account) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onSuccess:(::djinni_generated::AccountFiatProperties::fromCpp(c_account))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto AccountFiatPropertiesCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto AccountFiatPropertiesCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).djinni_private_get_proxied_objc_object();
}

}  // namespace djinni_generated