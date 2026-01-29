#include <iostream>

int main(){
    int x; //declaration
    x = 10;

    std::cout << "This is the value of x: " << x << '\n';
    std::cout << x;

    int age = 21;
    int year = 1999;
    float days = 885.5f;
    double number = 15.99;
    std::cout << number << '\n';
    std::cout << days << '\n';

    char grade = 'A';
    char nameIntial = 'B';
    std::cout << nameIntial << '\n';

    bool student = false;
    bool working = true;

    std::cout << student << '\n';

    std::string name = "Mr";
    std::string middleName = "unknown";
    std::cout << "Hello " << name << " " << middleName << '\n'; 

    return 0;
}