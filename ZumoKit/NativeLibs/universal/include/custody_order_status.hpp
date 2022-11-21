// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enums.djinni

#pragma once

#include <string>
#include <utility>

namespace zumo {

/** Custody order status, for example 'PENDING'. */
struct CustodyOrderStatus final {

    /** Custody order has been created and is awaiting command to be executed. */
    static std::string const NEW;

    /** Custody order has been submitted to blockchain. */
    static std::string const PENDING;

    /** Custody order was confirmed and added to blockchain. */
    static std::string const CONFIRMED;

    /** Custody order failed. */
    static std::string const FAILED;
};

}  // namespace zumo
