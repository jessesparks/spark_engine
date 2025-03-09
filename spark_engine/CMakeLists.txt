cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 23)

project(spark_engine)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS "src/*.h" "src/*.cpp")
add_library(${PROJECT_NAME} ${SRC_FILES})
target_include_directories(${PROJECT_NAME}
                           PUBLIC "${PROJECT_SOURCE_DIR}/vendor/spdlog/include")
#find_package(fmt REQUIRED)
add_subdirectory(vendor/fmt)
target_link_libraries(${PROJECT_NAME} PUBLIC fmt::fmt)
