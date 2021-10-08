

################################
# GTest
################################
ADD_SUBDIRECTORY(googletest-master)
enable_testing()

cmake_minimum_required(VERSION 3.17)
project(tests)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

file(GLOB_RECURSE TEST_SOURCES test_*.cpp)

foreach (TEST_FILE IN LISTS TEST_SOURCES)
    get_filename_component(TEST_FILE_NAME ${TEST_FILE} NAME_WE)
    set(EXECUTABLE_NAME run_${TEST_FILE_NAME})
    add_executable(${EXECUTABLE_NAME} ${TEST_FILE} test_execute_commands_from_file.cpp)
    target_link_libraries(${EXECUTABLE_NAME} PlusesToPython gtest gtest_main)
    message("TEST_FILE: ${TEST_FILE}")
    add_test(NAME ${EXECUTABLE_NAME} COMMAND ${EXECUTABLE_NAME})
endforeach ()
