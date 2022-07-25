// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include "decimal.hpp"
#include <optional>
#include <string>
#include <unordered_map>
#include <utility>

namespace zumo {

/** Record containing transaction amount details. */
struct TransactionAmount final {
    /**
     * Direction, either 'SENT' or 'RECEIVED'.
     * @see TransactionDirection
     */
    std::string direction;
    /** User id or null if it is external user. */
    std::optional<std::string> user_id;
    /** User integrator id or null if it is external user. */
    std::optional<std::string> user_integrator_id;
    /** Account id or null if it is external user. */
    std::optional<std::string> account_id;
    /** Amount in transaction currency or null if transaction is Ethereum contract deploy. */
    std::optional<::zumo::Decimal> amount;
    /**
     * Amount in fiat currencies at the time of the transaction submission.
     * @see CurrencyCode
     */
    std::optional<std::unordered_map<std::string, double>> fiat_amount;
    /** Blockchain address or null.  */
    std::optional<std::string> address;
    /** Indicates if this amount represents change amount. */
    bool is_change;
    /** Fiat account number or null. */
    std::optional<std::string> account_number;
    /** Fiat account sort code or null. */
    std::optional<std::string> sort_code;
    /** Fiat account BIC or null. */
    std::optional<std::string> bic;
    /** Fiat account IBAN or null. */
    std::optional<std::string> iban;

    friend bool operator==(const TransactionAmount& lhs, const TransactionAmount& rhs);
    friend bool operator!=(const TransactionAmount& lhs, const TransactionAmount& rhs);

    TransactionAmount(std::string direction_,
                      std::optional<std::string> user_id_,
                      std::optional<std::string> user_integrator_id_,
                      std::optional<std::string> account_id_,
                      std::optional<::zumo::Decimal> amount_,
                      std::optional<std::unordered_map<std::string, double>> fiat_amount_,
                      std::optional<std::string> address_,
                      bool is_change_,
                      std::optional<std::string> account_number_,
                      std::optional<std::string> sort_code_,
                      std::optional<std::string> bic_,
                      std::optional<std::string> iban_)
    : direction(std::move(direction_))
    , user_id(std::move(user_id_))
    , user_integrator_id(std::move(user_integrator_id_))
    , account_id(std::move(account_id_))
    , amount(std::move(amount_))
    , fiat_amount(std::move(fiat_amount_))
    , address(std::move(address_))
    , is_change(std::move(is_change_))
    , account_number(std::move(account_number_))
    , sort_code(std::move(sort_code_))
    , bic(std::move(bic_))
    , iban(std::move(iban_))
    {}
};

}  // namespace zumo
