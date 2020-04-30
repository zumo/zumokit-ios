// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

#pragma once

#include <string>
#include <utility>

namespace zumo {

struct ZumoKitErrorCode final {

    static std::string const UNKNOWN_ERROR;

    static std::string const NOT_AUTHORIZED;

    static std::string const WALLET_LIMIT_EXCEEDED;

    static std::string const NO_WALLET_TO_RECOVER_FOUND;

    static std::string const INVALID_RECOVERY_PHRASE;

    static std::string const INVALID_MNEMONIC_WORD_COUNT;

    static std::string const INVALID_PASSWORD;

    static std::string const INVALID_NETWORK_TYPE;

    static std::string const BITCOIN_AMOUNT_OVERFLOW;

    static std::string const SIGNING_ERROR;

    static std::string const UTXO_SIGNING_ERROR;

    static std::string const INVALID_HD_WALLET_PATH;

    static std::string const CHANGE_ACCOUNT_NOT_FOUND;

    static std::string const ACCOUNT_NOT_FOUND;

    static std::string const KNOWN_TRANSACTION;

    static std::string const INVALID_TRANSACTION_VALUE;

    static std::string const INVALID_FEE_RATE;

    static std::string const INVALID_ADDRESS;

    static std::string const INSUFFICIENT_FUNDS;

    static std::string const NONCE_OVERFLOW;

    static std::string const GAS_TOO_LOW;

    static std::string const GAS_OVERFLOW;

    static std::string const NO_DESTINATION_ADDRESS;

    static std::string const DATA_OVERFLOW;

    static std::string const INCOMPATIBLE_NETWORK_TYPES;

    static std::string const INVALID_ACCOUNT_TYPE;

    static std::string const INVALID_EXCHANGE_RATE;

    static std::string const INVALID_EXCHANGE_FEES;

    static std::string const EXCHANGE_RETURN_VALUE_NEGATIVE;
};

}  // namespace zumo
