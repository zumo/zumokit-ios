// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include <cstdint>
#include <string>
#include <utility>

namespace zumo {

/** Record containing basic card details. */
struct Card final {
    /** Unique card identifier. */
    std::string id;
    /** Associated account's identifier. */
    std::string account_id;
    /**
     * Card type.
     * @see CardType.
     */
    std::string card_type;
    /**
     * Current card status.
     * @see CardStatus
     */
    std::string card_status;
    /** Current card limit. */
    int32_t limit;
    /** Card masked pan, e.g **** **** **** 5454. */
    std::string masked_pan;
    /** Card year and month of expiry, e.g. 2024-08. */
    std::string expiry;

    friend bool operator==(const Card& lhs, const Card& rhs);
    friend bool operator!=(const Card& lhs, const Card& rhs);

    Card(std::string id_,
         std::string account_id_,
         std::string card_type_,
         std::string card_status_,
         int32_t limit_,
         std::string masked_pan_,
         std::string expiry_)
    : id(std::move(id_))
    , account_id(std::move(account_id_))
    , card_type(std::move(card_type_))
    , card_status(std::move(card_status_))
    , limit(std::move(limit_))
    , masked_pan(std::move(masked_pan_))
    , expiry(std::move(expiry_))
    {}
};

}  // namespace zumo