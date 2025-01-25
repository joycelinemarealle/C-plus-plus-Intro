//
// Created by Joyceline Marealle on 12/10/24.
//

#include <iostream>

int main (){
  char grade;
  std::cout << "Enter you letter grade:";
  std::cin >> grade;

  switch (grade){
    case 'A' :
      std::cout << "You did great" ;
      break;
    case 'B':
      std::cout << "You did good";
      break;
    case 'C':
      std::cout << "You did okay";
      break;
    case 'D':
      std::cout << "You did not do good";
        break;
    case 'F':
      std::cout << "You failed. Pll up your socks";
      break;
    default:
      std::cout << "Enter a valid grade";


  }


  return 0;
  }
