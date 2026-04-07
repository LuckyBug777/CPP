#include <iostream>

int main()
{
    /*
    Execute some part of code then check if the condition is true. if its true run again.
    */
    int number;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is: " << number;
    return 0;
}