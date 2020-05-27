cmake_minimum_required(VERSION 3.8.0 FATAL_ERROR)

project(cell-pro
    VERSION "0.1.0"
    LANGUAGES CXX
    )

add_library(${PROJECT_NAME}
    src/cg/Gene.cpp
    src/cg/Genome.cpp
    src/cg/Plasmid.cpp
    src/cg/PlasmidPool.cpp
    src/cg/Operon.cpp
    src/cg/Promoter.cpp
    src/cg/Protein.cpp
    )

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
    )

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        uint256_t
    )

target_compile_features(${PROJECT_NAME}
    PUBLIC
        cxx_std_11
    )
