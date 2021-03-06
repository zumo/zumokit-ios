// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include "account.hpp"
#include "exchange_rate.hpp"
#include "exchange_setting.hpp"
#include "zumo/decimal.hpp"
#include <optional>
#include <string>
#include <utility>

namespace zumo {

/** Record containing result of the compose exchange method on Wallet object. */
struct ComposedExchange final {
    /** Signed transaction for a crypto transaction, null otherwise. */
    std::optional<std::string> signed_transaction;
    /** Source account. */
    Account from_account;
    /** Target account. */
    Account to_account;
    /** Exchange rate used composing exchange. */
    ExchangeRate exchange_rate;
    /** Exchange setting used composing exchange. */
    ExchangeSetting exchange_setting;
    /**
     * Zumo Exchange Service wallet address where outgoing crypto funds were deposited,
     * null for exchanges from fiat currencies.
     */
    std::optional<std::string> exchange_address;
    /** Exchange amount in source account currency. */
    ::zumo::Decimal amount;
    /**
     * Amount that user receives, calculated as <code>value X exchangeRate X (1 - feeRate) - returnTransactionFee</code>.
     * @see ExchangeSetting
     */
    ::zumo::Decimal return_amount;
    /** Outgoing transaction fee. */
    ::zumo::Decimal outgoing_transaction_fee;
    /**
     * Exchange fee, calculated as <code>value X exchangeRate X exchangeFeeRate</code>.
     * @see ExchangeSetting
     */
    ::zumo::Decimal exchange_fee;
    /**
     * Return transaction fee.
     * @see ExchangeSetting
     */
    ::zumo::Decimal return_transaction_fee;
    /** Unique nonce used to prevent double spend. */
    std::string nonce;

    friend bool operator==(const ComposedExchange& lhs, const ComposedExchange& rhs);
    friend bool operator!=(const ComposedExchange& lhs, const ComposedExchange& rhs);

    ComposedExchange(std::optional<std::string> signed_transaction_,
                     Account from_account_,
                     Account to_account_,
                     ExchangeRate exchange_rate_,
                     ExchangeSetting exchange_setting_,
                     std::optional<std::string> exchange_address_,
                     ::zumo::Decimal amount_,
                     ::zumo::Decimal return_amount_,
                     ::zumo::Decimal outgoing_transaction_fee_,
                     ::zumo::Decimal exchange_fee_,
                     ::zumo::Decimal return_transaction_fee_,
                     std::string nonce_)
    : signed_transaction(std::move(signed_transaction_))
    , from_account(std::move(from_account_))
    , to_account(std::move(to_account_))
    , exchange_rate(std::move(exchange_rate_))
    , exchange_setting(std::move(exchange_setting_))
    , exchange_address(std::move(exchange_address_))
    , amount(std::move(amount_))
    , return_amount(std::move(return_amount_))
    , outgoing_transaction_fee(std::move(outgoing_transaction_fee_))
    , exchange_fee(std::move(exchange_fee_))
    , return_transaction_fee(std::move(return_transaction_fee_))
    , nonce(std::move(nonce_))
    {}
};

}  // namespace zumo
