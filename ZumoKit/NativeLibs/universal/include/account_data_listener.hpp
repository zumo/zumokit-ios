// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#pragma once

#include <vector>

namespace zumo {

struct AccountDataSnapshot;

/** Callback interface used to listen for account data changes in User class. */
class AccountDataListener {
public:
    virtual ~AccountDataListener() {}

    virtual void on_data_change(const std::vector<AccountDataSnapshot> & snapshots) = 0;
};

}  // namespace zumo