//
// Created by Joyceline Marealle on 12/10/24.
//

#include <iostream>
int main (){
  //ternary operatory ?: = replacement of if/else statement
  //condition ? expression1:expression2:


 bool hungry = true;

  hungry ? std::cout << "You are hungry" : std::cout << "You are full";
  std::cout << (hungry? "You are hungry": "You are full");



// int number = 5;
//   number % 2 == 0  ? std::cout << "Even number" : std::cout << "Odd number";




  // int grade = 75;
  // grade >= 60 ? std::cout << "You pass" : std::cout << "You fail";


// int grade;
//  if (grade >=60) {
//    std::cout << "You pass";
//  }
//  else{
//    std::cout << "You fail";
//    }

  return 0;
}