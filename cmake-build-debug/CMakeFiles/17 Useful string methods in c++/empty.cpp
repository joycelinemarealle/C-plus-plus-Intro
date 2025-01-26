//
// Created by Joyceline Marealle on 1/26/25.
//
#include <iostream>

int main (){
    std::string name;
    std :: cout <<"Enter your name\n";
    std:: getline(std::cin, name);
    // std::cin >> name;
    //Empty string
    if (name.empty()) {
        std::cout << "You did not enter your name\n";
    } else {
        std::cout << "Hello " << name;
    }


    return 0;
}