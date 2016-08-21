cmake_minimum_required(VERSION 2.8.4)
# About this project
#-------------------
project(cvcuda)

message("${PROJECT_NAME}")

# Add headers and source files here
#-------------------

# Create binaries
#-------------------
add_executable(test	test.cpp)

# OPENCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Linker
#-------------------
target_link_libraries(test ${OpenCV_LIBS})
