cmake_minimum_required(VERSION 3.21)

project(Cxx20Modules LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

add_executable(modules main.cpp math.ixx)

target_compile_features(modules PRIVATE cxx_std_20)

target_compile_options(modules PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:
        /experimental:module>)