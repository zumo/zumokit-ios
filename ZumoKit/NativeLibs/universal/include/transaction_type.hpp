// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#pragma once

#include <functional>

namespace zumo {

enum class TransactionType : int {
    NORMAL,
    EXCHANGE,
};

}  // namespace zumo

namespace std {

template <>
struct hash<::zumo::TransactionType> {
    size_t operator()(::zumo::TransactionType type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
