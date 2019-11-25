// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKState+Private.h"
#import "DJIMarshal+Private.h"
#import "ZKAccount+Private.h"
#import "ZKSyncStatus+Private.h"
#import "ZKTransaction+Private.h"
#import "ZKTxServiceConnection+Private.h"
#include <cassert>

namespace djinni_generated {

auto State::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::List<::djinni_generated::Account>::toCpp(obj.accounts),
            ::djinni::List<::djinni_generated::Transaction>::toCpp(obj.transactions),
            ::djinni::String::toCpp(obj.token),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.activeUserId),
            ::djinni::String::toCpp(obj.exchangeRates),
            ::djinni_generated::TxServiceConnection::toCpp(obj.txServiceConnection),
            ::djinni::String::toCpp(obj.ethGasPrice),
            ::djinni::Enum<::zumo::SyncStatus, ZKSyncStatus>::toCpp(obj.syncStatus)};
}

auto State::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKState alloc] initWithAccounts:(::djinni::List<::djinni_generated::Account>::fromCpp(cpp.accounts))
                                transactions:(::djinni::List<::djinni_generated::Transaction>::fromCpp(cpp.transactions))
                                       token:(::djinni::String::fromCpp(cpp.token))
                                activeUserId:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.active_user_id))
                               exchangeRates:(::djinni::String::fromCpp(cpp.exchange_rates))
                         txServiceConnection:(::djinni_generated::TxServiceConnection::fromCpp(cpp.tx_service_connection))
                                 ethGasPrice:(::djinni::String::fromCpp(cpp.eth_gas_price))
                                  syncStatus:(::djinni::Enum<::zumo::SyncStatus, ZKSyncStatus>::fromCpp(cpp.sync_status))];
}

}  // namespace djinni_generated
