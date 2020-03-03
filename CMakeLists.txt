cmake_minimum_required(VERSION 3.8.0 FATAL_ERROR)

# Modify this value each new version
project(gro63 VERSION "1.1")

# List of packet to compile
add_subdirectory(packages/uint256_t)
add_subdirectory(packages/CellEngine)
add_subdirectory(packages/CellNutrient)
add_subdirectory(packages/CellPro)
add_subdirectory(packages/CellSignals)
add_subdirectory(packages/ccl)
add_subdirectory(packages/gro)
