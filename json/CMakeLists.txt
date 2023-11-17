cmake_minimum_required(VERSION 3.10)
project(json_test LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(nlohmann_json REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC nlohmann_json::nlohmann_json)


add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
                ${ROOT_DIR}/misc/*.json
                ${CMAKE_CURRENT_BINARY_DIR}/)
