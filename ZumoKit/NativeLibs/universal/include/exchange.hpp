// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#pragma once

#include "exchange_fees.hpp"
#include "exchange_rate.hpp"
#include "stdx/optional.hpp"
#include <cstdint>
#include <string>
#include <utility>

namespace zumo {

struct Exchange final {
    std::string id;
    std::string status;
    std::string deposit_currency;
    std::string deposit_account_id;
    std::string deposit_transaction_id;
    std::string withdraw_currency;
    std::string withdraw_account_id;
    std::experimental::optional<std::string> withdraw_transaction_id;
    std::string amount;
    std::string deposit_fee;
    std::string return_amount;
    std::string exchange_fee;
    std::string withdraw_fee;
    ExchangeRate exchange_rate;
    ExchangeFees exchange_fees;
    std::experimental::optional<int64_t> submitted_at;
    std::experimental::optional<int64_t> confirmed_at;

    friend bool operator==(const Exchange& lhs, const Exchange& rhs);
    friend bool operator!=(const Exchange& lhs, const Exchange& rhs);

    Exchange(std::string id_,
             std::string status_,
             std::string deposit_currency_,
             std::string deposit_account_id_,
             std::string deposit_transaction_id_,
             std::string withdraw_currency_,
             std::string withdraw_account_id_,
             std::experimental::optional<std::string> withdraw_transaction_id_,
             std::string amount_,
             std::string deposit_fee_,
             std::string return_amount_,
             std::string exchange_fee_,
             std::string withdraw_fee_,
             ExchangeRate exchange_rate_,
             ExchangeFees exchange_fees_,
             std::experimental::optional<int64_t> submitted_at_,
             std::experimental::optional<int64_t> confirmed_at_)
    : id(std::move(id_))
    , status(std::move(status_))
    , deposit_currency(std::move(deposit_currency_))
    , deposit_account_id(std::move(deposit_account_id_))
    , deposit_transaction_id(std::move(deposit_transaction_id_))
    , withdraw_currency(std::move(withdraw_currency_))
    , withdraw_account_id(std::move(withdraw_account_id_))
    , withdraw_transaction_id(std::move(withdraw_transaction_id_))
    , amount(std::move(amount_))
    , deposit_fee(std::move(deposit_fee_))
    , return_amount(std::move(return_amount_))
    , exchange_fee(std::move(exchange_fee_))
    , withdraw_fee(std::move(withdraw_fee_))
    , exchange_rate(std::move(exchange_rate_))
    , exchange_fees(std::move(exchange_fees_))
    , submitted_at(std::move(submitted_at_))
    , confirmed_at(std::move(confirmed_at_))
    {}
};

}  // namespace zumo
