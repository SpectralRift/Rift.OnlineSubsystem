cmake_minimum_required(VERSION 3.14)
project(Rift_OnlineSubsystem VERSION 0.1.1)

add_library(
        Rift_OnlineSubsystem
        STATIC
        private/Engine/Online/main.cpp
)

target_include_directories(
        Rift_OnlineSubsystem
        PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/public"
        PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/private"
)

target_link_libraries(Rift_OnlineSubsystem RiftEngine_Core_Runtime)