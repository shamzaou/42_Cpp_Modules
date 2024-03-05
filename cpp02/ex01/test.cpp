#include <iostream>
#include <cmath>

int main()
{
    float n = 52.6;
    int frac = 8;

    std::cout << roundf(n * (1 << frac)) << std::endl;
}