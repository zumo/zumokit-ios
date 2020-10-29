// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKExchange+Private.h"
#import "DJIMarshal+Private.h"
#import "NSDecimalNumber+ZumoKit.h"
#import "ZKExchangeRate+Private.h"
#import "ZKExchangeSetting+Private.h"
#include <cassert>

namespace djinni_generated {

auto Exchange::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.id),
            ::djinni::String::toCpp(obj.status),
            ::djinni::String::toCpp(obj.fromCurrency),
            ::djinni::String::toCpp(obj.fromAccountId),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.outgoingTransactionId),
            ::djinni::String::toCpp(obj.toCurrency),
            ::djinni::String::toCpp(obj.toAccountId),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.returnTransactionId),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.amount),
            ::djinni::Optional<std::experimental::optional, ::zumo::djinni::objc::DecimalConverter>::toCpp(obj.outgoingTransactionFee),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.returnAmount),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.exchangeFee),
            ::zumo::djinni::objc::DecimalConverter::toCpp(obj.returnTransactionFee),
            ::djinni_generated::ExchangeRate::toCpp(obj.exchangeRate),
            ::djinni_generated::ExchangeSetting::toCpp(obj.exchangeSetting),
            ::djinni::Map<::djinni::String, ::djinni::Map<::djinni::String, ::djinni_generated::ExchangeRate>>::toCpp(obj.exchangeRates),
            ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(obj.nonce),
            ::djinni::Optional<std::experimental::optional, ::djinni::I64>::toCpp(obj.submittedAt),
            ::djinni::Optional<std::experimental::optional, ::djinni::I64>::toCpp(obj.confirmedAt)};
}

auto Exchange::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[ZKExchange alloc] initWithId:(::djinni::String::fromCpp(cpp.id))
                                   status:(::djinni::String::fromCpp(cpp.status))
                             fromCurrency:(::djinni::String::fromCpp(cpp.from_currency))
                            fromAccountId:(::djinni::String::fromCpp(cpp.from_account_id))
                    outgoingTransactionId:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.outgoing_transaction_id))
                               toCurrency:(::djinni::String::fromCpp(cpp.to_currency))
                              toAccountId:(::djinni::String::fromCpp(cpp.to_account_id))
                      returnTransactionId:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.return_transaction_id))
                                   amount:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.amount))
                   outgoingTransactionFee:(::djinni::Optional<std::experimental::optional, ::zumo::djinni::objc::DecimalConverter>::fromCpp(cpp.outgoing_transaction_fee))
                             returnAmount:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.return_amount))
                              exchangeFee:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.exchange_fee))
                     returnTransactionFee:(::zumo::djinni::objc::DecimalConverter::fromCpp(cpp.return_transaction_fee))
                             exchangeRate:(::djinni_generated::ExchangeRate::fromCpp(cpp.exchange_rate))
                          exchangeSetting:(::djinni_generated::ExchangeSetting::fromCpp(cpp.exchange_setting))
                            exchangeRates:(::djinni::Map<::djinni::String, ::djinni::Map<::djinni::String, ::djinni_generated::ExchangeRate>>::fromCpp(cpp.exchange_rates))
                                    nonce:(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(cpp.nonce))
                              submittedAt:(::djinni::Optional<std::experimental::optional, ::djinni::I64>::fromCpp(cpp.submitted_at))
                              confirmedAt:(::djinni::Optional<std::experimental::optional, ::djinni::I64>::fromCpp(cpp.confirmed_at))];
}

}  // namespace djinni_generated
