cmake_minimum_required(VERSION 3.10)
project(wallet LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SRC_FILES "./*.cpp")

include_directories(
    ./Interface
)

link_directories(
    ./SDK
)

set(LIBS spvsdk)

add_executable(wallet
    ${SRC_FILES}
)

target_link_libraries(wallet
    PRIVATE
    ${LIBS}
)
