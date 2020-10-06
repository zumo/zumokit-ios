// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include <string>
#include <utility>

namespace zumo {

/**
 * Exchange status, such as 'PENDING', 'DEPOSITED' and 'CONFIRMED'.
 * <p>
 * Once exchange is submitted it has to be confirmed. Once exchange is confirmed its status will change from pending to confirmed.
 * <p>
 * See <a href="https://developers.zumo.money/docs/guides/make-exchanges#exchange-statuses">Make Exchanges</a> guide for details.
 */
struct ExchangeStatus final {

    /** Exchange has been paused by Transaction Service before being submitted to blockchain. */
    static std::string const PAUSED;

    /** Exchange has been rejected by Transaction Service before being submitted to blockchain. */
    static std::string const REJECTED;

    /** Deposit transaction has been submitted to blockchain. */
    static std::string const PENDING;

    /** Deposit transaction has been mined and exchange has been initiated. */
    static std::string const DEPOSITED;

    /** Exchange was confirmed. */
    static std::string const CONFIRMED;

    /** Exchange has failed. */
    static std::string const FAILED;

    /** Ethereum deposit transaction was overriden by sending the same transaction with higher gas price. */
    static std::string const RESUBMITTED;

    /**
     * Ethereum deposit transaction was overriden by a different transaction with higher gas price than
     * the previously submitted transaction and with with the same nonce as that previously submitted transaction.
     */
    static std::string const CANCELLED;
};

}  // namespace zumo
