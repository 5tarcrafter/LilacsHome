cmake_minimum_required(VERSION 3.10)
project(LilacsHome)

set(CMAKE_CXX_STANDARD 17)

# Point directly to the vc16/lib or vc17/lib directory
set(OpenCV_DIR "C:/Users/fired/Documents/CodeLibraries/opencv/build/x64/vc16/lib")

# Find OpenCV package installed on your system
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(OpenCVTest main.cpp)
target_link_libraries(OpenCVTest ${OpenCV_LIBS})

add_executable(TestApp Test.cpp)
target_link_libraries(TestApp PRIVATE ${OpenCV_LIBS})