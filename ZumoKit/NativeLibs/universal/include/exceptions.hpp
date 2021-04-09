#pragma once

#include "zumo_kit_error.hpp"

#include <exception>
#include <string>

using namespace std;

namespace zumo {

const string normalize_code(const string code);

const string normalize_message(const string code, const string msg);

class ZumoKitException : public std::exception {
  public:
    ZumoKitException(
        const std::string type,
        const std::string code = "",
        const std::string msg = "")
        : type_(type), code_(normalize_code(code)), msg_(normalize_message(code, msg))
    {
    }

    ZumoKitException(const ZumoKitError &error)
        : ZumoKitException(
              error.type,
              error.code ? *error.code : "",
              error.message ? *error.message : "")
    {
    }

    const char *get_type() const { return type_.c_str(); }
    const char *get_code() const { return code_.c_str(); }
    virtual char const *what() const noexcept { return msg_.c_str(); }

    friend bool operator==(const ZumoKitException &lhs, const ZumoKitException &rhs);
    friend bool operator!=(const ZumoKitException &lhs, const ZumoKitException &rhs);

    friend std::ostream &operator<<(std::ostream &os, const ZumoKitException &ex);

  private:
    const std::string type_;
    const std::string code_;
    const std::string msg_;
};

class APIConnectionException : public ZumoKitException {
  public:
    APIConnectionException(const string code, const string message = "");
};

class APIException : public ZumoKitException {
  public:
    APIException(const string code, const string message = "");
};

class AuthenticationException : public ZumoKitException {
  public:
    AuthenticationException(const string code = "", const string message = "");
};

class WalletException : public ZumoKitException {
  public:
    WalletException(const string code, const string message = "");
};

class InvalidRequestException : public ZumoKitException {
  public:
    InvalidRequestException(const string code, const string message = "");
};

class RateLimitException : public ZumoKitException {
  public:
    RateLimitException(const string code, const string message = "");
};

class InvalidArgumentException : public ZumoKitException {
  public:
    InvalidArgumentException(const string code, const string message = "");
};

} // namespace zumo
