// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#include "submit_exchange_callback.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol ZKSubmitExchangeCallback;

namespace djinni_generated {

class SubmitExchangeCallback
{
public:
    using CppType = std::shared_ptr<::zumo::SubmitExchangeCallback>;
    using CppOptType = std::shared_ptr<::zumo::SubmitExchangeCallback>;
    using ObjcType = id<ZKSubmitExchangeCallback>;

    using Boxed = SubmitExchangeCallback;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

