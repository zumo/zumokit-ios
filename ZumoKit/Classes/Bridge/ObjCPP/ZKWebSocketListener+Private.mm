// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from networking.djinni

#import "ZKWebSocketListener+Private.h"
#import "ZKWebSocketListener.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface ZKWebSocketListener ()

- (id)initWithCpp:(const std::shared_ptr<::zumo::WebSocketListener>&)cppRef;

@end

@implementation ZKWebSocketListener {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::zumo::WebSocketListener>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::zumo::WebSocketListener>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)onOpen:(nonnull NSString *)message {
    try {
        _cppRefHandle.get()->on_open(::djinni::String::toCpp(message));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)onMessage:(nonnull NSString *)message {
    try {
        _cppRefHandle.get()->on_message(::djinni::String::toCpp(message));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)onClose:(nonnull NSString *)message {
    try {
        _cppRefHandle.get()->on_close(::djinni::String::toCpp(message));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)onError:(nonnull NSString *)message {
    try {
        _cppRefHandle.get()->on_error(::djinni::String::toCpp(message));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto WebSocketListener::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto WebSocketListener::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<ZKWebSocketListener>(cpp);
}

}  // namespace djinni_generated

@end
