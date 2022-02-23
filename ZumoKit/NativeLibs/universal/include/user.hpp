// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#pragma once

#include <memory>
#include <optional>
#include <string>
#include <vector>

namespace zumo {

class AccountCallback;
class AccountDataListener;
class AccountFiatPropertiesCallback;
class AuthenticationConfigCallback;
class CardCallback;
class CardDetailsCallback;
class MnemonicCallback;
class PinCallback;
class SuccessCallback;
class WalletCallback;
struct Account;
struct Address;
struct KbaAnswer;

/**
 * User class provides methods for managing user wallet and accounts.
 * <p>
 * User instance can be obtained via <code>getUser</code> method on ZumoKit instance.
 * <p>
 * See <a target="_top" href="https://developers.zumo.money/docs/guides/manage-user-wallet">Manage User Wallet</a>,
 * <a target="_top" href="https://developers.zumo.money/docs/guides/create-fiat-account">Create Fiat Account</a> and
 * <a target="_top" href="https://developers.zumo.money/docs/guides/view-user-data">View User Data</a>
 * guides for usage details.
 */
class User {
public:
    virtual ~User() {}

    /**
     * Get user id.
     * @return user id
     */
    virtual std::string get_id() = 0;

    /**
     * Check if user has wallet
     * @return true if user has wallet
     */
    virtual bool has_wallet() = 0;

    /**
     * Check if user is a fiat customer on 'MAINNET' or 'TESTNET' network.
     * @param  network 'MAINNET' or 'TESTNET'
     * @return true if user is currenly active user.
     * @see    NetworkType
     */
    virtual bool is_fiat_customer(const std::string & network) = 0;

    /**
     * Make user fiat customer on specified network by providing user's personal details.
     * @param  network        'MAINNET' or 'TESTNET'
     * @param  first_name     first name
     * @param  middle_name    middle name or null
     * @param  last_name      last name
     * @param  date_of_birth  date of birth in ISO 8601 format, e.g '2020-08-12'
     * @param  email          email
     * @param  phone          phone number
     * @param  address        home address
     * @param  callback       an interface to receive the result or error
     * @see    NetworkType
     */
    virtual void make_fiat_customer(const std::string & network, const std::string & first_name, const std::optional<std::string> & middle_name, const std::string & last_name, const std::string & date_of_birth, const std::string & email, const std::string & phone, const Address & address, const std::shared_ptr<SuccessCallback> & callback) = 0;

    /**
     * Create fiat account on specified network and currency code. User must already be fiat customer on specified network.
     * @param  network        'MAINNET' or 'TESTNET'
     * @param  currency_code  country code in ISO 4217 format, e.g. 'GBP'
     * @param  callback       an interface to receive the result or error
     * @see    Account
     * @see    NetworkType
     */
    virtual void create_fiat_account(const std::string & network, const std::string & currency_code, const std::shared_ptr<AccountCallback> & callback) = 0;

    /**
     * Get nominated account details for specified account if it exists.
     * Refer to
     * <a target="_top" href="https://developers.zumo.money/docs/guides/send-transactions#bitcoin">Create Fiat Account</a>
     * for explanation about nominated account.
     * @param  account_id     Account id
     * @param  callback       an interface to receive the result or error
     * @see AccountFiatProperties
     */
    virtual void get_nominated_account_fiat_properties(const std::string & account_id, const std::shared_ptr<AccountFiatPropertiesCallback> & callback) = 0;

    /**
     * Fetch Strong Customer Authentication (SCA) config.
     *
     * @param callback         an interface to receive the result or error
     */
    virtual void fetch_authentication_config(const std::shared_ptr<AuthenticationConfigCallback> & callback) = 0;

    /**
     * Create card for a fiat account.
     * <p>
     * At least one Knowled-Based Authentication (KBA) answer should be defined, answers are limited to 256 characters and 
     * cannot be null or empty and only one answer per question type should be provided.
     * @param  fiat_account_id fiat account id
     * @param  card_type       'VIRTUAL' or 'PHYSICAL'
     * @param  mobile_number   card holder mobile number, starting with a '+', followed by the country code and then the mobile number
     * @param  callback        an interface to receive the result or error
     * @param  knowledge_base  list of KBA answers
     * @see    Card
     * @see    CardType
     */
    virtual void create_card(const std::string & fiat_account_id, const std::string & card_type, const std::string & mobile_number, const std::vector<KbaAnswer> & knowledge_base, const std::shared_ptr<CardCallback> & callback) = 0;

    /**
     * Set card status to 'ACTIVE', 'BLOCKED' or 'CANCELLED'. 
     * - To block card, set card status to 'BLOCKED'. 
     * - To activate a physical card, set card status to 'ACTIVE' and provide PAN and CVV2 fields.
     * - To cancel a card, set card status to 'CANCELLED'.
     * - To unblock a card, set card status to 'ACTIVE.'. 
     * @param  card_id         card id
     * @param  card_status     new card status
     * @param  pan             PAN when activating a physical card, null otherwise
     * @param  cvv2            CVV2 when activating a physical card, null otherwise
     * @param  callback        an interface to receive the result or error
     * @see    CardStatus
     */
    virtual void set_card_status(const std::string & card_id, const std::string & card_status, const std::optional<std::string> & pan, const std::optional<std::string> & cvv2, const std::shared_ptr<SuccessCallback> & callback) = 0;

