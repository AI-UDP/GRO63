cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

project(cell-engine
    VERSION "0.1.0"
    LANGUAGES C
    )

add_library(${PROJECT_NAME}
    src/Body.c
    src/Space.c
    src/CellEngine.c
    )

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        PRIVATE
        $<INSTALL_INTERFACE:include/private>
    )

