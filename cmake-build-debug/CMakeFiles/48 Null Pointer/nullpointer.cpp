//
// Created by Joyceline Marealle on 1/25/25.
//

# include <iostream>;

int main (){

  // null value = value meaning has no value
  //null pointer r= pointer that is not pointing to anything, Pointer holds null value
    //nullptr = keyword represent a null pointer literal
  // null pointers helpful to determine if address was successfuly assigned to a pointer
  //when using pointers , be careful code is not
  //dereferencing nullptr or pointing to free memoery
  //this will cause undefined behaviour

  //ensure pointer starts at a know state
  int *pointer = nullptr;
  int x = 123;
  pointer = &x;

//before dereferencing pointer check is not pointing to null value
  //check pointer has assigned value before derefencing it
  if (pointer == nullptr) {
   std::cout << "Address not assigned"<< "\n";

  } else {
    std::cout <<"address was assigned"<< "\n";
      //Derefence now,  safe to use pointer
      std ::cout << *pointer << "\n";
  }

  return 0;
}