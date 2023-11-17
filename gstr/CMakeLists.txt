cmake_minimum_required(VERSION 3.10)
project(rtsp_streamer LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(gstreamer REQUIRED)

file(GLOB SOURCES "*.cpp")
file(GLOB HEADERS "*.h")

add_executable(${PROJECT_NAME}
               ${HEADERS}
               ${SOURCES})

target_include_directories(${PROJECT_NAME}
                           PUBLIC
                           gstreamer_gstreamer-controller-1.0_INCLUDE_DIR)

target_link_libraries(${PROJECT_NAME}
                        PUBLIC
#                        gstreamer_LIBS
                        gstreamer::gstreamer-1.0)
