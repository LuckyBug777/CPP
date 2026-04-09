#include <iostream>

int main()
{
    /*
    This is the encryption & decryption machine
    */
    std::cout << "*-*-*-*-*-*-*-*-*-*-WELCOME-*-*-*-*-*-*-*-*-*-*" << std::endl;
    int number;
    int choice;
    char letter;
    std::string word;
    std::cout << "Enter Your choice \n 1. Encrypt\n 2. Decrypt\n 3. Exit\n";
    std::cin >> choice;
    // std::cout << ((choice == 1) ? "You chose Encrypt" :(choice == 2) ? "You chose Decrypt" : "Invalid choice") << std::endl;
    do
    {
        std::string result;
        if (choice == 1)
        {
            std::cout << "Welcome to Encrypter" << std::endl;
            std::cin.ignore();
            std::cout << "Enter the message you want to Encrypt: ";
            std::getline(std::cin, word);
            std::cout << "Enter the number you want to shift by: ";
            std::cin >> number;

            for (int i = 0; i < word.length(); i++)
            {
                if (word.at(i) >= 97 && word.at(i) <= 122)
                {
                    letter = word.at(i) + number;
                    if (letter > 122)
                    {
                        int extra = letter - 122;
                        letter = 96 + extra;
                        result += letter;
                    }
                    else
                    {
                        result += letter;
                    }
                }
                else if (word.at(i) >= 65 && word.at(i) <= 90)
                {
                    letter = word.at(i) + number;
                    if (letter > 90)
                    {
                        int extra = letter - 90;
                        letter = 64 + extra;
                        result += letter;
                    }
                    else
                    {
                        result += letter;
                    }
                }
                else
                {
                    result += word.at(i);
                }
            }
            std::cout << "Your Encrypted message is: " << result << std::endl;
            std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
        }
        else if (choice == 2)
        {
            std::cout << "Welcome to Decrypter" << std::endl;
            std::cin.ignore();
            std::cout << "Enter the message you want to Decrypt: ";
            std::getline(std::cin, word);
            std::cout << "Enter the number you want to shift by: ";
            std::cin >> number;
            for (int i = 0; i < word.length(); i++)
            {
                if (word.at(i) >= 97 && word.at(i) <= 122)
                {
                    letter = word.at(i) - number;
                    if (letter < 97)
                    {
                        int extra = 97 - letter;
                        letter = 123 - extra;
                        result += letter;
                    }
                    else
                    {
                        result += letter;
                    }
                }
                else if (word.at(i) >= 65 && word.at(i) <= 90)
                {
                    letter = word.at(i) - number;
                    if (letter < 65)
                    {
                        int extra = 65 - letter;
                        letter = 91 - extra;
                        result += letter;
                    }
                    else
                    {
                        result += letter;
                    }
                }
                else
                {
                    result += word.at(i);
                }
            }
            std::cout << "Your Decrypted message is: " << result << std::endl;
            std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            std::cout << "Invalid Choice" << std::endl;
            std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
        }
        std::cout << "Enter Your choice \n 1. Encrypt\n 2. Decrypt\n 3. Exit\n";
        std::cin >> choice;
    } while (choice != 3);
    std::cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << std::endl;
    return 0;
}