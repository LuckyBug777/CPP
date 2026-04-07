#include <iostream>

int main()
{
    std::string name;
    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    std::cout << "Hello" << name;
    /*
    Run a block of code untill the condition is true
    */
    return 0;
}