add_executable(test_ex)
target_sources(test_ex PRIVATE test_exercises.cpp)
target_include_directories(test_ex PRIVATE ../include)
target_link_libraries(test_ex PUBLIC vector_functions)

add_test(NAME test_ex1 COMMAND $<TARGET_FILE:test_ex> [ex1])
add_test(NAME test_ex2 COMMAND $<TARGET_FILE:test_ex> [ex2])