//
// Created by Joyceline Marealle on 1/26/25.
//view value at index
#include <iostream>

int main (){

    std::string name;
    std::cout << "Enter your name\n";
    std::getline (std::cin, name);
    //std::cin >>  name;

    //view index
    std::cout << name.at(0) << "\n";
}