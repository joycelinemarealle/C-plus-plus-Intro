//
// Created by Joyceline Marealle on 12/10/24.
//

#include <iostream>

int main (){
  // && check if two conditions are true
  // || check if at least one of two conditions is true;
  // ! = reverses the logical state og its operand

  int temp;
  bool sunny = false;

  std::cout << "Enter a Temperature" << "\n";
  std::cin >> temp;


  if (temp <=0 || temp > 30) {
    std::cout << "Temp is bad";
  }
  else {
    std::cout << "The temp is good\n";
  }

  if (!sunny) {
    std::cout << "It is cloudy outside\n";
  } else {
    std::cout << "It i sunny outsdie\n";
  }



  // if (temp > 0 && temp <=30){
  //   std::cout << "Temperature is good\n";
  //
  // }
  // else {
    //   std::cout << "The temp is bad\n";
    // }


  // if (temp <=0 || temp > 30) {
  //   std::cout << "Temp is bad";
  // }
  // else {
  //   std::cout << "The temp is good\n";
  // }



  return 0;
  }