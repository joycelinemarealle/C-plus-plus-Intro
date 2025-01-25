//
// Created by Joyceline Marealle on 12/6/24.
//
#include <iostream>

int main (){
  std :: string name;
  int age;

  std ::cout << "What is your age?";
  std::cin >> age;
  std::cout << "What is your  full name?"; //need to read spaces in strings
    // (std ::cin >>name);
  std::getline(std ::cin >> std::ws,name); //std::ws removes line white space before user input

  std::cout << "Hello " << name << '\n';
  std::cout << "You are " << age << " years old";

  return 0;
  }