#pragma once

#include "big_int.hpp"
#include <iostream>
#include <string>

namespace zumo {

class Decimal {
  public:
    // decimal is represented as sign*mantissa*10^(-scale)
    Decimal(const BigInt &mantissa, uint64_t scale = 0, bool is_negative = false);

    Decimal(const std::string &decimal);

    Decimal(const char *decimal) : Decimal(std::string(decimal)) {}

    Decimal(int n) : mantissa_(abs(n)), scale_(0), is_negative_(n < 0) {}

    Decimal scale_by_power_of_ten(int n) const;

    std::string to_string() const;

    std::string to_unsigned_string() const;

    bool is_big_int() const;

    BigInt to_big_int() const;

    int int_value() const;

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