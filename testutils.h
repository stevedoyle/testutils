#ifndef __TESTUTILS_H__
#define __TESTUTILS_H__

#include <iosfwd>

template <class T>
void checkResult(const std::string& message, 
    const T& expected, const T& actual)
{
    std::string delim = "";
    if(message.length() > 0) 
      delim = ", ";

    if(actual == expected) {
        std::cout << message << delim <<
            "Test Passed" << std::endl;
    } else {
        std::cout << message << delim 
            << "Test Failed, expected " 
            << expected << " but got " << actual << std::endl;
    }
}

template <class T>
void checkResult(const T& expected, const T& actual)
{
    checkResult("", expected, actual);
}

#endif
