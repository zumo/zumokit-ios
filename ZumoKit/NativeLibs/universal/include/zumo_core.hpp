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

/** Entry point to ZumoKit C++ SDK */
class ZumoCore {
public:
    virtual ~ZumoCore() {}

    /**
     * Get ZumoKit SDK version.
     * @return semantic version tag if exists, commit hash otherwise
     */
    static std::string get_version();

    /**
     * Initializes ZumoKit SDK. Should only be called once.
     *
     * @param http_impl        HTTP implementation
     * @param ws_impl          WebSocet implementation
     * @param api_key          ZumoKit Api-Key
     * @param api_root         ZumoKit API url
     * @param tx_service_root  ZumoKit Transaction Service url
     *
     * @return ZumoKit instance
     */
    static std::shared_ptr<ZumoCore> init(const std::shared_ptr<HttpImpl> & http_impl, const std::shared_ptr<WebSocketImpl> & ws_impl, const std::string & api_key, const std::string & api_root, const std::string & tx_service_root);

    /**
     * Get user corresponding to user token set.
     * Refer to <a target="_top" href="https://developers.zumo.money/docs/setup/server#get-zumokit-user-token">Server</a> guide for details on how to get user token set.
     *
     * @param user_token_set   user token set
     * @param callback         an interface to receive the result or error
     *
     * @see User
     */
    virtual void get_user(const std::string & user_token_set, const std::shared_ptr<UserCallback> & callback) = 0;

    /**
     * Get crypto utils class.
     *
     * @return crypto utils
     */
    virtual std::shared_ptr<Utils> get_utils() = 0;

    /**
     * Fetch historical exchange rates for supported time intervals.
     * On success callback returns historical exchange rates are contained in a mapping between
     * time interval on a top level, from currency on second level, to currency on third level and ExchangeRate objects.
     *
     * @param callback         an interface to receive the result or error
     *
     * @see HistoricalExchangeRatesInterval
     */
    virtual void get_historical_exchange_rates(const std::shared_ptr<HistoricalExchangeRatesCallback> & callback) = 0;

    /**
     * Returns current ZumoKit state. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/zumokit-state">ZumoKit State</a> guide for details.
     *
     * @return current ZumoKit state
     */
    virtual State get_state() = 0;

    /**
     * Listen to all state changes. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/zumokit-state#listen-to-state-changes">ZumoKit State</a> guide for details.
     *
     * @param listener interface to listen to state changes
     */
    virtual void add_state_listener(const std::shared_ptr<StateListener> & listener) = 0;

    /**
     * Remove listener to state changes. Refer to <a target="_top" href="https://developers.zumo.money/docs/guides/zumokit-state#remove-state-listener">ZumoKit State</a> guide for details.
     *
     * @param listener interface to listen to state changes
     */
    virtual void remove_state_listener(const std::shared_ptr<StateListener> & listener) = 0;
};

}  // namespace zumo
