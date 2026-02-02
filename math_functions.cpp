#include <iostream>
#include <cmath> //for advnaced math functions like power
// https://cplusplus.com/reference/cmath/ has all the math functions avilable
int main()
{
    double x = 3;
    double y = 5.5;
    double z;

    // z = std::max(x,y);
    // z = std::min(x,y);
    // z = pow(x,y);
    // z = sqrt (9);
    // z = abs(-2);
    // z = round(y);
    z = ceil(y);
    std::cout << z << std::endl;
    return 0;
}