// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#pragma once

#include "account.hpp"
#include "stdx/optional.hpp"
#include "zumo/decimal.hpp"
#include <string>
#include <utility>

namespace zumo {

/**
 * Result of one of the transaction compose methods on @link Wallet object.
 * @see Wallet
 */
struct ComposedTransaction final {
    /**
     * Transaction type, 'FIAT', 'CRYPTO' or 'NOMINATED'.
     * @see TransactionType
     */
    std::string type;
    /** Signed transaction for a crypto transaction, null otherwise. */
    std::experimental::optional<std::string> signed_transaction;
    /** Account the composed transaction belongs to. */
    Account account;
    /** Transaction destination, i.e. destination address for crypto transactions or user id for fiat transactions. */
    std::experimental::optional<std::string> destination;
    /** Transaction amount in account currency. */
    std::experimental::optional<::zumo::Decimal> amount;
    /** Optional transaction data if available. */
    std::experimental::optional<std::string> data;
    /** Maximum transaction fee. */
    ::zumo::Decimal fee;
    /** Transaction nonce to prevent double spend. */
    std::string nonce;

    friend bool operator==(const ComposedTransaction& lhs, const ComposedTransaction& rhs);
    friend bool operator!=(const ComposedTransaction& lhs, const ComposedTransaction& rhs);

    ComposedTransaction(std::string type_,
                        std::experimental::optional<std::string> signed_transaction_,
                        Account account_,
                        std::experimental::optional<std::string> destination_,
                        std::experimental::optional<::zumo::Decimal> amount_,
                        std::experimental::optional<std::string> data_,
                        ::zumo::Decimal fee_,
                        std::string nonce_)
    : type(std::move(type_))
    , signed_transaction(std::move(signed_transaction_))
    , account(std::move(account_))
    , destination(std::move(destination_))
    , amount(std::move(amount_))
    , data(std::move(data_))
    , fee(std::move(fee_))
    , nonce(std::move(nonce_))
    {}
};

}  // namespace zumo
