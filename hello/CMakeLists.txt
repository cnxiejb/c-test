cmake_minimum_required(VERSION 2.6)
project(HELLO)

set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-std=gnu++11")
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(src)
add_subdirectory(stlTest)
add_subdirectory(tools)
add_subdirectory(algo)

aux_source_directory(. SRC_LIST)
add_executable(hello ${SRC_LIST})
target_link_libraries(hello srcTest)
target_link_libraries(hello stlTest)
target_link_libraries(hello tools)
target_link_libraries(hello algo)
