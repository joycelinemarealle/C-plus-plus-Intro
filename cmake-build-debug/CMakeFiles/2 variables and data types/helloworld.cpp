//
// Created by Joyceline Marealle on 12/6/24.
//

#include <iostream>
int main (){

  //integer whole numbers
  int x = 5 ;
  int y = 2.5; //will trancate to 2
  int sum = x+y;

  //double -decimal
  double weight = 135.5;

  //single character
  char grade = 'A';
  char initial = 'B'; //only single char and use '' not ""
  char currency = '$';

  //boolean (true or false
  bool student = true;
  bool power = true;

  //string (objects represent a sequence of text
  std:: string name = "Joyceline";
  std::string day = "Friday";
  std::cout << name << "\n";
  std::cout << day << "\n";


  std::cout <<"There is your " << grade << "  congrats! " << '\n';
  std::cout << x <<"\n";
  std::cout << y << "\n";
  std::cout <<sum <<"\n";
  std::cout << weight << "\n";
  return 0;
}