# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.31
cmake_policy(SET CMP0009 NEW)

# SRC_FILES at CMakeLists.txt:7 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/jesse/dev/spark_engine/spark_engine/src/*.cpp")
set(OLD_GLOB
  "/home/jesse/dev/spark_engine/spark_engine/src/main.cpp"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/jesse/dev/spark_engine/tmp/linux/CMakeFiles/cmake.verify_globs")
endif()

# SRC_FILES at CMakeLists.txt:7 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/home/jesse/dev/spark_engine/spark_engine/src/*.h")
set(OLD_GLOB
  "/home/jesse/dev/spark_engine/spark_engine/src/entry_point.h"
  "/home/jesse/dev/spark_engine/spark_engine/src/spark.h"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/home/jesse/dev/spark_engine/tmp/linux/CMakeFiles/cmake.verify_globs")
endif()
