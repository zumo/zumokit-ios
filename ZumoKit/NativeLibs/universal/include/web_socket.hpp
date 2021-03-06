// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from networking.djinni

#pragma once

#include <memory>
#include <string>

namespace zumo {

class WebSocketListener;

class WebSocket {
public:
    virtual ~WebSocket() {}

    virtual void connect() = 0;

    virtual void send(const std::string & message) = 0;

    virtual void subscribe(const std::shared_ptr<WebSocketListener> & listener) = 0;
};

}  // namespace zumo
