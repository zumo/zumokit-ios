// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#pragma once

#include "account_crypto_properties.hpp"
#include "account_fiat_properties.hpp"
#include "stdx/optional.hpp"
#include "zumo/decimal.hpp"
#include <string>
#include <utility>

namespace zumo {

/** Record containing account details. */
struct Account final {
    /** Unique account identifier. */
    std::string id;
    /**
     * Account currency type.
     * @see CurrencyType
     */
    std::string currency_type;
    /**
     * Account currency code.
     * @see CurrencyCode
     */
    std::string currency_code;
    /**
     * Account network type.
     * @see NetworkType
     */
    std::string network;
    /**
     * Account type.
     * @see AccountType
     */
    std::string type;
    /** Account balance. */
    ::zumo::Decimal balance;
    /** Account has associated nominated account. */
    bool has_nominated_account;
    /** Account crypto properties if account is a crypto account, otherwise null. */
    std::experimental::optional<AccountCryptoProperties> crypto_properties;
    /** Account fiat properties if account is a fiat account, otherwise null. */
    std::experimental::optional<AccountFiatProperties> fiat_properties;

    friend bool operator==(const Account& lhs, const Account& rhs);
    friend bool operator!=(const Account& lhs, const Account& rhs);

    Account(std::string id_,
            std::string currency_type_,
            std::string currency_code_,
            std::string network_,
            std::string type_,
            ::zumo::Decimal balance_,
            bool has_nominated_account_,
            std::experimental::optional<AccountCryptoProperties> crypto_properties_,
            std::experimental::optional<AccountFiatProperties> fiat_properties_)
    : id(std::move(id_))
    , currency_type(std::move(currency_type_))
    , currency_code(std::move(currency_code_))
    , network(std::move(network_))
    , type(std::move(type_))
    , balance(std::move(balance_))
    , has_nominated_account(std::move(has_nominated_account_))
    , crypto_properties(std::move(crypto_properties_))
    , fiat_properties(std::move(fiat_properties_))
    {}
};

}  // namespace zumo
