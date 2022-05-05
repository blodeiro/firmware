cmake_minimum_required(VERSION 3.0.0)
project(firmware VERSION 0.1.0)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(firmware tests/main.cpp ${SOURCES})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(executeTests tests/firmware_test.cpp ${SOURCES})
target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)