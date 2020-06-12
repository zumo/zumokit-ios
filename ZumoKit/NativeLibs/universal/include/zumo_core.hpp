// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from zumo_core.djinni

#pragma once

#include <memory>
#include <string>

namespace zumo {

class HistoricalExchangeRatesCallback;
class HttpImpl;
class StateListener;
class UserCallback;
class Utils;
class WebSocketImpl;
struct State;

class ZumoCore {
public:
    virtual ~ZumoCore() {}

    static std::string get_version();

    static std::shared_ptr<ZumoCore> init(const std::shared_ptr<HttpImpl> & http_impl, const std::shared_ptr<WebSocketImpl> & ws_impl, const std::string & api_key, const std::string & api_root, const std::string & tx_service_root);

    virtual void get_user(const std::string & user_token_set, const std::shared_ptr<UserCallback> & callback) = 0;

    virtual std::shared_ptr<Utils> get_utils() = 0;

    virtual void get_historical_exchange_rates(const std::shared_ptr<HistoricalExchangeRatesCallback> & callback) = 0;

    virtual State get_state() = 0;

    virtual void add_state_listener(const std::shared_ptr<StateListener> & listener) = 0;

    virtual void remove_state_listener(const std::shared_ptr<StateListener> & listener) = 0;
};

}  // namespace zumo
