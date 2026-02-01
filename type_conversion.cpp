#include <iostream>
using namespace std;
int main() {
    double x = (int) 3.14; // implicit conversion
    char y = 100;
    cout << x;
    cout << y;

    cout << (char) 100; //explicit conversion
    return 0;
}