// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from networking.djinni

#pragma once

#include <cstdint>
#include <string>

namespace zumo {

class HttpCallback {
public:
    virtual ~HttpCallback() {}

    virtual void on_network_error() = 0;

    virtual void on_success(int16_t http_code, const std::string & data) = 0;
};

}  // namespace zumo
