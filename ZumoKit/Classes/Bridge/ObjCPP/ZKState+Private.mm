// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKState+Private.h"
#import "DJIMarshal+Private.h"
#import "ZKAccount+Private.h"
#import "ZKExchange+Private.h"
#import "ZKExchangeRate+Private.h"
#import "ZKExchangeSettings+Private.h"
#import "ZKFeeRates+Private.h"
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
            ::djinni::List<::djinni_generated::Exchange>::toCpp(obj.exchanges),
            ::djinni::String::toCpp(obj.token),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.activeUserId),
            ::djinni::Map<::djinni::String, ::djinni::Map<::djinni::String, ::djinni_generated::ExchangeRate>>::toCpp(obj.exchangeRates),
            ::djinni::Map<::djinni::String, ::djinni::Map<::djinni::String, ::djinni_generated::ExchangeSettings>>::toCpp(obj.exchangeSettings),
            ::djinni_generated::TxServiceConnection::toCpp(obj.txServiceConnection),
            ::djinni::Map<::djinni::String, ::djinni_generated::FeeRates>::toCpp(obj.feeRates),
            ::djinni::Enum<::zumo::SyncStatus, ZKSyncStatus>::toCpp(obj.syncStatus),
            ::djinni::Bool::toCpp(obj.isModulrCustomer)};
}

auto State::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKState alloc] initWithAccounts:(::djinni::List<::djinni_generated::Account>::fromCpp(cpp.accounts))
                                transactions:(::djinni::List<::djinni_generated::Transaction>::fromCpp(cpp.transactions))
                                   exchanges:(::djinni::List<::djinni_generated::Exchange>::fromCpp(cpp.exchanges))
                                       token:(::djinni::String::fromCpp(cpp.token))
                                activeUserId:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.active_user_id))
                               exchangeRates:(::djinni::Map<::djinni::String, ::djinni::Map<::djinni::String, ::djinni_generated::ExchangeRate>>::fromCpp(cpp.exchange_rates))
                            exchangeSettings:(::djinni::Map<::djinni::String, ::djinni::Map<::djinni::String, ::djinni_generated::ExchangeSettings>>::fromCpp(cpp.exchange_settings))
                         txServiceConnection:(::djinni_generated::TxServiceConnection::fromCpp(cpp.tx_service_connection))
                                    feeRates:(::djinni::Map<::djinni::String, ::djinni_generated::FeeRates>::fromCpp(cpp.fee_rates))
                                  syncStatus:(::djinni::Enum<::zumo::SyncStatus, ZKSyncStatus>::fromCpp(cpp.sync_status))
                            isModulrCustomer:(::djinni::Bool::fromCpp(cpp.is_modulr_customer))];
}

}  // namespace djinni_generated
