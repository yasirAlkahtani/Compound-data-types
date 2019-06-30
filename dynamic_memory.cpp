/*

FileName: dynamicMemory.cpp

Created by Muhammad Yasir

Date: 30.06.2019

dynamic memory test

*/

#include <iostream>

class Obj {
   public:
      Obj() {
         std::cout << "Constructor called!" <<std::endl;
      }
      ~Obj() {
         std::cout << "Destructor called!" <<std::endl;
      }
};
int main() {

   Obj* ObjArray = new Obj;
   delete [] ObjArray; // Delete array

   return 0;
}
