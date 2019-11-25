// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#include "transaction_listener.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol ZKTransactionListener;

namespace djinni_generated {

class TransactionListener
{
public:
    using CppType = std::shared_ptr<::zumo::TransactionListener>;
    using CppOptType = std::shared_ptr<::zumo::TransactionListener>;
    using ObjcType = id<ZKTransactionListener>;

    using Boxed = TransactionListener;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

