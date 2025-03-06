cmake_minimum_required(VERSION 3.31)

set(CMAKE_CXX_S 23)

project(sparkengine)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS "src/*.h" "src/*.cpp")
add_library(${PROJECT_NAME} ${SRC_FILES})
