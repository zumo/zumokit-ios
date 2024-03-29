// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from utils.djinni

#import "ZKUtils+Private.h"
#import "ZKUtils.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface ZKUtils ()

- (id)initWithCpp:(const std::shared_ptr<::zumo::Utils>&)cppRef;

@end

@implementation ZKUtils {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::zumo::Utils>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::zumo::Utils>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nonnull NSString *)generateMnemonic:(int32_t)wordCount {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->generate_mnemonic(::djinni::I32::toCpp(wordCount));
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)isValidAddress:(nonnull NSString *)currencyCode
               address:(nonnull NSString *)address
               network:(nonnull NSString *)network {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->is_valid_address(::djinni::String::toCpp(currencyCode),
                                                                    ::djinni::String::toCpp(address),
                                                                    ::djinni::String::toCpp(network));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto Utils::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto Utils::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<ZKUtils>(cpp);
}

}  // namespace djinni_generated

@end
