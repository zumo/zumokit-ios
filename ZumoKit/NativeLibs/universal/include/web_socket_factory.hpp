// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from networking.djinni

#pragma once

#include <memory>
#include <string>

namespace zumo {

class WebSocket;

class WebSocketFactory {
public:
    virtual ~WebSocketFactory() {}

    virtual std::shared_ptr<WebSocket> create_web_socket(const std::string & url) = 0;
};

}  // namespace zumo
