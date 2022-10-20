// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#pragma once

#include "exceptions.hpp"
#include <string>

namespace zumo {

/** Callback used by methods in User class..  */
class StringifiedJsonCallback {
public:
    virtual ~StringifiedJsonCallback() {}

    virtual void on_error(const ::zumo::ZumoKitException & e) = 0;

    virtual void on_success(const std::string & stringified_json) = 0;
};

}  // namespace zumo
