//
// Created by Joyceline Marealle on 12/6/24.
//
#include <iostream>

int main (){
    double x = 3.4;
    double y =4;
    double z;
    double w;
    double p ;

    z = std::max(x,y);
    w = std::min(x,y);
    // p = pow(2,3);
    // p = sqrt(9);
    // p = abs(-3);
    // p = round(x);
    // p = ceil (x); //rounds up for 3.4 to 4
    p = floor (x); //3.4 to 3

    std::cout <<z<<'\n';
    std::cout << w << '\n';
    std::cout << p<< '\n';

  return 0;
}
