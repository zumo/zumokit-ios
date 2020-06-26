// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#pragma once

#include "zumo/exceptions.hpp"

namespace zumo {

struct AccountFiatProperties;

class AccountFiatPropertiesCallback {
public:
    virtual ~AccountFiatPropertiesCallback() {}

    virtual void on_error(const ::zumo::ZumoKitException & e) = 0;

    virtual void on_success(const AccountFiatProperties & account) = 0;
};

}  // namespace zumo
