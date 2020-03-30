#pragma once

#include <exception>
#include <string>

namespace zumo {

class ZumoKitException : public std::exception {
  public:
    ZumoKitException(const std::string type, const std::string code, const std::string msg)
        : type_(type), code_(code), msg_(msg)
    {
    }

    const char *get_type() const { return type_.c_str(); }
    const char *get_code() const { return code_.c_str(); }
    virtual char const *what() const noexcept { return msg_.c_str(); }

  private:
    const std::string type_;
    const std::string code_;
    const std::string msg_;
};

class AuthNotFoundException : public ZumoKitException {
  public:
    AuthNotFoundException();
};

class InvalidWordCountException : public ZumoKitException {
  public:
    InvalidWordCountException();
};

class InvalidPasswordException : public ZumoKitException {
  public:
    InvalidPasswordException();
};

} // namespace zumo
