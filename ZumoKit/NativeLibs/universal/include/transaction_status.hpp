// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enums.djinni

#pragma once

#include <string>
#include <utility>

namespace zumo {

/**
 * Transaction status, such as 'PENDING' and 'CONFIRMED'.
 * <p>
 * Once transaction is submitted it has to be confirmed. This might take variable amount of time depending on the selected fee rate.
 * Once a transaction is confirmed its status will change from pending to confirmed.
 * <p>
 * See <a target="_top" href="https://developers.zumo.money/docs/guides/send-transactions#transaction-statuses">Send Transactions</a> guide for details.
 */
struct TransactionStatus final {

    /** Transaction has been paused by Transaction Service before being submitted to blockchain. */
    static std::string const PAUSED;

    /** Transaction has been rejected by Transaction Service before being submitted to blockchain. */
    static std::string const REJECTED;

    /** Transaction has been submitted to blockchain. */
    static std::string const PENDING;

    /** Transacion was confirmed and added to blockchain. */
    static std::string const CONFIRMED;

    /** Transaction failed. */
    static std::string const FAILED;

    /** Ethereum transaction was overriden by sending the same transaction with higher gas price. */
    static std::string const RESUBMITTED;

    /**
     * Ethereum transaction was overriden by a different transaction with higher gas price than the previously
     * submitted transaction and with with the same nonce as that previously submitted transaction.
     */
    static std::string const CANCELLED;
};

}  // namespace zumo
