// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include "decimal.hpp"
#include <cstdint>
#include <optional>
#include <string>
#include <utility>
#include <vector>

namespace zumo {

/** Record containing custody order. */
struct CustodyOrder final {
    /** Identifier. */
    std::string id;
    /**
     * Custody order type.
     * @see CustodyOrderType
     */
    std::string type;
    /**
     * Transaction status.
     * @see CustodyOrder
     */
    std::string status;
    /** Custody order amount, null if not known yet. */
    std::optional<::zumo::Decimal> amount;
    /** Flag indicating if fees are included in order amount. */
    bool fee_in_amount;
    /** Estimated custody order fees. */
    std::optional<::zumo::Decimal> estimated_fees;
    /** Actual custody order fees, null if not known yet.  */
    std::optional<::zumo::Decimal> fees;
    /** Crypto addresses from which funds where received, if any. */
    std::optional<std::vector<std::string>> from_addresses;
    /** Debit Account identifier, if applicable.  */
    std::optional<std::string> from_account_id;
    /** Debit Account's user identifier, if applicable.  */
    std::optional<std::string> from_user_id;
    /** Debit Account's user integrator identifier, if applicable.  */
    std::optional<std::string> from_user_integrator_id;
    /** Destination crypto address, if applicable. */
    std::optional<std::string> to_address;
    /** Credit Account identifier, if applicable. */
    std::optional<std::string> to_account_id;
    /** Credit Account's user identifier, if applicable.  */
    std::optional<std::string> to_user_id;
    /** Credit Account's user integrator identifier, if applicable.  */
    std::optional<std::string> to_user_integrator_id;
    /** Epoch timestamp when custody order was created.  */
    int32_t created_at;
    /** Epoch timestamp when custody order was updated.  */
    int32_t updated_at;

    friend bool operator==(const CustodyOrder& lhs, const CustodyOrder& rhs);
    friend bool operator!=(const CustodyOrder& lhs, const CustodyOrder& rhs);

    CustodyOrder(std::string id_,
                 std::string type_,
                 std::string status_,
                 std::optional<::zumo::Decimal> amount_,
                 bool fee_in_amount_,
                 std::optional<::zumo::Decimal> estimated_fees_,
                 std::optional<::zumo::Decimal> fees_,
                 std::optional<std::vector<std::string>> from_addresses_,
                 std::optional<std::string> from_account_id_,
                 std::optional<std::string> from_user_id_,
                 std::optional<std::string> from_user_integrator_id_,
                 std::optional<std::string> to_address_,
                 std::optional<std::string> to_account_id_,
                 std::optional<std::string> to_user_id_,
                 std::optional<std::string> to_user_integrator_id_,
                 int32_t created_at_,
                 int32_t updated_at_)
    : id(std::move(id_))
    , type(std::move(type_))
    , status(std::move(status_))
    , amount(std::move(amount_))
    , fee_in_amount(std::move(fee_in_amount_))
    , estimated_fees(std::move(estimated_fees_))
    , fees(std::move(fees_))
    , from_addresses(std::move(from_addresses_))
    , from_account_id(std::move(from_account_id_))
    , from_user_id(std::move(from_user_id_))
    , from_user_integrator_id(std::move(from_user_integrator_id_))
    , to_address(std::move(to_address_))
    , to_account_id(std::move(to_account_id_))
    , to_user_id(std::move(to_user_id_))
    , to_user_integrator_id(std::move(to_user_integrator_id_))
    , created_at(std::move(created_at_))
    , updated_at(std::move(updated_at_))
    {}
};

}  // namespace zumo
