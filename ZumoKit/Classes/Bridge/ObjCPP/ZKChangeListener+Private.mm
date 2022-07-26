// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#import "ZKChangeListener+Private.h"
#import "ZKChangeListener.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIObjcWrapperCache+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface ZKChangeListenerCppProxy : NSObject<ZKChangeListener>

- (id)initWithCpp:(const std::shared_ptr<::zumo::ChangeListener>&)cppRef;

@end

@implementation ZKChangeListenerCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::zumo::ChangeListener>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::zumo::ChangeListener>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)onChange {
    try {
        _cppRefHandle.get()->on_change();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class ChangeListener::ObjcProxy final
: public ::zumo::ChangeListener
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::ChangeListener;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void on_change() override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onChange];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto ChangeListener::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[ZKChangeListenerCppProxy class]]) {
        return ((ZKChangeListenerCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto ChangeListener::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<ZKChangeListenerCppProxy>(cpp);
}

}  // namespace djinni_generated

@end