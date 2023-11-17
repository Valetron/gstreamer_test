cmake_minimum_required(VERSION 3.10)
project(logger_test LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(spdlog REQUIRED)

add_compile_definitions(SPDLOG_ACTIVE_LEVEL)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
                           PUBLIC
                           spdlog_INCLUDE_DIRS)

target_link_libraries(${PROJECT_NAME} PUBLIC spdlog::spdlog)
