cmake_minimum_required(VERSION 3.21)
project(Arduino_Group3_P5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(main)

add_executable(Arduino_Group3_P5
        main/main.ino
        README.md)
