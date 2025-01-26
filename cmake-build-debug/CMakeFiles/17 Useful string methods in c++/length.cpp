//
// Created by Joyceline Marealle on 1/26/25.
//
#include <iostream>

int main (){
  std::string name;
  std :: cout <<"Enter your name\n";
  std:: getline(std::cin, name);
 // std::cin >> name;

  // clear string
  name.clear();
  std::cout << "Hello" << name;


  //Empty string
  if (name.empty()) {
    std::cout << "You did not enter your name\n";
  } else {
    std::cout << "Hello" << name;
  }

  //String length
  if (name.length() > 12) {
    std::cout << "Your name cannot be more than 12 characters long\n";
  } else {
    std::cout << "Welcome " << name ;
    }


  return 0;
}