#
# Created by Jeb Feng on 2021/12/15.
# Copyright (c) 2021 StaplerIO All rights reserved.
#

cmake_minimum_required(VERSION 3.19)
project(carbon_lang_runtime)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.12.1
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(Cell
        src/executable/main.cpp
        src/core/include/models/package_metadata.h
        src/core/package_loader.cpp src/core/include/package_loader.h)
