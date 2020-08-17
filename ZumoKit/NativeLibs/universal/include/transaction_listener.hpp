// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#pragma once

#include "stdx/optional.hpp"

namespace zumo {

struct Transaction;

/** Callback interface used by methods in User class. */
class TransactionListener {
public:
    virtual ~TransactionListener() {}

    virtual void update(const std::experimental::optional<Transaction> & transaction) = 0;
};

}  // namespace zumo
