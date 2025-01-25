//
// Created by Joyceline Marealle on 1/25/25.
//

#include <iostream>

int main (){
  // pointers variable that stores memory address of another variable. sometimes easier to work with an address
  // & (ambersand) address of operator
  // * dereference operator

  std :: string name = "Jojo";
    int age = 28;
  std :: string freePizzas [2] = {"pizza 1", "pizza 2"};

  //create pointer, same data type as variable it is pointing to
   std :: string *ptrName = &name;
  int *ptrAge = &age;

    //array is already an address. so no need to have &freePizzas
   std:: string *ptrFreePizzas = freePizzas;


  //contains memory address of variable
  std::cout << ptrName << " address of name" <<std::endl;
  std::cout << ptrAge<<" address of age"<< std::endl;
    std::cout << freePizzas << " address of free pizza" << std::endl;

  //if need value at memory address of variable then use derefence
  std::cout <<*ptrName << std::endl;
  std::cout << *ptrAge << "\n";
  //array pointers to first element in list.so value of address if first element
    std::cout << *ptrFreePizzas << "\n";

  return 0;
  }