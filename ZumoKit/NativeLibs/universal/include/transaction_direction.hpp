// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#pragma once

#include <functional>

namespace zumo {

enum class TransactionDirection : int {
    INCOMING,
    OUTGOING,
};

}  // namespace zumo

namespace std {

template <>
struct hash<::zumo::TransactionDirection> {
    size_t operator()(::zumo::TransactionDirection type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std