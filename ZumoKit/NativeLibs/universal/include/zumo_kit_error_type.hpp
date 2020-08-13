// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

#pragma once

#include <string>
#include <utility>

namespace zumo {

/**
 * The type of error returned. In case of wallet errors, these errors can be safely displayed to the end users.
 * See <a href="https://developers.zumo.money/docs/guides/handling-errors">Handling Errors</a> for details.
 */
struct ZumoKitErrorType final {

    /** Failure to connect to ZumoKit’s API. */
    static std::string const API_CONNECTION_ERROR;

    /** Default error if something goes wrong on our side. */
    static std::string const API_ERROR;

    /** Failed to authenticate with ZumoKit's API. */
    static std::string const AUTHENTICATION_ERROR;

    /**
     * Wallet errors are the most common type of error you should expect to handle.
     * They result when user's wallet action can't be performed, e.g. balance too low or
     * invalid wallet password are such errors.
     */
    static std::string const WALLET_ERROR;

    /** Invalid request errors arise when request to API has invalid parameters. */
    static std::string const INVALID_REQUEST_ERROR;

    /** Too many requests hit the API too quickly. */
    static std::string const RATE_LIMIT_ERROR;

    /**
     * Errors triggered when failing to validate arguments,
     * e.g. when a destination address is invalid.
     */
    static std::string const INVALID_ARGUMENT_ERROR;
};

}  // namespace zumo
