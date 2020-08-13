// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#pragma once

#include "zumo/decimal.hpp"
#include <cstdint>
#include <string>
#include <unordered_map>
#include <utility>

namespace zumo {

/** Zumo exchange settings used in making exchanges. */
struct ExchangeSettings final {
    /** Identifier. */
    std::string id;
    /**
     * Zumo Exchange Service wallet address for each network type.
     * @see network_type
     */
    std::unordered_map<std::string, std::string> deposit_address;
    /**
     * Currency code of outgoing transaction.
     * @see currency_code
     */
    std::string deposit_currency;
    /**
     * Currency code of return transaction.
     * @see currency_code
     */
    std::string withdraw_currency;
    /** Minimum amount that can be exchanged in outgoing transaction currency. */
    ::zumo::Decimal min_exchange_amount;
    /** Exchange fee rate that will be charged once currency is exchanged. */
    ::zumo::Decimal fee_rate;
    /** Fee rate that will be used for outgoing transaction. */
    ::zumo::Decimal deposit_fee_rate;
    /** Fee that will charged for return transaction. */
    ::zumo::Decimal withdraw_fee;
    /** Epoch timestamp when the exchange settings were last updated. */
    int64_t timestamp;

    friend bool operator==(const ExchangeSettings& lhs, const ExchangeSettings& rhs);
    friend bool operator!=(const ExchangeSettings& lhs, const ExchangeSettings& rhs);

    ExchangeSettings(std::string id_,
                     std::unordered_map<std::string, std::string> deposit_address_,
                     std::string deposit_currency_,
                     std::string withdraw_currency_,
                     ::zumo::Decimal min_exchange_amount_,
                     ::zumo::Decimal fee_rate_,
                     ::zumo::Decimal deposit_fee_rate_,
                     ::zumo::Decimal withdraw_fee_,
                     int64_t timestamp_)
    : id(std::move(id_))
    , deposit_address(std::move(deposit_address_))
    , deposit_currency(std::move(deposit_currency_))
    , withdraw_currency(std::move(withdraw_currency_))
    , min_exchange_amount(std::move(min_exchange_amount_))
    , fee_rate(std::move(fee_rate_))
    , deposit_fee_rate(std::move(deposit_fee_rate_))
    , withdraw_fee(std::move(withdraw_fee_))
    , timestamp(std::move(timestamp_))
    {}
};

}  // namespace zumo
