// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include "decimal.hpp"
#include <cstdint>
#include <string>
#include <unordered_map>
#include <utility>

namespace zumo {

/** Record containing Zumo exchange setting used in making exchanges. */
struct ExchangeSetting final {
    /** Identifier. */
    std::string id;
    /**
     * Mapping between networks and Zumo Exchange addresses.
     * @see NetworkType
     */
    std::unordered_map<std::string, std::string> exchange_address;
    /**
     * Currency code of outgoing transaction.
     * @see CurrencyCode
     */
    std::string from_currency;
    /**
     * Currency code of return transaction.
     * @see CurrencyCode
     */
    std::string to_currency;
    /** Minimum amount that can be exchanged in outgoing transaction currency. */
    ::zumo::Decimal min_exchange_amount;
    /** Exchange fee rate that will be charged once currency is exchanged. */
    ::zumo::Decimal exchange_fee_rate;
    /** Fee rate that will be used for outgoing transaction. */
    ::zumo::Decimal outgoing_transaction_fee_rate;
    /** Fee that will charged for return transaction. */
    ::zumo::Decimal return_transaction_fee;
    /** Epoch timestamp when the exchange setting were last updated. */
    int32_t timestamp;

    friend bool operator==(const ExchangeSetting& lhs, const ExchangeSetting& rhs);
    friend bool operator!=(const ExchangeSetting& lhs, const ExchangeSetting& rhs);

    ExchangeSetting(std::string id_,
                    std::unordered_map<std::string, std::string> exchange_address_,
                    std::string from_currency_,
                    std::string to_currency_,
                    ::zumo::Decimal min_exchange_amount_,
                    ::zumo::Decimal exchange_fee_rate_,
                    ::zumo::Decimal outgoing_transaction_fee_rate_,
                    ::zumo::Decimal return_transaction_fee_,
                    int32_t timestamp_)
    : id(std::move(id_))
    , exchange_address(std::move(exchange_address_))
    , from_currency(std::move(from_currency_))
    , to_currency(std::move(to_currency_))
    , min_exchange_amount(std::move(min_exchange_amount_))
    , exchange_fee_rate(std::move(exchange_fee_rate_))
    , outgoing_transaction_fee_rate(std::move(outgoing_transaction_fee_rate_))
    , return_transaction_fee(std::move(return_transaction_fee_))
    , timestamp(std::move(timestamp_))
    {}
};

}  // namespace zumo
