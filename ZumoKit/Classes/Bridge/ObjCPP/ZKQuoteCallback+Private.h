// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#include "quote_callback.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol ZKQuoteCallback;

namespace djinni_generated {

class QuoteCallback
{
public:
    using CppType = std::shared_ptr<::zumo::QuoteCallback>;
    using CppOptType = std::shared_ptr<::zumo::QuoteCallback>;
    using ObjcType = id<ZKQuoteCallback>;

    using Boxed = QuoteCallback;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

