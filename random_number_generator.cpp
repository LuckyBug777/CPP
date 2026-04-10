#include <iostream>

int main()
{
    /*
    Random number generator
    */
    srand(time(NULL));
    int num = (rand() % 200) + 1;

    std::cout << num << std::endl;
    return 0;
}