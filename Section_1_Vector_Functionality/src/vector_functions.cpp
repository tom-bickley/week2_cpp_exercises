#include "vector_functions.h"
#include <algorithm>
#include <iostream>
#include <vector>

// write your print vector function here

int countMultiplesOfFive(std::vector<int> V)
{
    int count = std::count_if(V.begin(), V.end(), [](int x){return x%5 == 0;});
    return count;
}


void addElements(std::vector<int> v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}