cmake_minimum_required(VERSION 3.10)
project(ExampleProject)

set(CMAKE_CXX_STANDARD 14)
SET ( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BUILD_TYPE} )

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)
