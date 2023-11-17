cmake_minimum_required(VERSION 3.10)
project(gstreamer_test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ${CCACHE_PROGRAM})
endif()

#add_subdirectory(gstr/)
add_subdirectory(json/)
add_subdirectory(logger/)
