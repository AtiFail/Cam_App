cmake_minimum_required(VERSION 3.24)
project(Cam_App)

set(CMAKE_CXX_STANDARD 17)
set(OpenCV_DIR /opt/homebrew/Cellar/opencv/4.7.0_1/include/opencv4)

add_executable(Cam_App main.cpp)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})