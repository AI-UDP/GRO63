cmake_minimum_required(VERSION 3.8.0 FATAL_ERROR)

project(uint256_t
    VERSION "0.1.0"
    LANGUAGES CXX
    )

add_library(${PROJECT_NAME}
    uint128_t.cpp
    uint256_t.cpp
    )

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/.>
        $<INSTALL_INTERFACE:.>
    )

target_compile_features(${PROJECT_NAME}
    PUBLIC
        cxx_std_11
    )
