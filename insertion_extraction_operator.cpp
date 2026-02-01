#include <iostream>

int main() {
    std::string name;
    int age;
    int num;
    std::string dname;
    std::cout << "what's your name?" << std::endl;
    std::getline(std::cin, name); // inline operation so we can take the space present in input
    std::cout << "what's your age?" << std::endl; // extraction operator
    std::cin >> age; // insertion operator
    std::cout << "what's your num?" << std::endl;
    std::cin >> num;
    std::cout << "whats ur dads name?" << std::endl;
    std::getline(std::cin >> std::ws, dname); // if we use getline after cin, the cin keep end line character \n which takes input in second input so we use std::ws
    std::cout << "Hello :" << name << " Your age :"<< age << " Num " << num << " Dname:" << dname << std::endl;
    return 0;
}