// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#pragma once

#include "account.hpp"
#include "exchange_rate.hpp"
#include "exchange_settings.hpp"
#include "stdx/optional.hpp"
#include "zumo/decimal.hpp"
#include <string>
#include <utility>

namespace zumo {

/** Result of the compose exchange method on @link wallet object. */
struct ComposedExchange final {
    /** Signed transaction for a crypto transaction, null otherwise. */
    std::experimental::optional<std::string> signed_transaction;
    /** Source account. */
    Account deposit_account;
    /** Target account. */
    Account withdraw_account;
    /** Exchange rate used composing exchange. */
    ExchangeRate exchange_rate;
    /** Exchange settings used composing exchange. */
    ExchangeSettings exchange_settings;
    /**
     * Zumo Exchange Service wallet address where outgoing crypto funds were deposited,
     * null for exchanges from fiat currencies.
     */
    std::experimental::optional<std::string> exchange_address;
    /** Exchange value in source account currency. */
    ::zumo::Decimal value;
    /**
     * Amount that user receives, calculated as <code>value X exchangeRate X (1 - feeRate) - withdrawFee</code>.
     * @see exchange_settings
     */
    ::zumo::Decimal return_value;
    /** Outgoing transaction fee. */
    ::zumo::Decimal deposit_fee;
    /**
     * Exchange fee, calculated as <code>value X exchangeRate X feeRate</code>.
     * @see exchange_settings
     */
    ::zumo::Decimal exchange_fee;
    /**
     * Return transaction fee.
     * @see exchange_settings
     */
    ::zumo::Decimal withdraw_fee;
    /** Unique nonce used to prevent double spend. */
    std::experimental::optional<std::string> nonce;

    friend bool operator==(const ComposedExchange& lhs, const ComposedExchange& rhs);
    friend bool operator!=(const ComposedExchange& lhs, const ComposedExchange& rhs);

    ComposedExchange(std::experimental::optional<std::string> signed_transaction_,
                     Account deposit_account_,
                     Account withdraw_account_,
                     ExchangeRate exchange_rate_,
                     ExchangeSettings exchange_settings_,
                     std::experimental::optional<std::string> exchange_address_,
                     ::zumo::Decimal value_,
                     ::zumo::Decimal return_value_,
                     ::zumo::Decimal deposit_fee_,
                     ::zumo::Decimal exchange_fee_,
                     ::zumo::Decimal withdraw_fee_,
                     std::experimental::optional<std::string> nonce_)
    : signed_transaction(std::move(signed_transaction_))
    , deposit_account(std::move(deposit_account_))
    , withdraw_account(std::move(withdraw_account_))
    , exchange_rate(std::move(exchange_rate_))
    , exchange_settings(std::move(exchange_settings_))
    , exchange_address(std::move(exchange_address_))
    , value(std::move(value_))
    , return_value(std::move(return_value_))
    , deposit_fee(std::move(deposit_fee_))
    , exchange_fee(std::move(exchange_fee_))
    , withdraw_fee(std::move(withdraw_fee_))
    , nonce(std::move(nonce_))
    {}
};

}  // namespace zumo
