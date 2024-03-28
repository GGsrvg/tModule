cmake_minimum_required(VERSION 3.29.0)

project(
    tModule
    VERSION 0.0.1
    LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tModule)
target_sources(tModule
    PUBLIC
    src/main.cpp
)
add_library(ttt)
target_sources(ttt
    PRIVATE
    src/View.cpp src/Anchor.cpp
    PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    src/View.cppm src/Anchor.cppm 
)

target_link_libraries(tModule ttt)
