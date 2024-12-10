
// Created by Joyceline Marealle on 12/6/24.
//two variables can share names with names_spaces

#include <iostream>
 namespace first {
  int x = 1;
 }
 namespace second {
 int x = 2;
}

int main (){
  int x = 0;
  std::cout << x<< '\n';
  std::cout << first::x << '\n';
  std::cout <<second::x << '\n';
  return 0;
  }

