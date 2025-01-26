//
// Created by Joyceline Marealle on 1/26/25.
//repeat code infinite number of times

#include <iostream>
int main (){
  std::string name;

  while (name.empty()){
    //as long as name empty keep on asking user to enter name
    std:: cout << "Enter a name:\n";
    std::getline(std::cin, name);
  }
  std::cout << "Hello " << name;

  return 0;
}
