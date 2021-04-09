#pragma once

#include "exchange_rate.hpp"

#include <unordered_map>
#include <vector>

namespace zumo {

typedef std::unordered_map<
    std::string,
    std::unordered_map<std::string, std::unordered_map<std::string, std::vector<ExchangeRate>>>>
    HistoricalExchangeRates;

}