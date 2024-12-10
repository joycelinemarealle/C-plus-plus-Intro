//
// Created by Joyceline Marealle on 12/6/24.
//
//
#include <iostream>

int main (){
  double a;
  double b;
  double c;

  std::cout << "Enter side A:" ;
  std::cin>> a;
  std::cout << "enter side B:";
  std::cin >> b;
  std::cout << "Enter side C: ";
  std::cin >> c;

  a = pow(a,2);
  b = pow(b,2);
  c = sqrt(a+b);

  std::cout << "the hypotenuse of triangle " << "is " << c << '\n';
  return 0;
}