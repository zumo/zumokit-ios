
#pragma once

#include <optional>
#include <string>
#include <utility>

namespace zumo {

struct ZumoKitError final {

    std::string type;
    std::optional<std::string> code;
    std::optional<std::string> message;

    friend bool operator==(const ZumoKitError &lhs, const ZumoKitError &rhs);
    friend bool operator!=(const ZumoKitError &lhs, const ZumoKitError &rhs);

    ZumoKitError(std::string type_, std::string code_);

    ZumoKitError(std::string type_, std::string code_, std::string message_)
        : type(std::move(type_)), code(std::move(code_)), message(std::move(message_))
    {
    }

    ZumoKitError(
        std::string type_,
        std::optional<std::string> code_,
        std::optional<std::string> message_)
        : type(std::move(type_)), code(std::move(code_)), message(std::move(message_))
    {
    }
};
}