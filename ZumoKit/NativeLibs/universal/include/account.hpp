// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include "account_crypto_properties.hpp"
#include "account_fiat_properties.hpp"
#include "card.hpp"
#include "decimal.hpp"
#include <optional>
#include <string>
#include <utility>
#include <vector>

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
    /**
     * Custody type.
     * @see CustodyType
     */
    std::string custody_type;
    /** Account balance. */
    ::zumo::Decimal balance;
    /** Account ledger balance. */
    ::zumo::Decimal ledger_balance;
    /** Account available balance, i.e. ledger balance minus pending transactions. */
    ::zumo::Decimal available_balance;
    /** Overdraft limit. */
    ::zumo::Decimal overdraft_limit;
    /** Account has associated nominated account. */
    bool has_nominated_account;
    /** Account crypto properties if account is a crypto account, otherwise null. */
    std::optional<AccountCryptoProperties> crypto_properties;
    /** Account fiat properties if account is a fiat account, otherwise null. */
    std::optional<AccountFiatProperties> fiat_properties;
    /** Cards associated with this account. */
    std::vector<Card> cards;

    friend bool operator==(const Account& lhs, const Account& rhs);
    friend bool operator!=(const Account& lhs, const Account& rhs);

    Account(std::string id_,
            std::string currency_type_,
            std::string currency_code_,
            std::string network_,
            std::string type_,
            std::string custody_type_,
            ::zumo::Decimal balance_,
            ::zumo::Decimal ledger_balance_,
            ::zumo::Decimal available_balance_,
            ::zumo::Decimal overdraft_limit_,
            bool has_nominated_account_,
            std::optional<AccountCryptoProperties> crypto_properties_,
            std::optional<AccountFiatProperties> fiat_properties_,
            std::vector<Card> cards_)
    : id(std::move(id_))
    , currency_type(std::move(currency_type_))
    , currency_code(std::move(currency_code_))
    , network(std::move(network_))
    , type(std::move(type_))
    , custody_type(std::move(custody_type_))
    , balance(std::move(balance_))
    , ledger_balance(std::move(ledger_balance_))
    , available_balance(std::move(available_balance_))
    , overdraft_limit(std::move(overdraft_limit_))
    , has_nominated_account(std::move(has_nominated_account_))
    , crypto_properties(std::move(crypto_properties_))
    , fiat_properties(std::move(fiat_properties_))
    , cards(std::move(cards_))
    {}
};

}  // namespace zumo
