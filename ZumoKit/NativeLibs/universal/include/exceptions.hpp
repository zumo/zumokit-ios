#pragma once

#include <exception>
#include <string>

namespace zumo {

class ZumoKitException : public std::exception {
  public:
    ZumoKitException(const std::string name, const std::string msg) : name_(name), msg_(msg) {}

    virtual char const *what() const noexcept { return msg_.c_str(); }
    const char *get_name() const { return name_.c_str(); }

  private:
    const std::string name_;
    const std::string msg_;
};

class WalletLimitExceededException : public ZumoKitException {
  public:
    WalletLimitExceededException()
        : ZumoKitException(
              "WalletLimitExceeded",
              "Only one wallet per currency is supported with this account type.")
    {
    }
};

class AuthNotFoundException : public ZumoKitException {
  public:
    AuthNotFoundException()
        : ZumoKitException("AuthNotFound", "Your previous session has expired. Please log in.")
    {
    }
};

class InvalidWordCountException : public ZumoKitException {
  public:
    InvalidWordCountException()
        : ZumoKitException(
              "InvalidWordCount",
              "Invalid length of mnemonic phrase. Mnemonic phrase "
              "should be 12, 15, 18, 21 or 24 words long.")
    {
    }
};

class NotEnoughRandomnessException : public ZumoKitException {
  public:
    NotEnoughRandomnessException()
        : ZumoKitException(
              "NotEnoughRandomness",
              "CSPRNG has not been seeded with enough randomness to ensure an "
              "unpredictable byte sequence.")
    {
    }
};

class InvalidPasswordException : public ZumoKitException {
  public:
    InvalidPasswordException()
        : ZumoKitException("invalid_password", "Incorrect password provided. Please try again.")
    {
    }
};

} // namespace zumo
