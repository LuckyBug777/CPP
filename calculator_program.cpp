#include <iostream>

int main()
{
    char op;
    double num1, num2, res;

    std::cout << "*-*-*-*-*-*-*-*CALCI*-*-*-*-*-*-*-*" << std::endl;

    std::cout << "Enter an operator (+ - * /): " << std::endl;
    std::cin >> op;

    std::cout << "Enter an number: " << std::endl;
    std::cin >> num1;

    std::cout << "Enter another number: " << std::endl;
    std::cin >> num2;

    switch(op) {
        case '+':
            res = num1 + num2;
            std::cout << "Result = " << res << std::endl;
            break;
        case '-':
            res = num1 - num2;
            std::cout << "Result = " << res << std::endl;
            break;
        case '*':
            res = num1 * num2;
            std::cout << "Result = " << res << std::endl;
            break;
        case '/':
            res = num1 / num2;
            std::cout << "Result = " << res << std::endl;
            break;
        default:
            std::cout << "Enter valid operator from (+ - * /)." << std::endl;
        
    }

    std::cout << "*-*-*-*-*-*-*-**-*-*-*-*-*-*-**-*-*" << std::endl;

    return 0;
}