#include <iostream>
#include <vector>
#include <string>

std::string encrypt(std::string text, int shift);
std::string decrypt(std::string text, int shift);

struct VaultEntry
{
    std::string WebsiteName;
    std::string UserName;
    std::string EncryptedPasstext;
};

int main()
{
    std::cout << "*-*-*-*-*-*-*-*-*-*-WELCOME-*-*-*-*-*-*-*-*-*-*" << std::endl;
    int choice;
    std::vector<VaultEntry> MyVault;
    std::cout << "Enter Your choice \n 1. Store\n 2. Fetch\n 3. Exit\n";
    std::cin >> choice;
    std::cin.ignore();

    do
    {
        VaultEntry vault;
        if (choice == 1)
        {
            std::string webname, uname, pswd;
            std::cout << "Enter website name: ";
            std::getline(std::cin, webname);
            vault.WebsiteName = webname;
            std::cout << "Enter user name: ";
            std::getline(std::cin, uname);
            vault.UserName = uname;
            std::cout << "Enter password: ";
            std::getline(std::cin, pswd);
            vault.EncryptedPasstext = encrypt(pswd, 3);
            MyVault.push_back(vault);
        }
        else if (choice == 2)
        {
            std::string webname;
            std::cout << "Enter name of website which u need username and password: ";
            std::getline(std::cin, webname);
            bool found = false;
            for (VaultEntry item : MyVault)
            {
                if (item.WebsiteName == webname)
                {
                    found = true;
                    std::cout << "Your User Name is: " << item.UserName << "Password is: " << decrypt(item.EncryptedPasstext, 3) << "\n";
                    break;
                }
            }
            if (!found)
            {
                std::cout << "The website name you are seraching for is not found\n";
            }
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            std::cout << "Invalid Choice" << std::endl;
        }
        std::cout << "Enter Your choice \n 1. Store\n 2. Fetch\n 3. Exit\n";
        std::cin >> choice;
    } while (choice != 3);
    return 0;
}

std::string encrypt(std::string text, int shift)
{
    char letter;
    std::string result;
    for (int i = 0; i < text.length(); i++)
    {
        if (text.at(i) >= 97 && text.at(i) <= 122)
        {
            letter = text.at(i) + shift;
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
        else if (text.at(i) >= 65 && text.at(i) <= 90)
        {
            letter = text.at(i) + shift;
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
            result += text.at(i);
        }
    }
    return result;
}

std::string decrypt(std::string text, int shift)
{
    char letter;
    std::string result;
    for (int i = 0; i < text.length(); i++)
    {
        if (text.at(i) >= 97 && text.at(i) <= 122)
        {
            letter = text.at(i) - shift;
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
        else if (text.at(i) >= 65 && text.at(i) <= 90)
        {
            letter = text.at(i) - shift;
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
            result += text.at(i);
        }
    }
    return result;
}