#define CATCH_CONFIG_MAIN
#include "catch2.hpp"
#include "vector_functions.h"

TEST_CASE( "Counting with loop is correct", "[ex1]" ) {
    std::vector<int> example = {5};
    REQUIRE( countMultiplesOfFive(example) == 1);

    // Add your test cases here
}

TEST_CASE( "Adding elements to a vector", "[ex2]" )
{
    std::vector<int> starting_vector;
    addElements(starting_vector, 5, 4);
    REQUIRE( starting_vector.size() == 4);
    for(auto &&i : starting_vector)
    {
        REQUIRE(i == 5);
    }
}