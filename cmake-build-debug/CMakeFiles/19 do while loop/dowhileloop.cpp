//
// Created by Joyceline Marealle on 1/26/25.
//do whole loop = do some block of code first,
//                THEN repeat again if condition is true


#include <iostream>

int main (){
  int number;
  do { std ::cout << "Enter a positive integer:";
    std::cin >> number;

  } while (number < 0);

  return 0;
}
