// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#pragma once

#include "zumo/exceptions.hpp"

namespace zumo {

class SuccessCallback {
public:
    virtual ~SuccessCallback() {}

    virtual void on_error(const ::zumo::ZumoKitException & e) = 0;

    virtual void on_success() = 0;
};

}  // namespace zumo
