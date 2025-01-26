//
// Created by Joyceline Marealle on 1/26/25.
//can errase portion of string
#include <iostream>

int main (){

    std::string name;
    std::cout << "Enter your name\n";
    std::getline (std::cin, name);
    //std::cin >>  name;

    //Erase. Insert indexes of values to be erased. Ending not include so (0,2) only 0,1
    name.erase(0,2);
    std::cout << name;

   return 0;
}