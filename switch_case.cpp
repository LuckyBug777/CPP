#include <iostream>

int main()
{
    /*
    Switch is alternative for many else if statements
    */
    int month;
    std::cout << "Enter month 1 to 12: ";
    std::cin >> month;
    switch (month)
    {
    case 1:
        std::cout << "JAN" << std::endl;;
        break;
    case 2:
        std::cout << "FEB" << std::endl;
        break;
    default:
        std::cout << "Not implimented yet" << std::endl;
    }
    return 0;
}