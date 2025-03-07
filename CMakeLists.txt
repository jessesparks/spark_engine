cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 23)

project(TestGame)
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS "test_game/src/*.h"
					"test_game/src/*.cpp")
add_executable(${PROJECT_NAME} ${SRC_FILES})
add_subdirectory(spark_engine)
target_link_libraries(${PROJECT_NAME} PRIVATE spark_engine)
target_include_directories(${PROJECT_NAME} PRIVATE spark_engine/src)
