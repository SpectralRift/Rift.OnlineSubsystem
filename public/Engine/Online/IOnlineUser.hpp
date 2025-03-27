#pragma once

#include <string>

namespace engine::online {
    struct IOnlineUser {
        virtual ~IOnlineUser() = default;

        virtual std::string GetDisplayName() = 0;
        virtual uint64_t GetUserId() = 0;
    };
}