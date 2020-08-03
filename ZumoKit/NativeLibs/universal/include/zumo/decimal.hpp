#pragma once

#include "big_int.hpp"
#include <iostream>
#include <string>

namespace zumo {

class Decimal {
  public:
    Decimal(const std::string &decimal);

    Decimal(const char *decimal) : Decimal(std::string(decimal)) {}

    // decimal is represented as sign*mantissa*10^(-scale)
    Decimal(int n) : mantissa_(abs(n)), scale_(0), is_negative_(n < 0) {}

    Decimal(const BigInt &mantissa, uint64_t scale = 0, bool is_negative = false)
        : mantissa_(std::move(mantissa)), scale_(std::move(scale)),
          is_negative_(std::move(is_negative))
    {
    }

    Decimal scale_by_power_of_ten(int n) const;

    operator std::string() const;
    std::string to_string() const;
    std::string to_unsigned_string() const;
    BigInt to_big_int() const;

    friend Decimal operator*(const Decimal &a, const Decimal &b);
    friend Decimal operator+(const Decimal &a, const Decimal &b);
    friend Decimal operator-(const Decimal &a, const Decimal &b);
    friend bool operator==(const Decimal &lhs, const Decimal &rhs);
    friend bool operator!=(const Decimal &lhs, const Decimal &rhs);
    friend bool operator>(const Decimal &lhs, const Decimal &rhs);
    friend bool operator>=(const Decimal &lhs, const Decimal &rhs);
    friend bool operator<(const Decimal &lhs, const Decimal &rhs);
    friend bool operator<=(const Decimal &lhs, const Decimal &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Decimal &dt);

  private:
    BigInt mantissa_;
    int64_t scale_;
    bool is_negative_;
};

}