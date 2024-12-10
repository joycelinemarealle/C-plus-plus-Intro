
// Created by Joyceline Marealle on 12/6/24.
//two variables can share names with names_spaces

#include <iostream>
 namespace first {
  int x = 1;
 }
 namespace second {
 int x = 2;
}

int main (){
  using std::cout;
  using std::string;
  using namespace std; //then can remove std. Discourage to use namespace like this
  int x = 0;
  string s = "Hello World";
  std::string  j = "Jojo";
  cout << x<< '\n'; //can remove std::
  std::cout << first::x << '\n';
  cout <<second::x << '\n';
  return 0;
  }

