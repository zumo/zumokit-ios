#pragma once

#include "exchange_setting.hpp"

#include <unordered_map>

namespace zumo {

typedef std::unordered_map<std::string, std::unordered_map<std::string, ExchangeSetting>>
    ExchangeSettings;

}