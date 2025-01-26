//
// Created by Joyceline Marealle on 1/26/25.
//
#include <iostream>

int main (){

    std::string name;
    std::cout << "Enter your name\n";
    std::getline (std::cin, name);
    //std::cin >>  name;

    //find position of value looking fo
    // Jojo then 'j" position = 2 since capslock sensitive
    std::cout << name.find("j") << std::endl;





}