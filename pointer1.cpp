/*
FileName: pointer1.cpp
created by Muhammad Yasir
Date: 30.06.2019
copy adress's variable to pointer 
*/
#include <iostream>

int main () {
   int  var = 10;   // actual variable declaration.
   int  *pointer;        // pointer variable

   pointer = &var;       // store address of var in pointer variable

   std::cout << "Value of var variable: ";
   std::cout << var << std::endl;

   // print the address stored in ip pointer variable
   std::cout << "Address stored in pointer variable: ";
   std::cout << pointer << std::endl;

   // access the value at the address available in pointer
   std::cout << "Value of *pointer variable: ";
   std::cerr << pointer << std::endl;

   return 0;
}
