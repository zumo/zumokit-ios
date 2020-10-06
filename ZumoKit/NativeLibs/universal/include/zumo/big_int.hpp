#pragma once

#include <stdlib.h>
#include <string>

namespace zumo {

class BigInt {
  public:
    BigInt(int n);

    BigInt(const std::string &big_int);

    BigInt(const char *big_int) : BigInt(std::string(big_int)) {}

    operator std::string() const;

    friend BigInt operator*(const BigInt &a, const BigInt &b);
    friend BigInt operator+(const BigInt &a, const BigInt &b);
    friend BigInt operator-(const BigInt &a, const BigInt &b);
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