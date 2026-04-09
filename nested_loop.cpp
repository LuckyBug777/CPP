#include <iostream>

int main()
{
    /*
    loop(){
        loop(){
        }
    }

    loop inside a loop is called as nested loops.
    */
    int rows, columns;
    char symbol;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    std::cout << "Enter number of columns: ";
    std::cin >> columns;
    std::cout << "Enter symbol: ";
    std::cin >> symbol;
    for (int j = 1; j <= rows; j++)
    {
        for (int i = 1; i <= columns; i++)
        {
            std::cout << symbol << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}