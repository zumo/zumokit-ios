#include "zumo/log_level.hpp"
#include "zumo/account.hpp"
#include "zumo/account_data_snapshot.hpp"
#include "zumo/account_type.hpp"
#include "zumo/address.hpp"
#include "zumo/card.hpp"
#include "zumo/card_details.hpp"
#include "zumo/card_status.hpp"
#include "zumo/card_type.hpp"
#include "zumo/composed_exchange.hpp"
#include "zumo/composed_transaction.hpp"
#include "zumo/currency_code.hpp"
#include "zumo/currency_type.hpp"
#include "zumo/decimal.hpp"
#include "zumo/exceptions.hpp"
#include "zumo/exchange.hpp"
#include "zumo/exchange_rate.hpp"
#include "zumo/exchange_setting.hpp"
#include "zumo/exchange_status.hpp"
#include "zumo/mnemonic_callback.hpp"
#include "zumo/network_type.hpp"
#include "zumo/success_callback.hpp"
#include "zumo/time_interval.hpp"
#include "zumo/transaction.hpp"
#include "zumo/transaction_direction.hpp"
#include "zumo/transaction_fee_rate.hpp"
#include "zumo/transaction_status.hpp"
#include "zumo/transaction_type.hpp"
#include "zumo/zumo_kit_error_code.hpp"
#include "zumo/zumo_kit_error_type.hpp"

namespace zumo {

typedef unordered_map<string, TransactionFeeRate> TransactionFeeRates;

typedef unordered_map<string, unordered_map<string, ExchangeSetting>> ExchangeSettings;

typedef unordered_map<string, unordered_map<string, ExchangeRate>> ExchangeRates;

typedef unordered_map<string, unordered_map<string, unordered_map<string, vector<ExchangeRate>>>>
    HistoricalExchangeRates;

} // namespace zumo