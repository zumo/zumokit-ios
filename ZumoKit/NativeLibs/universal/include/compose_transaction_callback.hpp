// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#pragma once

#include "zumo/exceptions.hpp"

namespace zumo {

struct ComposedTransaction;

class ComposeTransactionCallback {
public:
    virtual ~ComposeTransactionCallback() {}

    virtual void on_error(const ::zumo::ZumoKitException & e) = 0;

    virtual void on_success(const ComposedTransaction & composed_transaction) = 0;
};

}  // namespace zumo
