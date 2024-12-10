//
// Created by Joyceline Marealle on 12/6/24.
//

#include <iostream>

int main (){
  double x = (int) 3.14;
  char y = 100; //displays the ascii


  int correct = 8;
  int questions = 10;
  double score = correct/(double)questions * 100; //trancated response so cast to double

  std::cout << "Score " << score <<  '%'<< '\n';
  std::cout << y << '/n';
    std::cout << x << '\n';
  }

