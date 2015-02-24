#include <iostream>

#include "testutils.h"

int main()
{
    int actual = 5;
    int expected = 5;

    checkResult(expected, actual);
    checkResult("Sample message", expected, actual);
    checkResult("Another sample message", expected, 4);

    return 0;
}

