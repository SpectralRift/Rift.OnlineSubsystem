#pragma once

#include <string>
#include <memory>

#include <Engine/Online/IOnlineUser.hpp>

namespace engine::online {
    struct IOnlineSubsystem {
        virtual ~IOnlineSubsystem() = default;

        virtual bool Initialize() = 0;
        virtual void Shutdown() = 0;

        virtual std::string GetSubsystemName() = 0;

        // Fetches the current user.
        virtual std::shared_ptr<IOnlineUser> GetOnlineUser() const = 0;
    };
}