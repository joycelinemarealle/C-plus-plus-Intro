//
// Created by Joyceline Marealle on 1/25/25.
//
#include <iostream>;

int main (){
  //Define variables
  double temp ;
  char unit;

  std::cout << "temperature conversion" << "\n";
  std::cout << "F = Fahrenheit\n";
  std::cout << "C = Celsius\n";
  std:: cout << " What unit would you like to convert to?\n";
  std::cin >> unit;
// char ''
  if (unit == 'F' || unit == 'f'){
    // use formual C-> F
    std::cout << "Enter temp in Celcisus\n";
    std::cin >> temp;
    temp = 9/5 *( temp + 32.0);
    std::cout << "Temperature in Farenheit: " << temp << "F\n";
  } if (unit == 'C' || unit == 'c'){
    //use formual F -> C
    std :: cout << "Enter the temperature in Farenehit\n";
    std::cin >> temp;
    temp = 5/9 * (temp -32.0);
    std::cout << "Temperature in Celclius " << temp << "C\n";
    } else{
      //choose correct unit
      std::cout << "Enter valid respeonce F,f,C,c\n";
    }
  std::cout << "********************************" << "\n";
  return 0;
}