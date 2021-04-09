// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

#pragma once

#include <string>
#include <utility>

namespace zumo {

/**
 * The code of error returned. Some errors that could be handled programmatically (e.g., balance too low)
 * include an error code — a short string with a brief explanation — as a value for code.
 * See <a target="_top" href="https://developers.zumo.money/docs/guides/handling-errors">Handling Errors</a> for details.
 */
struct ZumoKitErrorCode final {

    /** Unknown error has occured. */
    static std::string const UNKNOWN_ERROR;

    /** New account could not be created. Account already exists. */
    static std::string const ACCOUNT_LIMIT_EXCEEDED;

    /** Could not make user fiat customer. User is already fiat customer. */
    static std::string const ALREADY_FIAT_CUSTOMER;

    /** Requested account not found. */
    static std::string const ACCOUNT_NOT_FOUND;

    /** Amount not set. Either send max has to be enabled or send max set. */
    static std::string const AMOUNT_NOT_SET;

    /** Invalid response received from ZumoKit API. */
    static std::string const API_SERVICE_ERROR;

    /** Requested card not found. */
    static std::string const CARD_NOT_FOUND;

    /** Invalid response received from ZumoKit Card Service API. */
    static std::string const CARD_SERVICE_ERROR;

    /** Requested change account not found. */
    static std::string const CHANGE_ACCOUNT_NOT_FOUND;

    /** Change output index out of range. */
    static std::string const CHANGE_INDEX_OUT_OF_RANGE;

    /**
     * Transaction data overflow.
     * Maximum data size supported by RLP encoding exceeds 16000000 bytes.
     */
    static std::string const DATA_OVERFLOW;

    /** Cannot set data when send max enabled. */
    static std::string const DATA_PROVIDED_WHEN_SEND_MAX_SET;

    /** Destination cannot be set when withdrawing funds to nominated account. */
    static std::string const DESTINATION_PROVIDED_WHEN_WITHDRAW_SET;

    /** Exchange amount too low. */
    static std::string const EXCHANGE_AMOUNT_TOO_LOW;

    /** Ethereum transaction data is not supported yet. */
    static std::string const ETHEREUM_TRANSACTION_DATA_NOT_SUPPORTED;

    /** Exchange amount too low. Fees exceed return value. */
    static std::string const EXCHANGE_RETURN_VALUE_NEGATIVE;

    /** Invalid account provided. Fiat accounted expected. */
    static std::string const FIAT_ACCOUNT_EXPECTED;

    /** Gas too long. Cumulative gas limit and gas price should not exceed 30 bytes. */
    static std::string const GAS_OVERFLOW;

    /** Gas too low. Gas price and gas limit should be higher than 0. */
    static std::string const GAS_TOO_LOW;

    /** Change account and source accounts have to be on the same network. */
    static std::string const INCOMPATIBLE_NETWORK_TYPES;

    /**
     * Unknown error has occured
     * Incorrect account selected.
     * Account currency does not match the requeirements of requested operation.
     */
    static std::string const INCORRECT_ACCOUNT_SELECTED;

    /**
     * Incorrect change account selected.
     * Change account should be Bitcoin account on the same network as source account
     */
    static std::string const INCORRECT_CHANGE_ACCOUNT_SELECTED;

    /** Insufficient funds for exchange value and network fees. */
    static std::string const INSUFFICIENT_FUNDS_FOR_EXCHANGE;

    /** Insufficient funds for transaction value and network fees. */
    static std::string const INSUFFICIENT_FUNDS_FOR_TRANSACTION;

    /** Value exceeds maximum 63 bit precision. */
    static std::string const INT64_OVERFLOW;

    /** Account type not supported by the operation. */
    static std::string const INVALID_ACCOUNT_TYPE;

    /** Destination address is invalid. */
    static std::string const INVALID_ADDRESS;

    /** Invalid response received from API. */
    static std::string const INVALID_API_RESPONSE;

    /** Invalid or missing Zumo Exchange Service address. */
    static std::string const INVALID_EXCHANGE_ADDRESS;

