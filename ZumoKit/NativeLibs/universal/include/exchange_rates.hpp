#pragma once

#include "exchange_rate.hpp"

#include <unordered_map>

namespace zumo {

typedef std::unordered_map<std::string, std::unordered_map<std::string, ExchangeRate>>
    ExchangeRates;

}