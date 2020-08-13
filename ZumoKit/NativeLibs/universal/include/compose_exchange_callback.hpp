// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#pragma once

#include "zumo/exceptions.hpp"

namespace zumo {

struct ComposedExchange;

/** Callback interface used by methods in @link wallet class. */
class ComposeExchangeCallback {
public:
    virtual ~ComposeExchangeCallback() {}

    virtual void on_error(const ::zumo::ZumoKitException & e) = 0;

    virtual void on_success(const ComposedExchange & composed_exchange) = 0;
};

}  // namespace zumo
