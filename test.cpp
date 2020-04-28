#include <iostream>
#include "CLab.h"


int main(int argc, char const *argv[])
{
    Readlines lines("test.txt");
    lines.read();

    std::cout << lines[0] << '\n';
    lines[0] = "ABC";
    std::cout << lines[0] << '\n';
    return 0;
}