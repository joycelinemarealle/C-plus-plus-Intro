//
// Created by Joyceline Marealle on 1/26/25.
//
#include <iostream>

int main (){
    int rows;
    int columns;
    char symbol;

    // outer loop determins rows while inside determins columns
    std::cout << "how many rows";
    std::cin >> rows;

    std::cout << "How many columns";
    std::cin >> columns;

    std::cout << "Enter symbol";
    std::cin >>symbol;

    for (int i = 1; i <=rows; i++){
        for ( int j = 1; j <=columns; j++){
            std::cout << symbol;;
        }
        std::cout << '\n';
    }
    return 0;
}
