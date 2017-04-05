cmake_minimum_required(VERSION 3.0)

project(Cooking)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    include/
)

file(
    GLOB_RECURSE
    src_files
    src/*.cpp
)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY lib/)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY lib/)

add_library(
    cooking
    ${src_files}
)
