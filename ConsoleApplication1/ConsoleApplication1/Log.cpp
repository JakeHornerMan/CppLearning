#include <iostream>

void Log(const char* message)
{
    std::cout << message << std::endl;
}

void Log(int number)
{
    std::cout << number << std::endl;
}