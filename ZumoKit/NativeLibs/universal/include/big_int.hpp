#pragma once

#include <stdlib.h>
#include <string>

namespace zumo {

class BigInt {
  public:
    BigInt(int n);

    BigInt(const std::string &big_int);

    BigInt(const char *big_int) : BigInt(std::string(big_int)) {}

    std::string to_string() const;

    bool is_int64() const;

    int64_t to_int64() const;

    friend BigInt operator*(const BigInt &a, const BigInt &b);
    friend BigInt operator+(const BigInt &a, const BigInt &b);
    friend BigInt operator-(const BigInt &a, const BigInt &b);
    friend BigInt operator/(const BigInt &a, const int b);
    friend int operator%(const BigInt &a, const int b);
    friend bool operator==(const BigInt &lhs, const BigInt &rhs);
    friend bool operator!=(const BigInt &lhs, const BigInt &rhs);
    friend bool operator>(const BigInt &lhs, const BigInt &rhs);
    friend bool operator>=(const BigInt &lhs, const BigInt &rhs);
    friend bool operator<(const BigInt &lhs, const BigInt &rhs);
    friend bool operator<=(const BigInt &lhs, const BigInt &rhs);

  private:
    std::string big_int_;
};

const BigInt ZERO = BigInt(0);

}