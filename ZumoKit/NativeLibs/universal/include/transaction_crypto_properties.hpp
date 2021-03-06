// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include "zumo/decimal.hpp"
#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>
#include <utility>

namespace zumo {

/**
 * Record containing transaction's crypto properties.
 * @see Transaction
 */
struct TransactionCryptoProperties final {
    /** Transaction hash or null. */
    std::optional<std::string> tx_hash;
    /**
     * Ethereum transaction nonce if greater than 0 and
     * it is Ethereum transaction, otherwise returns null.
     */
    std::optional<int32_t> nonce;
    /** Wallet address of sender, */
    std::string from_address;
    /** Wallet address of receiver or null, if it is Ethereum contract deploy. */
    std::optional<std::string> to_address;
    /** Transaction data or null. */
    std::optional<std::string> data;
    /** Ethereum gas price if it is Ethereum transaction, otherwise null. */
    std::optional<::zumo::Decimal> gas_price;
    /** Ethereum gas limit if it is Ethereum transaction, otherwise null. */
    std::optional<int32_t> gas_limit;
    /**
     * Amount in fiat currencies at the time of the transaction submission.
     * @see CurrencyCode
     */
    std::unordered_map<std::string, ::zumo::Decimal> fiat_amount;
    /**
     * Fee in fiat currencies at the time of the transaction submission.
     * @see CurrencyCode
     */
    std::unordered_map<std::string, ::zumo::Decimal> fiat_fee;

    friend bool operator==(const TransactionCryptoProperties& lhs, const TransactionCryptoProperties& rhs);
    friend bool operator!=(const TransactionCryptoProperties& lhs, const TransactionCryptoProperties& rhs);

    TransactionCryptoProperties(std::optional<std::string> tx_hash_,
                                std::optional<int32_t> nonce_,
                                std::string from_address_,
                                std::optional<std::string> to_address_,
                                std::optional<std::string> data_,
                                std::optional<::zumo::Decimal> gas_price_,
                                std::optional<int32_t> gas_limit_,
                                std::unordered_map<std::string, ::zumo::Decimal> fiat_amount_,
                                std::unordered_map<std::string, ::zumo::Decimal> fiat_fee_)
    : tx_hash(std::move(tx_hash_))
    , nonce(std::move(nonce_))
    , from_address(std::move(from_address_))
    , to_address(std::move(to_address_))
    , data(std::move(data_))
    , gas_price(std::move(gas_price_))
    , gas_limit(std::move(gas_limit_))
    , fiat_amount(std::move(fiat_amount_))
    , fiat_fee(std::move(fiat_fee_))
    {}
};

}  // namespace zumo
