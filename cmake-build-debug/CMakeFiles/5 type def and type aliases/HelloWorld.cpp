//
// Created by Joyceline Marealle on 12/6/24.
//

#include <iostream>
#include <vector>

//typedef std::vector <std::pair<std::string, int> > pairlist_t; //new identifies for vector
// int main (){
//   pairlist_t pairlist;
//  return 0;
//}

// typedef std:: string text_t ; //define type and add alias name with _t
// typedef int number_t;

//using ## = type  replace typedef
// new identified for a data type. Helps with code readability and reducing typos
using text_t =  std:: string;
using number_t = int;

  int main (){
  text_t name = "Jojo";
  number_t age = 5;
  std::cout << name << '\n';
  std::cout << age << '\n' ;
  return 0;
  }