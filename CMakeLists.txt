cmake_minimum_required(VERSION 3.15)
project(saura VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(OUTPUT_DIR ${CMAKE_BINARY_DIR}/$<CONFIG>)
foreach(_TYPE RUNTIME LIBRARY ARCHIVE)
    set(CMAKE_${_TYPE}_OUTPUT_DIRECTORY ${OUTPUT_DIR})
endforeach()

add_subdirectory(saura/app)
add_subdirectory(saura/cmd/app)
