// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from utils.djinni

#pragma once

#include <cstdint>
#include <string>

namespace zumo {

enum class NetworkType;

class Utils {
public:
    virtual ~Utils() {}

    virtual std::string generate_mnemonic(int32_t word_count) = 0;

    virtual bool is_valid_eth_address(const std::string & address) = 0;

    virtual bool is_valid_btc_address(const std::string & address, NetworkType network) = 0;

    virtual std::string wei_to_eth(const std::string & number) = 0;

    virtual std::string eth_to_wei(const std::string & number) = 0;

    virtual std::string gwei_to_eth(const std::string & number) = 0;

    virtual std::string eth_to_gwei(const std::string & number) = 0;

    virtual std::string wei_to_gwei(const std::string & number) = 0;

    virtual std::string gwei_to_wei(const std::string & number) = 0;
};

}  // namespace zumo
