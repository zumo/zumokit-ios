// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#import "ZKUser+Private.h"
#import "ZKUser.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "ZKAccount+Private.h"
#import "ZKAccountCallback+Private.h"
#import "ZKAccountFiatPropertiesCallback+Private.h"
#import "ZKAccountListener+Private.h"
#import "ZKExchange+Private.h"
#import "ZKMnemonicCallback+Private.h"
#import "ZKSuccessCallback+Private.h"
#import "ZKTransaction+Private.h"
#import "ZKTransactionListener+Private.h"
#import "ZKUserListener+Private.h"
#import "ZKWalletCallback+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface ZKUser ()

- (id)initWithCpp:(const std::shared_ptr<::zumo::User>&)cppRef;

@end

@implementation ZKUser {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::zumo::User>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::zumo::User>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nonnull NSString *)getId {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->get_id();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)hasWallet {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->has_wallet();
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)isActiveUser {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->is_active_user();
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)isModulrCustomer:(nonnull NSString *)network {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->is_modulr_customer(::djinni::String::toCpp(network));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)makeModulrCustomer:(nonnull NSString *)network
                 firstName:(nonnull NSString *)firstName
                middleName:(nullable NSString *)middleName
                  lastName:(nonnull NSString *)lastName
               dateOfBirth:(nonnull NSString *)dateOfBirth
                     email:(nonnull NSString *)email
                     phone:(nonnull NSString *)phone
              addressLine1:(nonnull NSString *)addressLine1
              addressLine2:(nullable NSString *)addressLine2
                   country:(nonnull NSString *)country
                  postCode:(nonnull NSString *)postCode
                  postTown:(nonnull NSString *)postTown
                  callback:(nullable id<ZKSuccessCallback>)callback {
    try {
        _cppRefHandle.get()->make_modulr_customer(::djinni::String::toCpp(network),
                                                  ::djinni::String::toCpp(firstName),
                                                  ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(middleName),
                                                  ::djinni::String::toCpp(lastName),
                                                  ::djinni::String::toCpp(dateOfBirth),
                                                  ::djinni::String::toCpp(email),
                                                  ::djinni::String::toCpp(phone),
                                                  ::djinni::String::toCpp(addressLine1),
                                                  ::djinni::Optional<std::experimental::optional, ::djinni::String>::toCpp(addressLine2),
                                                  ::djinni::String::toCpp(country),
                                                  ::djinni::String::toCpp(postCode),
                                                  ::djinni::String::toCpp(postTown),
                                                  ::djinni_generated::SuccessCallback::toCpp(callback));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)createFiatAccount:(nonnull NSString *)network
             currencyCode:(nonnull NSString *)currencyCode
                 callback:(nullable id<ZKAccountCallback>)callback {
    try {
        _cppRefHandle.get()->create_fiat_account(::djinni::String::toCpp(network),
                                                 ::djinni::String::toCpp(currencyCode),
                                                 ::djinni_generated::AccountCallback::toCpp(callback));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)getNominatedAccountFiatProperties:(nonnull NSString *)accountId
                                 callback:(nullable id<ZKAccountFiatPropertiesCallback>)callback {
    try {
        _cppRefHandle.get()->get_nominated_account_fiat_properties(::djinni::String::toCpp(accountId),
                                                                   ::djinni_generated::AccountFiatPropertiesCallback::toCpp(callback));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)createWallet:(nonnull NSString *)mnemonic
            password:(nonnull NSString *)password
            callback:(nullable id<ZKWalletCallback>)callback {
    try {
        _cppRefHandle.get()->create_wallet(::djinni::String::toCpp(mnemonic),
                                           ::djinni::String::toCpp(password),
                                           ::djinni_generated::WalletCallback::toCpp(callback));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)unlockWallet:(nonnull NSString *)password
            callback:(nullable id<ZKWalletCallback>)callback {
    try {
        _cppRefHandle.get()->unlock_wallet(::djinni::String::toCpp(password),
                                           ::djinni_generated::WalletCallback::toCpp(callback));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)revealMnemonic:(nonnull NSString *)password
              callback:(nullable id<ZKMnemonicCallback>)callback {
    try {
        _cppRefHandle.get()->reveal_mnemonic(::djinni::String::toCpp(password),
                                             ::djinni_generated::MnemonicCallback::toCpp(callback));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)isRecoveryMnemonic:(nonnull NSString *)mnemonic {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->is_recovery_mnemonic(::djinni::String::toCpp(mnemonic));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)recoverWallet:(nonnull NSString *)mnemonic
             password:(nonnull NSString *)password
             callback:(nullable id<ZKWalletCallback>)callback {
    try {
        _cppRefHandle.get()->recover_wallet(::djinni::String::toCpp(mnemonic),
                                            ::djinni::String::toCpp(password),
                                            ::djinni_generated::WalletCallback::toCpp(callback));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable ZKAccount *)getAccount:(nonnull NSString *)currencyCode
                           network:(nonnull NSString *)network
                              type:(nonnull NSString *)type {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->get_account(::djinni::String::toCpp(currencyCode),
                                                               ::djinni::String::toCpp(network),
                                                               ::djinni::String::toCpp(type));
        return ::djinni::Optional<std::experimental::optional, ::djinni_generated::Account>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSArray<ZKAccount *> *)getAccounts {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->get_accounts();
        return ::djinni::List<::djinni_generated::Account>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSArray<ZKTransaction *> *)getAccountTransactions:(nonnull NSString *)accountId {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->get_account_transactions(::djinni::String::toCpp(accountId));
        return ::djinni::List<::djinni_generated::Transaction>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSArray<ZKTransaction *> *)getTransactions {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->get_transactions();
        return ::djinni::List<::djinni_generated::Transaction>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable ZKTransaction *)getTransaction:(nonnull NSString *)transactionId {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->get_transaction(::djinni::String::toCpp(transactionId));
        return ::djinni::Optional<std::experimental::optional, ::djinni_generated::Transaction>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSArray<ZKExchange *> *)getExchanges {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->get_exchanges();
        return ::djinni::List<::djinni_generated::Exchange>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable ZKExchange *)getExchangeByTransactionId:(nonnull NSString *)transactionId {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->get_exchange_by_transaction_id(::djinni::String::toCpp(transactionId));
        return ::djinni::Optional<std::experimental::optional, ::djinni_generated::Exchange>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)addListener:(nullable id<ZKUserListener>)listener {
    try {
        _cppRefHandle.get()->add_listener(::djinni_generated::UserListener::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)removeListener:(nullable id<ZKUserListener>)listener {
    try {
        _cppRefHandle.get()->remove_listener(::djinni_generated::UserListener::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)addAccountListener:(nonnull NSString *)accountId
                  listener:(nullable id<ZKAccountListener>)listener {
    try {
        _cppRefHandle.get()->add_account_listener(::djinni::String::toCpp(accountId),
                                                  ::djinni_generated::AccountListener::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)removeAccountListener:(nullable id<ZKAccountListener>)listener {
    try {
        _cppRefHandle.get()->remove_account_listener(::djinni_generated::AccountListener::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)addTransactionListener:(nonnull NSString *)transactionId
                      listener:(nullable id<ZKTransactionListener>)listener {
    try {
        _cppRefHandle.get()->add_transaction_listener(::djinni::String::toCpp(transactionId),
                                                      ::djinni_generated::TransactionListener::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)removeTransactionListener:(nullable id<ZKTransactionListener>)listener {
    try {
        _cppRefHandle.get()->remove_transaction_listener(::djinni_generated::TransactionListener::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto User::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto User::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<ZKUser>(cpp);
}

}  // namespace djinni_generated

@end
