#include "account.hpp"
#include "account_crypto_properties.hpp"
#include "account_data_snapshot.hpp"
#include "account_fiat_properties.hpp"
#include "address.hpp"
#include "card.hpp"
#include "card_details.hpp"
#include "composed_exchange.hpp"
#include "composed_transaction.hpp"
#include "exchange.hpp"
#include "exchange_rate.hpp"
#include "exchange_rates.hpp"
#include "exchange_setting.hpp"
#include "exchange_settings.hpp"
#include "historical_exchange_rates.hpp"
#include "quote.hpp"
#include "transaction_card_properties.hpp"
#include "transaction_crypto_properties.hpp"
#include "transaction_fee_rate.hpp"
#include "transaction_fee_rates.hpp"
#include "transaction_fiat_properties.hpp"

#include <ostream>

namespace zumo {

std::ostream &operator<<(std::ostream &os, const Account &account);

std::ostream &operator<<(std::ostream &os, const AccountCryptoProperties &properties);

std::ostream &operator<<(std::ostream &os, const AccountFiatProperties &properties);

std::ostream &operator<<(std::ostream &os, const AccountDataSnapshot &snapshot);

std::ostream &operator<<(std::ostream &os, const Address &address);

std::ostream &operator<<(std::ostream &os, const Card &address);

std::ostream &operator<<(std::ostream &os, const CardDetails &obj);

std::ostream &operator<<(std::ostream &os, const ExchangeRate &exchange_rate);

std::ostream &operator<<(std::ostream &os, const ExchangeRates &exchange_rates);

std::ostream &operator<<(std::ostream &os, const ExchangeSetting &exchange_setting);

std::ostream &operator<<(std::ostream &os, const ExchangeSettings &exchange_settings);

std::ostream &operator<<(std::ostream &os, const TransactionFeeRate &exchange_settings);

std::ostream &operator<<(std::ostream &os, const TransactionFeeRates &exchange_settings);

std::ostream &operator<<(std::ostream &os, const ComposedTransaction &composed_transaction);

std::ostream &operator<<(std::ostream &os, const Transaction &transaction);

std::ostream &operator<<(std::ostream &os, const TransactionCardProperties &properties);

std::ostream &operator<<(std::ostream &os, const TransactionFiatProperties &properties);

std::ostream &operator<<(std::ostream &os, const TransactionCryptoProperties &properties);

std::ostream &operator<<(std::ostream &os, const Quote &Quote);

std::ostream &operator<<(std::ostream &os, const ComposedExchange &composed_exchange);

std::ostream &operator<<(std::ostream &os, const Exchange &exchange);

} // namespace zumo