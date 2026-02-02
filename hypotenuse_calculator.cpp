#include <iostream>
#include <cmath>
// hypotenuse calculator using cmath library c =sqrt(a^2 + b^2)
int main()
{
    double a , b, c;
    std::cout << "Enter value a: ";
    std::cin >> a;
    std::cout << "Enter value b: ";
    std::cin >> b;

    c = sqrt(pow(a,2)+pow(b,2));
    std::cout << "The hypotenuse is: " << c << std::endl;
    return 0;
}