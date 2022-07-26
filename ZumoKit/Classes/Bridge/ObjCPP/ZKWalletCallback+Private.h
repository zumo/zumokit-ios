// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#include "wallet_callback.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol ZKWalletCallback;

namespace djinni_generated {

class WalletCallback
{
public:
    using CppType = std::shared_ptr<::zumo::WalletCallback>;
    using CppOptType = std::shared_ptr<::zumo::WalletCallback>;
    using ObjcType = id<ZKWalletCallback>;

    using Boxed = WalletCallback;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated
