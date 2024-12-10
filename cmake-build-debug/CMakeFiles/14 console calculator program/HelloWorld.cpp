//
// Created by Joyceline Marealle on 12/10/24.
//

#include <iostream>

int  main () {
  char op;
  double num1;
  double num2;
  double result;


  std::cout << "*********** CALCULATOR **********" << std::endl;

  //track user operations
  std::cout<< "Enter either +-*/ " << "\n";
  std::cin >> op;

  //track user num1 and num2
  std::cout << "Enter num1 ";
  std::cin >> num1;

  std::cout << "Enter num2 ";
  std::cin >> num2;

  switch (op) {
    case '+': //single quotes for characters
      result = num1 + num2;
    std::cout<< result <<"\n";
    break;

    case '-':
      result = num1 - num2;
    std::cout << result << "\n";
    break;

    case '*':
      result =  num1 * num2;
    std::cout <<result << "\n";

    case '/':
      result = num1/num2;
    std::cout << result << "\n";
    break;

    default:
      std ::cout <<"Enter acceptable operation";


  }

  std::cout << "******************************" << std::endl;

  return 0;
  }