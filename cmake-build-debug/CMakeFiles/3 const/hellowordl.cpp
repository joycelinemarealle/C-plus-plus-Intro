//
// Created by Joyceline Marealle on 12/6/24.
//
#include <iostream>

int main (){
  //The const keyworkd specified that a variable is a constant
  //variable becomes read only and cant be changed
  //circumference of circle 2pir
  const double PI = 3.14159;
  double radius = 10.12;
  double circumference = 2 * PI* radius;

  const int LIGHT_SPEED = 299792458;
  const int WIDTH = 1920;
  const in LENGTH = 1080;

  std::cout << "The circumference of circle is " << circumference << '\n';

  return 0;


}