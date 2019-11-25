// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#pragma once

#include "stdx/optional.hpp"
#include <memory>
#include <string>
#include <unordered_map>

namespace zumo {

class AuthCallback;
class HttpImpl;
class StateListener;
class SyncCallback;
class Utils;
class WebSocketImpl;
struct State;

class ZumoCore {
public:
    virtual ~ZumoCore() {}

    static std::string get_version();

    static std::shared_ptr<ZumoCore> init(const std::shared_ptr<HttpImpl> & http_impl, const std::shared_ptr<WebSocketImpl> & ws_impl, const std::string & api_key, const std::string & api_root, const std::string & my_root, const std::string & tx_service_root);

    virtual void auth(const std::string & token, const std::experimental::optional<std::unordered_map<std::string, std::string>> & headers, const std::shared_ptr<AuthCallback> & callback) = 0;

    virtual void sync(const std::shared_ptr<SyncCallback> & callback) = 0;

    virtual std::shared_ptr<Utils> get_utils() = 0;

    virtual State get_state() = 0;

    virtual void add_state_listener(const std::shared_ptr<StateListener> & listener) = 0;

    virtual void remove_state_listener(const std::shared_ptr<StateListener> & listener) = 0;
};

}  // namespace zumo
