// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#pragma once

#include <cstdint>
#include <string>
#include <utility>

namespace zumo {

struct ExchangeRate final {
    std::string id;
    std::string deposit_currency;
    std::string withdraw_currency;
    int64_t valid_to;
    std::string rate;
    std::string fee_rate;
    std::string deposit_fee_rate;
    std::string withdraw_fee;
    int64_t timestamp;

    friend bool operator==(const ExchangeRate& lhs, const ExchangeRate& rhs);
    friend bool operator!=(const ExchangeRate& lhs, const ExchangeRate& rhs);

    ExchangeRate(std::string id_,
                 std::string deposit_currency_,
                 std::string withdraw_currency_,
                 int64_t valid_to_,
                 std::string rate_,
                 std::string fee_rate_,
                 std::string deposit_fee_rate_,
                 std::string withdraw_fee_,
                 int64_t timestamp_)
    : id(std::move(id_))
    , deposit_currency(std::move(deposit_currency_))
    , withdraw_currency(std::move(withdraw_currency_))
    , valid_to(std::move(valid_to_))
    , rate(std::move(rate_))
    , fee_rate(std::move(fee_rate_))
    , deposit_fee_rate(std::move(deposit_fee_rate_))
    , withdraw_fee(std::move(withdraw_fee_))
    , timestamp(std::move(timestamp_))
    {}
};

}  // namespace zumo