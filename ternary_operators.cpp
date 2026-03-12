#include <iostream>

int main() {
    // condition ? expression1 : expression2;
    // int grade = 75;
    // grade >= 60 ?  std::cout << "You Pass!" << std::endl : std::cout <<"You Fail" << std::endl;

    // int num = 2;
    // num % 2 == 1 ?  std::cout << "Odd" << std::endl : std::cout <<"Even" << std::endl;

    bool hungry = true;
    std::cout << (hungry ? "You are hungry " : "You are full ") << std::endl;
    return 0;
}