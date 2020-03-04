// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

#pragma once

#include "stdx/optional.hpp"
#include <string>
#include <utility>

namespace zumo {

struct ZumoKitError final {

    static std::string const API_CONNECTION_ERROR;

    static std::string const API_ERROR;

    static std::string const AUTHENTICATION_ERROR;

    static std::string const WALLET_ERROR;

    static std::string const TRANSACTION_ERROR;

    static std::string const INVALID_REQUEST_ERROR;

    static std::string const RATE_LIMIT_ERROR;

    static std::string const INVALID_ARGUMENT_ERROR;
    std::string type;
    std::experimental::optional<std::string> code;
    std::experimental::optional<std::string> message;

    friend bool operator==(const ZumoKitError& lhs, const ZumoKitError& rhs);
    friend bool operator!=(const ZumoKitError& lhs, const ZumoKitError& rhs);

    ZumoKitError(std::string type_,
                 std::experimental::optional<std::string> code_,
                 std::experimental::optional<std::string> message_)
    : type(std::move(type_))
    , code(std::move(code_))
    , message(std::move(message_))
    {}
};

}  // namespace zumo
