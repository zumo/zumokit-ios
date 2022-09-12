// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enums.djinni

#pragma once

#include <string>
#include <utility>

namespace zumo {

/**
 * Account custody type, 'CUSTODY' or 'NON-CUSTODY'.
 * <p>
 * Only relevant for crypto accounts. Fiat accounts are always of type 'CUSTODY'.
 */
struct CustodyType final {

    /** Funds on custody accounts are managed by Zumo. User does not need to unlock wallet to manage his funds. */
    static std::string const CUSTODY;

    /** Funds on non-custody accounts are managed by the end user. User needs to unlock wallet to manage his funds. */
    static std::string const NON_CUSTODY;
};

}  // namespace zumo
