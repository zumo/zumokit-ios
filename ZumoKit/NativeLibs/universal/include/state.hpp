// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#pragma once

#include "account.hpp"
#include "exchange.hpp"
#include "exchange_rate.hpp"
#include "fee_rates.hpp"
#include "stdx/optional.hpp"
#include "sync_status.hpp"
#include "transaction.hpp"
#include "tx_service_connection.hpp"
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
    std::unordered_map<std::string, std::unordered_map<std::string, ExchangeRate>> exchange_rate;
    std::string bitcoin_deposit_address;
    /** should be moved to internal state */
    std::string ethereum_deposit_address;
    /** should be moved to internal state */
    std::string exchange_rates;
    TxServiceConnection tx_service_connection;
    std::unordered_map<std::string, FeeRates> fee_rates;
    SyncStatus sync_status;

    friend bool operator==(const State& lhs, const State& rhs);
    friend bool operator!=(const State& lhs, const State& rhs);

    State(std::vector<Account> accounts_,
          std::vector<Transaction> transactions_,
          std::vector<Exchange> exchanges_,
          std::string token_,
          std::experimental::optional<std::string> active_user_id_,
          std::unordered_map<std::string, std::unordered_map<std::string, ExchangeRate>> exchange_rate_,
          std::string bitcoin_deposit_address_,
          std::string ethereum_deposit_address_,
          std::string exchange_rates_,
          TxServiceConnection tx_service_connection_,
          std::unordered_map<std::string, FeeRates> fee_rates_,
          SyncStatus sync_status_)
    : accounts(std::move(accounts_))
    , transactions(std::move(transactions_))
    , exchanges(std::move(exchanges_))
    , token(std::move(token_))
    , active_user_id(std::move(active_user_id_))
    , exchange_rate(std::move(exchange_rate_))
    , bitcoin_deposit_address(std::move(bitcoin_deposit_address_))
    , ethereum_deposit_address(std::move(ethereum_deposit_address_))
    , exchange_rates(std::move(exchange_rates_))
    , tx_service_connection(std::move(tx_service_connection_))
    , fee_rates(std::move(fee_rates_))
    , sync_status(std::move(sync_status_))
    {}
};

}  // namespace zumo
