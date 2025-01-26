//
// Created by Joyceline Marealle on 1/26/25.
//appends toward the end
#include <iostream>

int main (){

  std::string name;
  std::cout << "Enter your name\n";
  std::getline (std::cin, name);
  //std::cin >>  name;

  //append
  name.append("@gmail.com");
  std::cout << "Your username is now " << name;

  //view index
  std::cout << name.at(0) << "\n";

return 0;

}