    /** Mismatch between exchange rate and selected accounts. */
    static std::string const INVALID_EXCHANGE_RATE;

    /** Mismatch between exchange setting and selected accounts. */
    static std::string const INVALID_EXCHANGE_SETTING;

    /** Requested private key derivation path is invalid. */
    static std::string const INVALID_HD_WALLET_PATH;

    /** Invalid metadata. Metadata must be a valid JSON. */
    static std::string const INVALID_METADATA;

    /** Invalid mnemonic phrase. */
    static std::string const INVALID_MNEMONIC;

    /**
     * Invalid length of mnemonic phrase.
     * Mnemonic phrase should be 12, 15, 18, 21 or 24 words long.
     */
    static std::string const INVALID_MNEMONIC_WORD_COUNT;

    /** Network type not supported by requested operation. */
    static std::string const INVALID_NETWORK_TYPE;

    /** "Incorrect password provided. */
    static std::string const INVALID_PASSWORD;

    /** "The provided recovery phrase does not correspond to existing wallet." */
    static std::string const INVALID_RECOVERY_PHRASE;

    /** Invalid transaction type. */
    static std::string const INVALID_TRANSACTION_TYPE;

    /** Invalid transaction value. */
    static std::string const INVALID_TRANSACTION_VALUE;

    /** Invalid user token set. User token set should be a valid stringified JSON with accessToken, refreshToken and expiresIn properties. */
    static std::string const INVALID_USER_TOKEN_SET;

    /** Invalid response received from WebSocket. */
    static std::string const INVALID_WEBSOCKET_RESPONSE;

    /** Exchange already submitted. */
    static std::string const KNOWN_EXCHANGE;

    /** Transaction already submitted. */
    static std::string const KNOWN_TRANSACTION;

    /** No destination address. In case no transaction data is provided, destination address is obligatory. */
    static std::string const NO_DESTINATION_ADDRESS;

    /** No nominated account found. */
    static std::string const NO_NOMINATED_ACCOUNT_FOUND;

    /** Requested operation requies existance of a wallet. No wallet was found. */
    static std::string const NO_WALLET_FOUND;

    /** Nonce too long. Maximum supported nonce size is 32 bytes. */
    static std::string const NONCE_OVERFLOW;

    /** User session has expired. */
    static std::string const NOT_AUTHORIZED;

    /** Insufficient funds to pay the transaction fee. */
    static std::string const SEND_MAX_INSUFFICIENT_FUNDS_FOR_FEE;

    /** Transaction amount is too small to send after the fee has been deducted. */
    static std::string const SEND_MAX_INSUFFICIENT_FUNDS_FOR_TRANSACTION;

    /** Exchange amount is insufficient to make a minimum exchange. */
    static std::string const SEND_MAX_INSUFFICIENT_FUNDS_FOR_EXCHANGE;

    /** Something went wrong signing transaction. */
    static std::string const SIGNING_ERROR;

    /** Transaction amount exceeds maximum precision. */
    static std::string const TRANSACTION_AMOUNT_OVERFLOW;

    /** Transaction amount too small to send. */
    static std::string const TRANSACTION_AMOUNT_TOO_SMALL;

    /** Invalid response received from ZumoKit Transaction Service API. */
    static std::string const TRANSACTION_SERVICE_ERROR;

    /** Resulting transaction is too large. */
    static std::string const TRANSACTION_TOO_LARGE;

    /** Fiat account could no be created. User is not yet a fiat customer on selected network. */
    static std::string const USER_NOT_FIAT_CUSTOMER;

    /** Unspent transaction output could not be signed. */
    static std::string const UTXO_SIGNING_ERROR;

    /** Cannot set amount when send max enabled. Set amount to null if trying t send maximum funds. */
    static std::string const AMOUNT_PROVIDED_WHEN_SEND_MAX_SET;

    /** Wallet could not be created. Wallet already exists. */
    static std::string const WALLET_LIMIT_EXCEEDED;
};

}  // namespace zumo
