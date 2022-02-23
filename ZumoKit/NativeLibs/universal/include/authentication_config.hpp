// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#pragma once

#include "kba_question.hpp"
#include <utility>
#include <vector>

namespace zumo {

/** Record containing Strong Customer Authentication (SCA) config */
struct AuthenticationConfig final {
    /** Knowledge-Based Authentication (KBA) questions. */
    std::vector<KbaQuestion> knowledge_base;

    friend bool operator==(const AuthenticationConfig& lhs, const AuthenticationConfig& rhs);
    friend bool operator!=(const AuthenticationConfig& lhs, const AuthenticationConfig& rhs);

    AuthenticationConfig(std::vector<KbaQuestion> knowledge_base_)
    : knowledge_base(std::move(knowledge_base_))
    {}
};

}  // namespace zumo
