//
// Created by Joyceline Marealle on 1/26/25.
//break = break out of look
//continue = skip current iteration

#include <iostream>

// int  main (){
//    for (int i = 10; i >= 0; i--){
//        if ( i ==5) {
//            break;
//        }
//      std::cout << i << '\n';
//    }
//   return 0;
//}

int  main (){
    for (int i = 10; i >= 0; i--){
        if ( i ==5) {
           continue;
        }
        std::cout << i << '\n';
    }
    return 0;
}