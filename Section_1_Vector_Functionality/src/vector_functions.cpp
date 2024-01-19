#include "vector_functions.h"
#include <algorithm>
#include <iostream>
#include <vector>

// write your print vector function here

int countMultiplesOfFive(std::vector<int> V)
{
    int count = 0;
    for (int i : V)
    {
        if (i % 5 == 0)
        {
            count ++;
        }
    }
    return count;
}


void addElements(std::vector<int> v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}