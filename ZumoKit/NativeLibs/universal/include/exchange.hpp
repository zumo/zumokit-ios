// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include "decimal.hpp"
#include "quote.hpp"
#include <optional>
#include <string>
#include <unordered_map>
#include <utility>

namespace zumo {

/** Record containing exchange details. */
struct Exchange final {
    /** Identifier */
    std::string id;
    /**
     * Exchange status.
     * @see ExchangeStatus
     */
    std::string status;
    /** Exchange pair, e.g. "ETH-GBP". */
    std::string pair;
    /**
     * Exchange side, "BUY" or "SELL".
     * @see ExchangeSide
     */
    std::string side;
    /** Exchange quote price. */
    ::zumo::Decimal price;
    /** Amount in base currency. */
    ::zumo::Decimal amount;
    /** Debit Account identifier. */
    std::string debit_account_id;
    /** Debit Transaction identifier. */
    std::optional<std::string> debit_transaction_id;
    /** Credit Account identifier. */
    std::string credit_account_id;
    /** Credit Transaction identifier. */
    std::optional<std::string> credit_transaction_id;
    /** Exchange rate quote used. */
    Quote quote;
    /**
     * Exchange rates at the time exchange was made.
     * This can be used to display amounts in local currency to the user.
     */
    std::unordered_map<std::string, std::unordered_map<std::string, ::zumo::Decimal>> rates;
    /** Exchange nonce or null. Used to prevent double spend. */
    std::optional<std::string> nonce;
    /** Timestamp when exchange was created, e.g. "2020-07-29T09:46:34.288Z". */
    std::string created_at;
    /** Timestamp when exchange was updated, e.g. "2020-07-29T09:46:34.288Z". */
    std::string updated_at;

    friend bool operator==(const Exchange& lhs, const Exchange& rhs);
    friend bool operator!=(const Exchange& lhs, const Exchange& rhs);

    Exchange(std::string id_,
             std::string status_,
             std::string pair_,
             std::string side_,
             ::zumo::Decimal price_,
             ::zumo::Decimal amount_,
             std::string debit_account_id_,
             std::optional<std::string> debit_transaction_id_,
             std::string credit_account_id_,
             std::optional<std::string> credit_transaction_id_,
             Quote quote_,
             std::unordered_map<std::string, std::unordered_map<std::string, ::zumo::Decimal>> rates_,
             std::optional<std::string> nonce_,
             std::string created_at_,
             std::string updated_at_)
    : id(std::move(id_))
    , status(std::move(status_))
    , pair(std::move(pair_))
    , side(std::move(side_))
    , price(std::move(price_))
    , amount(std::move(amount_))
    , debit_account_id(std::move(debit_account_id_))
    , debit_transaction_id(std::move(debit_transaction_id_))
    , credit_account_id(std::move(credit_account_id_))
    , credit_transaction_id(std::move(credit_transaction_id_))
    , quote(std::move(quote_))
    , rates(std::move(rates_))
    , nonce(std::move(nonce_))
    , created_at(std::move(created_at_))
    , updated_at(std::move(updated_at_))
    {}
};

}  // namespace zumo
