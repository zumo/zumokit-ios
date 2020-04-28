// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#pragma once

#include "account.hpp"
#include "exchange_rate.hpp"
#include <string>
#include <utility>

namespace zumo {

struct ComposedExchange final {
    std::string signed_transaction;
    Account deposit_account;
    Account withdraw_account;
    ExchangeRate exchange_rate;
    std::string exchange_address;
    std::string value;
    std::string return_value;
    std::string deposit_fee;
    std::string exchange_fee;
    std::string withdraw_fee;

    friend bool operator==(const ComposedExchange& lhs, const ComposedExchange& rhs);
    friend bool operator!=(const ComposedExchange& lhs, const ComposedExchange& rhs);

    ComposedExchange(std::string signed_transaction_,
                     Account deposit_account_,
                     Account withdraw_account_,
                     ExchangeRate exchange_rate_,
                     std::string exchange_address_,
                     std::string value_,
                     std::string return_value_,
                     std::string deposit_fee_,
                     std::string exchange_fee_,
                     std::string withdraw_fee_)
    : signed_transaction(std::move(signed_transaction_))
    , deposit_account(std::move(deposit_account_))
    , withdraw_account(std::move(withdraw_account_))
    , exchange_rate(std::move(exchange_rate_))
    , exchange_address(std::move(exchange_address_))
    , value(std::move(value_))
    , return_value(std::move(return_value_))
    , deposit_fee(std::move(deposit_fee_))
    , exchange_fee(std::move(exchange_fee_))
    , withdraw_fee(std::move(withdraw_fee_))
    {}
};

}  // namespace zumo