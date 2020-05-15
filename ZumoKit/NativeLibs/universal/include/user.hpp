// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#pragma once

#include "stdx/optional.hpp"
#include <memory>
#include <string>
#include <vector>

namespace zumo {

class AccountListener;
class MnemonicCallback;
class TransactionListener;
class UserListener;
class WalletCallback;
enum class AccountType;
enum class NetworkType;
struct Account;
struct Exchange;
struct Transaction;

class User {
public:
    virtual ~User() {}

    virtual std::string get_id() = 0;

    virtual bool has_wallet() = 0;

    virtual bool is_active_user() = 0;

    virtual void create_wallet(const std::string & mnemonic, const std::string & password, const std::shared_ptr<WalletCallback> & callback) = 0;

    virtual void unlock_wallet(const std::string & password, const std::shared_ptr<WalletCallback> & callback) = 0;

    virtual void reveal_mnemonic(const std::string & password, const std::shared_ptr<MnemonicCallback> & callback) = 0;

    virtual bool is_recovery_mnemonic(const std::string & mnemonic) = 0;

    virtual void recover_wallet(const std::string & mnemonic, const std::string & password, const std::shared_ptr<WalletCallback> & callback) = 0;

    virtual std::experimental::optional<Account> get_account(const std::string & symbol, NetworkType network, AccountType type) = 0;

    virtual std::vector<Account> get_accounts() = 0;

    virtual std::vector<Transaction> get_account_transactions(const std::string & account_id) = 0;

    virtual std::vector<Transaction> get_transactions() = 0;

    virtual std::experimental::optional<Transaction> get_transaction(const std::string & transaction_id) = 0;

    virtual std::vector<Exchange> get_exchanges() = 0;

    virtual std::experimental::optional<Exchange> get_exchange_by_transaction_id(const std::string & transaction_id) = 0;

    virtual void add_listener(const std::shared_ptr<UserListener> & listener) = 0;

    virtual void remove_listener(const std::shared_ptr<UserListener> & listener) = 0;

    virtual void add_account_listener(const std::string & account_id, const std::shared_ptr<AccountListener> & listener) = 0;

    virtual void remove_account_listener(const std::shared_ptr<AccountListener> & listener) = 0;

    virtual void add_transaction_listener(const std::string & transaction_id, const std::shared_ptr<TransactionListener> & listener) = 0;

    virtual void remove_transaction_listener(const std::shared_ptr<TransactionListener> & listener) = 0;
};

}  // namespace zumo
