#include <iostream>

void wish(std::string boy, int age); // declaration of function so that we can write the defination of the function after the main function.

int main()
{
    /*
    A block of reusable code.
    function(datatype argument, datatype second argument) syntax of a function.
    */
    std::string name = "ME";
    int age = 21;
    wish(name, age);
    return 0;
}

void wish(std::string boy, int age)
{
    std::cout << "Wish you happy birthday meri jaan " << boy << " You are now " << age << "\n";
}