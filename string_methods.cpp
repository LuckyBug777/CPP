#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12){
        std::cout << "Name can't be above 12 charchaters";
    }else{
        std::cout << name.at(4);
        std::cout << "Welcome " << name;
    }
    /*
    name.empty() checks if string is empty.
    name.length() returns the length of the string.
    name.append() appends string. example, name.append("@gmail.com")
    name.at() gives the char at that index. example, name.at(2)
    name.insert() inserts charchter or string at the that index. example name.insert(0, "@")
    name.find() finds for occurance n returns position
    name.erase() will erase the word or string. example, name.erase(0,3) erases charchter between 0 and 3
    */
    return 0;
}