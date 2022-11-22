# TODO find out the right minimum version
cmake_minimum_required(VERSION 3.23)

# Determine if the project is built as a subproject (using add_subdirectory)
# or if it is the master project.
if (NOT DEFINED ARGS_MASTER_PROJECT)
    set(ARGS_MASTER_PROJECT OFF)
        if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
            set(ARGS_MASTER_PROJECT ON)
            set(ARGS_DEVELOPER_MODE ON)
            message(STATUS "CMake version: ${CMAKE_VERSION}")
        endif ()
endif ()

project(args
    VERSION 0.0.1
    DESCRIPTION "A header-only command-line arguments parsing library"
    HOMEPAGE_URL "https://github.com/ishchukin/args"
    LANGUAGES CXX
)

option(ARGS_TEST "Generate the test target." ${ARGS_MASTER_PROJECT})
option(ARGS_EXAMPLES "Generate the examples target." ${ARGS_MASTER_PROJECT})

add_library(args INTERFACE)
add_library(args::args ALIAS args)

include(GNUInstallDirs)

target_include_directories(args INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_compile_features(args INTERFACE cxx_std_23)

if(ARGS_TEST)
    enable_testing()
    add_subdirectory(test)
endif()

if (ARGS_EXAMPLES)
    add_subdirectory(examples)
endif()
