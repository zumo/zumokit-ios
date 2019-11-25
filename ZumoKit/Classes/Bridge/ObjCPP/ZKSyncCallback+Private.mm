// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#import "ZKSyncCallback+Private.h"
#import "ZKSyncCallback.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface ZKSyncCallbackCppProxy : NSObject<ZKSyncCallback>

- (id)initWithCpp:(const std::shared_ptr<::zumo::SyncCallback>&)cppRef;

@end

@implementation ZKSyncCallbackCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::zumo::SyncCallback>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::zumo::SyncCallback>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)onError:(int16_t)errorCode
   errorMessage:(nonnull NSString *)errorMessage {
    try {
        _cppRefHandle.get()->on_error(::djinni::I16::toCpp(errorCode),
                                      ::djinni::String::toCpp(errorMessage));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)onSuccess {
    try {
        _cppRefHandle.get()->on_success();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class SyncCallback::ObjcProxy final
: public ::zumo::SyncCallback
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::SyncCallback;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void on_error(int16_t c_error_code, const std::string & c_error_message) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onError:(::djinni::I16::fromCpp(c_error_code))
                                                 errorMessage:(::djinni::String::fromCpp(c_error_message))];
        }
    }
    void on_success() override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onSuccess];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto SyncCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[ZKSyncCallbackCppProxy class]]) {
        return ((ZKSyncCallbackCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto SyncCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<ZKSyncCallbackCppProxy>(cpp);
}

}  // namespace djinni_generated

@end
