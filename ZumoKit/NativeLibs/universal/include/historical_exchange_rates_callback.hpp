// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#pragma once

#include "zumo/exceptions.hpp"
#include <string>
#include <unordered_map>
#include <vector>

namespace zumo {

struct ExchangeRate;

class HistoricalExchangeRatesCallback {
public:
    virtual ~HistoricalExchangeRatesCallback() {}

    virtual void on_error(const ::zumo::ZumoKitException & e) = 0;

    virtual void on_success(const std::unordered_map<std::string, std::vector<std::unordered_map<std::string, std::unordered_map<std::string, ExchangeRate>>>> & historical_exchange_rates) = 0;
};

}  // namespace zumo
