/*
FileName: dynamicMemory.cpp
Created by Muhammad Yasir
Date: 30.06.2019
dynamic memory test
*/
#include <iostream>

int main () {

   double* arr; // Pointer initialized with null
   arr  = new double[3];   // Request memory for the variable

   arr [0]= 25;     // Store value at allocated address
   arr [1]= 11;
   arr [2]= 46;
   std::cout << "Value of pvalue : " << arr[0] <<" "<< arr[1]<<" "<<arr[2]<<std::endl;

    delete [] arr;// free up the memory.

   return 0;
}
