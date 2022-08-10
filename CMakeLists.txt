#
# Created by Jeb Feng on 2021/12/15.
# Copyright (c) 2021 StaplerIO All rights reserved.
#

cmake_minimum_required(VERSION 3.19)
project(carbon_lang_runtime)

set(CMAKE_CXX_STANDARD 20)

MESSAGE("Downloading GoogleTest")
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.12.1
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(src/executable)
add_subdirectory(src/core)
