//
// Created by Joyceline Marealle on 12/6/24.
//
#include <iostream>

using students_t = int;

int main(){

  //BODMAS
  //parenthisi
  //multi and div
  //add + sub

  int parents = 6-5+4 *3/2;
  std::cout << "Parents "<<  parents << '\n';


  int  students = 20;
//  students += 1;
  // students ++ ;
  // students --; //student = student +1
  students *=2;
  students /=2;
  // students /=3; //decimal trancated from 6.67 to 6. if need decimal use double

  //remainder
  // int remainder = students % 2; //evenly number so 0
  int remainder = students %3; //remainder since students is even number

  std::cout << students << '\n';
  std::cout << remainder << '\n';
  return 0;
}