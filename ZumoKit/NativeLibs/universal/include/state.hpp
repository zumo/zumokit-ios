// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#pragma once

#include "account.hpp"
#include "exchange.hpp"
#include "exchange_rate.hpp"
#include "exchange_settings.hpp"
#include "fee_rates.hpp"
#include "stdx/optional.hpp"
#include "transaction.hpp"
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace zumo {

struct State final {
    std::vector<Account> accounts;
    std::vector<Transaction> transactions;
    std::vector<Exchange> exchanges;
    std::string token;
    std::experimental::optional<std::string> active_user_id;
    std::unordered_map<std::string, std::unordered_map<std::string, ExchangeRate>> exchange_rates;
    std::unordered_map<std::string, std::unordered_map<std::string, ExchangeSettings>> exchange_settings;
    std::unordered_map<std::string, FeeRates> fee_rates;
    std::vector<std::string> modulr_customer_on_networks;

    friend bool operator==(const State& lhs, const State& rhs);
    friend bool operator!=(const State& lhs, const State& rhs);

    State(std::vector<Account> accounts_,
          std::vector<Transaction> transactions_,
          std::vector<Exchange> exchanges_,
          std::string token_,
          std::experimental::optional<std::string> active_user_id_,
          std::unordered_map<std::string, std::unordered_map<std::string, ExchangeRate>> exchange_rates_,
          std::unordered_map<std::string, std::unordered_map<std::string, ExchangeSettings>> exchange_settings_,
          std::unordered_map<std::string, FeeRates> fee_rates_,
          std::vector<std::string> modulr_customer_on_networks_)
    : accounts(std::move(accounts_))
    , transactions(std::move(transactions_))
    , exchanges(std::move(exchanges_))
    , token(std::move(token_))
    , active_user_id(std::move(active_user_id_))
    , exchange_rates(std::move(exchange_rates_))
    , exchange_settings(std::move(exchange_settings_))
    , fee_rates(std::move(fee_rates_))
    , modulr_customer_on_networks(std::move(modulr_customer_on_networks_))
    {}
};

}  // namespace zumo
