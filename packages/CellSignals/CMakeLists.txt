cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

project(cell-signals
    VERSION "0.1.0"
    LANGUAGES CXX
    )

add_library(${PROJECT_NAME}
    src/CSCell.cpp
    src/DBCell.cpp
    src/DPCell.cpp
    src/Diffusion.cpp
    src/Grid.cpp
    src/_structures.cpp
    )

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
    )

target_compile_features(${PROJECT_NAME}
    PUBLIC
        cxx_std_11
    )
