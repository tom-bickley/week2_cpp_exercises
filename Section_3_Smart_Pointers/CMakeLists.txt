cmake_minimum_required(VERSION 3.16)
project(smart_pointer_exercises
  VERSION 0.0.1
  LANGUAGES CXX
)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CXX_STANDARD_REQUIRED C++17)

add_subdirectory(src)