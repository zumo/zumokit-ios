// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include "exchange.hpp"
#include "transaction_card_properties.hpp"
#include "transaction_crypto_properties.hpp"
#include "transaction_fiat_properties.hpp"
#include "zumo/decimal.hpp"
#include <cstdint>
#include <optional>
#include <string>
#include <utility>

namespace zumo {

/** Record containing transaction details. */
struct Transaction final {
    /** Identifier. */
    std::string id;
    /**
     * Transaction type.
     * @see TransactionType
     */
    std::string type;
    /**
     * Currency code.
     * @see CurrencyCode
     */
    std::string currency_code;
    /**
     * Transaction direction relative to AccountDataSnapshot .
     * @see TransactionDirection
     */
    std::string direction;
    /** Sender integrator user identifier or null if it is external user. */
    std::optional<std::string> from_user_id;
    /** Recipient integrator user identifier or null if it is external user. */
    std::optional<std::string> to_user_id;
    /** Sender account identifier if it is internal transaction or null otherwise. */
    std::optional<std::string> from_account_id;
    /** Recipient account identifier if it is internal transaction or null otherwise. */
    std::optional<std::string> to_account_id;
    /**
     * Network type.
     * @see NetworkType
     */
    std::string network;
    /**
     * Transaction status.
     * @see TransactionStatus
     */
    std::string status;
    /** Amount in transaction currency or null if transaction is Ethereum contract deploy. */
    std::optional<::zumo::Decimal> amount;
    /** Transaction fee in transaction currency or null, if not yet available. */
    std::optional<::zumo::Decimal> fee;
    /** Transaction nonce or null. Used to prevent double spend. */
    std::optional<std::string> nonce;
    /**
     * Crypto properties if it is a crypto transaction, null otherwise.
     * @see TransactionType
     */
    std::optional<TransactionCryptoProperties> crypto_properties;
    /**
     * Fiat properties if it is a fiat transaction, null otherwise.
     * @see TransactionType
     */
    std::optional<TransactionFiatProperties> fiat_properties;
    /**
     * Card properties if it is a card transaction, null otherwise.
     * @see TransactionType
     */
    std::optional<TransactionCardProperties> card_properties;
    /**
     * Exchange properties if it is a transaction associated with an exchange, null otherwise.
     * @see TransactionType
     */
    std::optional<Exchange> exchange;
    /** Epoch timestamp when transaction was submitted or null for incoming transactions from outside of Zumo ecosystem. */
    std::optional<int32_t> submitted_at;
    /** Epoch timestamp when transaction was submitted or null if transaction was not confirmed yet. */
    std::optional<int32_t> confirmed_at;
    /** Epoch timestamp, minimum non-null value between submitted at and confirmed at timestamps. */
    int32_t timestamp;

    friend bool operator==(const Transaction& lhs, const Transaction& rhs);
    friend bool operator!=(const Transaction& lhs, const Transaction& rhs);

    Transaction(std::string id_,
                std::string type_,
                std::string currency_code_,
                std::string direction_,
                std::optional<std::string> from_user_id_,
                std::optional<std::string> to_user_id_,
                std::optional<std::string> from_account_id_,
                std::optional<std::string> to_account_id_,
                std::string network_,
                std::string status_,
                std::optional<::zumo::Decimal> amount_,
                std::optional<::zumo::Decimal> fee_,
                std::optional<std::string> nonce_,
                std::optional<TransactionCryptoProperties> crypto_properties_,
                std::optional<TransactionFiatProperties> fiat_properties_,
                std::optional<TransactionCardProperties> card_properties_,
                std::optional<Exchange> exchange_,
                std::optional<int32_t> submitted_at_,
                std::optional<int32_t> confirmed_at_,
                int32_t timestamp_)
    : id(std::move(id_))
    , type(std::move(type_))
    , currency_code(std::move(currency_code_))
    , direction(std::move(direction_))
    , from_user_id(std::move(from_user_id_))
    , to_user_id(std::move(to_user_id_))
    , from_account_id(std::move(from_account_id_))
    , to_account_id(std::move(to_account_id_))
    , network(std::move(network_))
    , status(std::move(status_))
    , amount(std::move(amount_))
    , fee(std::move(fee_))
    , nonce(std::move(nonce_))
    , crypto_properties(std::move(crypto_properties_))
    , fiat_properties(std::move(fiat_properties_))
    , card_properties(std::move(card_properties_))
    , exchange(std::move(exchange_))
    , submitted_at(std::move(submitted_at_))
    , confirmed_at(std::move(confirmed_at_))
    , timestamp(std::move(timestamp_))
    {}
};

}  // namespace zumo
