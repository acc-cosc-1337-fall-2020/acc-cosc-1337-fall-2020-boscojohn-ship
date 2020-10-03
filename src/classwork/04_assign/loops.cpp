//cpp
#include "loops.h"
#include <iostream>

int display_factorial(int num)
{
    int factorial = 0;
    for (int i = 0; i < num; ++i)
    {
        factorial *= i;
    }
    return factorial;
}