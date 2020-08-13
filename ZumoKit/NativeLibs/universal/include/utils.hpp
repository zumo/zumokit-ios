// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from utils.djinni

#pragma once

#include "zumo/decimal.hpp"
#include <cstdint>
#include <string>

namespace zumo {

/**
 * Utility class providing blockchain related utility methods. Accessed from @link ZumoKit class.
 * <p>
 * This class provides mnemonic phrase generation utility, Bitcoin & Ethereum address
 * validation utilities and Ethereum unit conversion methods.
 */
class Utils {
public:
    virtual ~Utils() {}

    /**
     * Generates mnemonic seed phrase used in wallet creation process.
     * @param word_count   12, 15, 18, 21 or 24
     */
    virtual std::string generate_mnemonic(int32_t word_count) = 0;

    /**
     * Validates Ethereum address.
     * @param address Ethereum address
     * @return true if Ethereum address is valid
     */
    virtual bool is_valid_eth_address(const std::string & address) = 0;

    /**
     * Validates Bitcoin address on a given network.
     * @param address Bitcoin address
     * @param network network type, either 'MAINNET' or 'TESTNET'
     * @return true if Bitcoin address is valid on a given network
     * @see network_type
     */
    virtual bool is_valid_btc_address(const std::string & address, const std::string & network) = 0;

    /**
     * Converts wei value to ETH.
     * @param number wei value to be converted
     * @return ETH value
     */
    virtual ::zumo::Decimal wei_to_eth(const ::zumo::Decimal & number) = 0;

    /**
     * Converts ETH value to wei.
     * @param number ETH value to be converted
     * @return wei value
     */
    virtual ::zumo::Decimal eth_to_wei(const ::zumo::Decimal & number) = 0;

    /**
     * Converts gwei value to ETH.
     * @param number gwei value to be converted
     * @return ETH value
     */
    virtual ::zumo::Decimal gwei_to_eth(const ::zumo::Decimal & number) = 0;

    /**
     * Converts ETH value to gwei.
     * @param number ETH value to be converted
     * @return gwei value
     */
    virtual ::zumo::Decimal eth_to_gwei(const ::zumo::Decimal & number) = 0;

    /**
     * Converts wei value to gwei.
     * @param number wei value to be converted
     * @return gwei value
     */
    virtual ::zumo::Decimal wei_to_gwei(const ::zumo::Decimal & number) = 0;

    /**
     * Converts gwei value to wei.
     * @param number gwei value to be converted
     * @return wei value
     */
    virtual ::zumo::Decimal gwei_to_wei(const ::zumo::Decimal & number) = 0;
};

}  // namespace zumo
