#include <iostream>

int main()
{
    /*
    break - break out of the loop.
    continue - skip current iteration.
    */
    for (int i = 0; i <= 5; i++)
    {
        if (i == 4)
        {
            break;
            //number 5 will be skipped since loop is broken when i = 4;
        }
        else if (i == 2)
        {
            continue;
        }
        else
        {
            std::cout << i << "\n";
        }
    }
    return 0;
}