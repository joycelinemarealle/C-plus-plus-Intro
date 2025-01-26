//
// Created by Joyceline Marealle on 1/26/25.
//insert at particular position
#include <iostream>

int main (){

    std::string name;
    std::cout << "Enter your name\n";
    std::getline (std::cin, name);
    //std::cin >>  name;

    //insert at index ( position, value)
    name.insert(0, "Hello ");
    std::cout << name << "\n";





}