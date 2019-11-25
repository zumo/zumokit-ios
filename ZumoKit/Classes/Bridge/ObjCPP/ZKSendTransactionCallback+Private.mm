// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "ZKSendTransactionCallback+Private.h"
#import "ZKSendTransactionCallback.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "ZKTransaction+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface ZKSendTransactionCallbackCppProxy : NSObject<ZKSendTransactionCallback>

- (id)initWithCpp:(const std::shared_ptr<::zumo::SendTransactionCallback>&)cppRef;

@end

@implementation ZKSendTransactionCallbackCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::zumo::SendTransactionCallback>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::zumo::SendTransactionCallback>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)onError:(nonnull NSString *)errorName
   errorMessage:(nonnull NSString *)errorMessage {
    try {
        _cppRefHandle.get()->on_error(::djinni::String::toCpp(errorName),
                                      ::djinni::String::toCpp(errorMessage));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)onSuccess:(nonnull ZKTransaction *)transaction {
    try {
        _cppRefHandle.get()->on_success(::djinni_generated::Transaction::toCpp(transaction));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class SendTransactionCallback::ObjcProxy final
: public ::zumo::SendTransactionCallback
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::SendTransactionCallback;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void on_error(const std::string & c_error_name, const std::string & c_error_message) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onError:(::djinni::String::fromCpp(c_error_name))
                                                 errorMessage:(::djinni::String::fromCpp(c_error_message))];
        }
    }
    void on_success(const ::zumo::Transaction & c_transaction) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onSuccess:(::djinni_generated::Transaction::fromCpp(c_transaction))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto SendTransactionCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[ZKSendTransactionCallbackCppProxy class]]) {
        return ((ZKSendTransactionCallbackCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto SendTransactionCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<ZKSendTransactionCallbackCppProxy>(cpp);
}

}  // namespace djinni_generated

@end
