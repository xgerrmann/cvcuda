cmake_minimum_required(VERSION 2.8.4)
# About this project
#-------------------
project(cvcuda)

message("${PROJECT_NAME}")

# Create binaries
#-------------------
add_executable(a.out main.cpp)

# OPENCV
find_package(OpenCV 3 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Linker
#-------------------
target_link_libraries(a.out ${OpenCV_LIBS})
