//
// Created by Joyceline Marealle on 1/26/25.
//deletes entire string
#include <iostream>

int main (){
    std::string name;
    std :: cout <<"Enter your name\n";
    std:: getline(std::cin, name);
    // std::cin >> name;

    // clear string
    name.clear();
    std::cout << "Hello" << name;

    return 0;
}