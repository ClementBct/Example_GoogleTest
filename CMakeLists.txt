cmake_minimum_required (VERSION 3.2)
project (ExampleGoogleTest CXX)


set (CMAKE_CXX_FLAGS "-ggdb -fprofile-arcs -ftest-coverage")
set (CMAKE_EXE_LINKER_FLAGS "-fprofile-arcs -ftest-coverage")

set (SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Project/src")

include_directories ("${SRC_DIR}")

file (GLOB_RECURSE SRC_FILES "${SRC_DIR}/*.cpp")

# Compiles static lib that will be linked with tests.
set (LIB_NAME "ExampleGoogleTest")
add_library ("${LIB_NAME}" STATIC ${SRC_FILES})


# Include googletest.
add_subdirectory (googletest-main)


# Build tests executable.
set (ExampleGoogleTest "${LIB_NAME}_exe")
set (TEST_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/test")
file (GLOB_RECURSE TEST_SRC_FILES "${TEST_SRC_DIR}/*.cpp")

add_executable ("${ExampleGoogleTest}" ${TEST_SRC_FILES})
target_link_libraries ("${ExampleGoogleTest}" "${LIB_NAME}" "gtest" "gtest_main")
