// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include "decimal.hpp"
#include <cstdint>
#include <string>
#include <utility>

namespace zumo {

/** Record containing Zumo exchange rate quote used in making exchanges. */
struct Quote final {
    /** Identifier. */
    std::string id;
    /** Epoch timestamp representing expiration time of this quote. */
    int32_t expire_time;
    /**
     * Deposit currency.
     * @see CurrencyCode
     */
    std::string from_currency;
    /**
     * Target currency.
     * @see CurrencyCode
     */
    std::string to_currency;
    /** Deposit amount to be exchanged to target currency. */
    ::zumo::Decimal deposit_amount;
    /** Value of 1 unit of deposit currency in target currency. */
    ::zumo::Decimal value;

    friend bool operator==(const Quote& lhs, const Quote& rhs);
    friend bool operator!=(const Quote& lhs, const Quote& rhs);

    Quote(std::string id_,
          int32_t expire_time_,
          std::string from_currency_,
          std::string to_currency_,
          ::zumo::Decimal deposit_amount_,
          ::zumo::Decimal value_)
    : id(std::move(id_))
    , expire_time(std::move(expire_time_))
    , from_currency(std::move(from_currency_))
    , to_currency(std::move(to_currency_))
    , deposit_amount(std::move(deposit_amount_))
    , value(std::move(value_))
    {}
};

}  // namespace zumo
