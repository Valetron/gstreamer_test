cmake_minimum_required(VERSION 3.10)
project(prometheus LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(prometheus-cpp REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC prometheus-cpp::push prometheus-cpp::pull prometheus-cpp::core)
