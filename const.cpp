#include <iostream>

int main(){
    const double pi = 3.14;
    double radius = 10;
    double circumference = 2 * pi * radius;
    std::cout<< circumference << std::endl;

    const int width = 10;
    //const used when we dont want to change the value after declaration.
    return 0;
}