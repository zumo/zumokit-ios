// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#import "ZKHistoricalExchangeRatesCallback+Private.h"
#import "ZKHistoricalExchangeRatesCallback.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "NSError+ZumoKit.h"
#import "ZKExchangeRate+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class HistoricalExchangeRatesCallback::ObjcProxy final
: public ::zumo::HistoricalExchangeRatesCallback
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::HistoricalExchangeRatesCallback;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void on_error(const ::zumo::ZumoKitException & c_e) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onError:(::zumo::djinni::objc::ZumoKitExceptionConverter::fromCpp(c_e))];
        }
    }
    void on_success(const std::unordered_map<std::string, std::unordered_map<std::string, std::unordered_map<std::string, std::vector<::zumo::ExchangeRate>>>> & c_historical_exchange_rates) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onSuccess:(::djinni::Map<::djinni::String, ::djinni::Map<::djinni::String, ::djinni::Map<::djinni::String, ::djinni::List<::djinni_generated::ExchangeRate>>>>::fromCpp(c_historical_exchange_rates))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto HistoricalExchangeRatesCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto HistoricalExchangeRatesCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).djinni_private_get_proxied_objc_object();
}

}  // namespace djinni_generated