cmake_minimum_required(VERSION 3.16)
project(vector_functionality_exercises
  VERSION 0.0.1
  LANGUAGES CXX
)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(src)

include(CTest)
enable_testing()

add_subdirectory(test)
