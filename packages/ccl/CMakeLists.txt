cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)

project(ccl
    VERSION "0.1.0"
    LANGUAGES CXX
    )

add_library(${PROJECT_NAME}
    App.cpp
    Clause.cpp
    Debug.cpp
    Eval.cpp
    Expr.cpp
    Hill.cpp
    Internals.cpp
    lexer.cpp
    List.cpp
    Normal.cpp
    parser.cpp
    Program.cpp
    Rands.cpp
    Schedulers.cpp
    Scope.cpp
    Symbol.cpp
    SymbolTable.cpp
    TypeCheck.cpp
    Type.cpp
    )

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/.>
        $<INSTALL_INTERFACE:.>
    )

