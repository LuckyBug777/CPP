#include <iostream>

int main() {
    /*
    && - check if both the conditions are true.
    || - check if any of the conditions are true.
    ! - reverses logical state of its operand.
    */
    int temp;
    bool sunny;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;
    if(temp > 0 && temp < 30){
        std::cout << "The temp is good\n";
        sunny = true;
    }
    else{
        std::cout << "The temp is bad\n";
    }
    if(!sunny){
        std::cout << "Its cloudy\n";
    }
    else{
        std::cout << "Its sunny\n";
    }
    return 0;
}