    /**
     * Reveals sensitive card details.
     * @param  card_id         card id
     * @param  callback        an interface to receive the result or error
     * @see    CardDetails
     */
    virtual void reveal_card_details(const std::string & card_id, const std::shared_ptr<CardDetailsCallback> & callback) = 0;

    /**
     * Reveal card PIN.
     * @param  card_id         card id
     * @param  callback        an interface to receive the result or error
     */
    virtual void reveal_pin(const std::string & card_id, const std::shared_ptr<PinCallback> & callback) = 0;

    /**
     * Unblock card PIN.
     * @param  card_id         card id
     * @param  callback        an interface to receive the result or error
     */
    virtual void unblock_pin(const std::string & card_id, const std::shared_ptr<SuccessCallback> & callback) = 0;

    /**
     * Add KBA answers to a card without SCA.
     * <p>
     * This endpoint is used to set Knowledge-Based Authentication (KBA) answers to 
     * a card without Strong Customer Authentication (SCA). Once it is set SCA flag 
     * on corresponding card is set to true.
     * <p>
     * At least one answer should be defined, answers are limited to 256 characters and 
     * cannot be null or empty and only one answer per question type should be provided.
     * @param  card_id         card id
     * @param  knowledge_base  list of KBA answers
     * @param  callback        an interface to receive the result or error
     */
    virtual void set_authentication(const std::string & card_id, const std::vector<KbaAnswer> & knowledge_base, const std::shared_ptr<SuccessCallback> & callback) = 0;

    /**
     * Create user wallet seeded by provided mnemonic and encrypted with user's password.
     * <p>
     * Mnemonic can be generated by <code>generateMnemonic</code> method in Utils class.
     * @param  mnemonic       mnemonic seed phrase
     * @param  password       user provided password
     * @param  callback       an interface to receive the result or error
     * @see    Wallet
     */
    virtual void create_wallet(const std::string & mnemonic, const std::string & password, const std::shared_ptr<WalletCallback> & callback) = 0;

    /**
     * Unlock user wallet with user's password.
     * @param  password       user provided password
     * @param  callback       an interface to receive the result or error
     * @see    Wallet
     */
    virtual void unlock_wallet(const std::string & password, const std::shared_ptr<WalletCallback> & callback) = 0;

    /**
     * Reveal menmonic seed phrase used to seed user wallet.
     * @param  password       user provided password
     * @param  callback       an interface to receive the result or error
     */
    virtual void reveal_mnemonic(const std::string & password, const std::shared_ptr<MnemonicCallback> & callback) = 0;

    /**
     * Check if mnemonic seed phrase corresponds to user's wallet.
     * This is useful for validating seed phrase before trying to recover wallet.
     * @param  mnemonic       mnemonic seed phrase
     * @return true if mnemonic seed phrase corresponds to user's wallet
     */
    virtual bool is_recovery_mnemonic(const std::string & mnemonic) = 0;

    /**
     * Recover user wallet with mnemonic seed phrase corresponding to user's wallet.
     * This can be used if user forgets his password or wants to change his wallet password.
     * @param  mnemonic       mnemonic seed phrase corresponding to user's wallet
     * @param  password       user provided password
     * @param  callback       an interface to receive the result or error
     */
    virtual void recover_wallet(const std::string & mnemonic, const std::string & password, const std::shared_ptr<WalletCallback> & callback) = 0;

    /**
     * Get account in specific currency, on specific network, with specific type.
     * @param  currency_code       currency code, e.g. 'BTC', 'ETH' or 'GBP'
     * @param  network             network type, e.g. 'MAINNET', 'TESTNET' or 'RINKEBY'
     * @param  type                account type, e.g. 'STANDARD', 'COMPATIBILITY' or 'SEGWIT'
     * @return account with selected parameters if it exists, null otherwise
     * @see CurrencyCode
     * @see NetworkType
     * @see AccountType
     */
    virtual std::optional<Account> get_account(const std::string & currency_code, const std::string & network, const std::string & type) = 0;

    /**
     * Get all user accounts.
     * @return all user accounts
     */
    virtual std::vector<Account> get_accounts() = 0;

    /**
     * Listen to all account data changes.
     * @param listener interface to listen to user changes
     */
    virtual void add_account_data_listener(const std::shared_ptr<AccountDataListener> & listener) = 0;

    /**
     * Remove listener to account data changes.
     * @param listener interface to listen to user changes
     */
    virtual void remove_account_data_listener(const std::shared_ptr<AccountDataListener> & listener) = 0;
};

}  // namespace zumo
