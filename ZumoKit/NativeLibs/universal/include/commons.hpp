#include "account.hpp"
#include "account_data_snapshot.hpp"
#include "account_type.hpp"
#include "address.hpp"
#include "card.hpp"
#include "card_details.hpp"
#include "card_status.hpp"
#include "card_type.hpp"
#include "composed_exchange.hpp"
#include "composed_transaction.hpp"
#include "currency_code.hpp"
#include "currency_type.hpp"
#include "decimal.hpp"
#include "exceptions.hpp"
#include "exchange.hpp"
#include "exchange_rate.hpp"
#include "exchange_setting.hpp"
#include "exchange_status.hpp"
#include "mnemonic_callback.hpp"
#include "network_type.hpp"
#include "success_callback.hpp"
#include "time_interval.hpp"
#include "transaction.hpp"
#include "transaction_direction.hpp"
#include "transaction_fee_rate.hpp"
#include "transaction_status.hpp"
#include "transaction_type.hpp"
#include "zumo_kit_error_code.hpp"
#include "zumo_kit_error_type.hpp"

namespace zumo {

typedef unordered_map<string, TransactionFeeRate> TransactionFeeRates;

typedef unordered_map<string, unordered_map<string, ExchangeSetting>> ExchangeSettings;

typedef unordered_map<string, unordered_map<string, ExchangeRate>> ExchangeRates;

typedef unordered_map<string, unordered_map<string, unordered_map<string, vector<ExchangeRate>>>>
    HistoricalExchangeRates;

} // namespace zumo