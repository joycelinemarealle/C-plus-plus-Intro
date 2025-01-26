//
// Created by Joyceline Marealle on 1/26/25.
// nested loop = loop within a loop

//repeat count 1-5 three times

#include <iostream>

int main (){
    int rows;
    int columns;
    char symbol;

std::cout << "how many rows";
    std::cin >> rows;

  for (int i = 1; i <=3; i++){
      for ( int j = 1; j <=5; j++){
        std::cout << j ;
      }
      std::cout << '\n';
  }

    return 0;
}
