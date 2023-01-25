// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from networking.djinni

#import "ZKHttpCallback+Private.h"
#import "ZKHttpCallback.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface ZKHttpCallback ()

- (id)initWithCpp:(const std::shared_ptr<::zumo::HttpCallback>&)cppRef;

@end

@implementation ZKHttpCallback {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::zumo::HttpCallback>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::zumo::HttpCallback>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)onNetworkError:(nonnull NSString *)message {
    try {
        _cppRefHandle.get()->on_network_error(::djinni::String::toCpp(message));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)onSuccess:(int16_t)httpCode
             data:(nonnull NSString *)data {
    try {
        _cppRefHandle.get()->on_success(::djinni::I16::toCpp(httpCode),
                                        ::djinni::String::toCpp(data));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto HttpCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto HttpCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<ZKHttpCallback>(cpp);
}

}  // namespace djinni_generated

@end