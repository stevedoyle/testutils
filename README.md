# testutils
C++ helper utilities

Sample usage:

    int actual = 5;
    int expected = 5;

    checkResult("Sample message", expected, actual);
    // Output: Sample message, Test Passed

    actual = 4;
    checkResult("Sample message", expected, actual);
    // Output: Sample message, Test Failed, expected 5 but got 4
