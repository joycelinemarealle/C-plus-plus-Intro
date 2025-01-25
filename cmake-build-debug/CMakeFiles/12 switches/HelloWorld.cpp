//
// Created by Joyceline Marealle on 12/10/24.
//

#include <iostream>
int main (){

  int month;
  std::cout << "Enter the month betwween 1-12";
  std::cin >> month;

  switch(month){
    case 1:
      std::cout << "It is January";
      break;
    case 2 :
      std::cout<< "It is February";
      break;
    case 3:
      std::cout<< "It is March";
      break;

    case 4:
      std::cout << "April";
      break;

    case 5 :
      std::cout << "May";
      break;

    case 6:
      std::cout<< "June";
    break;

    case 7:
      std::cout << "July";
    break;

    case 8 :
      std::cout << "August";
    break;

    case 9:
      std::cout<< "September";
    break;

    case 10:
      std::cout << "October";
    break;

    case 11 :
      std::cout << "November";
    break;

    case 12:
      std::cout << "June";
      break;

    default:
       std::cout <<"Please enter in only numbers through 1-12";
    }

  return 0;
  }