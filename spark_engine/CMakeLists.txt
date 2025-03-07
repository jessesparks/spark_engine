cmake_minimum_required(VERSION 3.31)

set(CMAKE_CXX_STANDARD 23)

project(spark_engine)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS "src/*.h" "src/*.cpp")
add_library(${PROJECT_NAME} ${SRC_FILES})
