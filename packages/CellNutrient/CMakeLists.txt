cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

project(cell-nutrient
    VERSION "0.1.0"
    LANGUAGES C
    )

add_library(${PROJECT_NAME}
    src/CellNutrient.c
    src/CNvector.c
    src/CNGrid.c
    src/CNNutrients.c
    )

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
    )

