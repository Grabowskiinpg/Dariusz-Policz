cmake_minimum_required(VERSION 3.13)
project(kalkulator)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(-Wall -Wextra -Werror -Wpedantic -pedantic-errors)

include_directories(
        include
)

set(SOURCE_FILES
        src/calc_RG.cpp
        src/calc_MG.cpp
        src/calc_BB.cpp
        )

add_executable(kalkulator ${SOURCE_FILES} main.cpp)

# == Unit testing using Google Testing Framework ==

set(SOURCES_FILES_TESTS
        test/test_calc.cpp
        )

add_executable(kalkulator__test ${SOURCE_FILES} ${SOURCES_FILES_TESTS} test/main_gtest.cpp)

target_include_directories(kalkulator__test PUBLIC
        googletest-master/googlemock/include
        googletest-master/googletest/include
        )

add_subdirectory(../googletest-master googletest-master)

target_link_libraries(kalkulator__test gmock)

