#pragma once

#include "transaction_fee_rate.hpp"

#include <unordered_map>

namespace zumo {

typedef std::unordered_map<std::string, TransactionFeeRate> TransactionFeeRates;

}