cmake_minimum_required(VERSION 2.8.4)
# About this project
#-------------------
project(cvcuda)

message("${PROJECT_NAME}")

# Add headers and source files here
#-------------------

# Create binaries
#-------------------
add_executable(tester test.cpp)

# OPENCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

## CUDA
#find_package(CUDA REQUIRED)


# Linker
#-------------------
target_link_libraries(tester ${OpenCV_LIBS})
