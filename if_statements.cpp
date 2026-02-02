#include <iostream>
/*
if statements = do something if condition is true.
              = dont do anything if condition is false.
*/
int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >>  age;

    if (age >= 18) {
        std::cout << "Welcome to the club !!!";
    }
    else if (age < 0){
        std::cout << "You are not born";
    }
    else {
        std::cout << "You are not old enough";
    }
    return 0;
}