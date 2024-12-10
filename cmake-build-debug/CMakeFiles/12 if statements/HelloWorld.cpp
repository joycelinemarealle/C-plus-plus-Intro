//
// Created by Joyceline Marealle on 12/10/24.
//

#include <iostream>

int main (){
  int age;

  std::cout <<"What is your age?" << "\n";
  std::cin >>age;
//order of the if statements matter
  if (age >=100) {
    std::cout << "You are too old to enter this site" << "\n";
  }
  else if (age >=18){
    std::cout << "You are an Adult "<< "\n";
    }
  else if(age < 0 ) {
    std::cout << "You have not been born"<<"\n";

  }

    else{
      std::cout <<"You sre not old enough to play" << "\n";
    }



  return 0;

  }
