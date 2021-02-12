// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#import "ZKLogListener+Private.h"
#import "ZKLogListener.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface ZKLogListenerCppProxy : NSObject<ZKLogListener>

- (id)initWithCpp:(const std::shared_ptr<::zumo::LogListener>&)cppRef;

@end

@implementation ZKLogListenerCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::zumo::LogListener>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::zumo::LogListener>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)onLog:(nonnull NSString *)message {
    try {
        _cppRefHandle.get()->on_log(::djinni::String::toCpp(message));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class LogListener::ObjcProxy final
: public ::zumo::LogListener
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::LogListener;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void on_log(const std::string & c_message) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onLog:(::djinni::String::fromCpp(c_message))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto LogListener::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[ZKLogListenerCppProxy class]]) {
        return ((ZKLogListenerCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto LogListener::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<ZKLogListenerCppProxy>(cpp);
}

}  // namespace djinni_generated

@end
