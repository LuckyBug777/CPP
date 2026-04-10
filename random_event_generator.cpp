#include <iostream>
#include <ctime> //To use time() function and many other similar funcitons.

int main()
{
    srand(time(NULL));
    int randNum = (rand() % 5) + 1;
    switch (randNum)
    {
    case 1:
        std::cout << "You win a sticker!\n";
        break;
    case 2:
        std::cout << "You win a t-shirt!\n";
        break;
    case 3:
        std::cout << "You win a dinner!\n";
        break;
    case 4:
        std::cout << "You win a gift card!\n";
        break;
    case 5:
        std::cout << "You win a concert tickets!\n";
        break;
    }
    return 0;
}