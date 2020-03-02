cmake_minimum_required(VERSION 3.7.0 FATAL_ERROR)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

option(GRO_GUI "Compile gro without gui" ON)

project(gro
    VERSION "0.1.0"
    LANGUAGES CXX
    )

# Specific qt definitions
set(CMAKE_AUTOMOC ON) #Enable qt preprocessor
set(CMAKE_AUTORCC ON) #Enable qt code generator from qt resources files (.qrc)
set(CMAKE_AUTOUIC ON) #Enable qt code generator from qt gui files (.ui)

set(SRC
    Cell.cpp
    EColi.cpp
    Gro.cpp
    Messages.cpp
    Programs.cpp
    reaction.cpp
    Signal.cpp
    Utility.cpp
    World.cpp
    main.cpp
    )

set(SRC_GUI
    GroPainter.cpp
    GroThread.cpp
    GroWidget.cpp
    Themes.cpp
    gui.cpp
    gui.ui
    icons.qrc
    )

add_executable(${PROJECT_NAME}
    ${SRC}
    $<$<BOOL:${GRO_GUI}>:${SRC_GUI}>
    )

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/.>
        $<INSTALL_INTERFACE:.>
    )

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        Qt5::Core
        Qt5::Gui
        $<$<BOOL:${GRO_GUI}>:Qt5::Widgets>

        cell-engine
        cell-nutrient
        cell-pro
        cell-signals
        ccl
    )

target_compile_features(${PROJECT_NAME}
    PUBLIC
        cxx_std_11
    )

target_compile_definitions(${PROJECT_NAME}
    PUBLIC
        $<$<NOT:$<BOOL:${GRO_GUI}>>:NOGUI>
    )

# Copy gro included files to build directory
configure_file(
    ${PROJECT_SOURCE_DIR}/include/gro.gro
    ${PROJECT_BINARY_DIR}/include/gro.gro
    COPYONLY)

configure_file(
    ${PROJECT_SOURCE_DIR}/include/standard.gro
    ${PROJECT_BINARY_DIR}/include/standard.gro
    COPYONLY)

# Install files
install(
    DIRECTORY
        ${PROJECT_BINARY_DIR}/include/
    DESTINATION
        bin/include
    FILES_MATCHING
        PATTERN "*.gro"
    )

install(
    TARGETS
        gro
    DESTINATION
        bin
    )
