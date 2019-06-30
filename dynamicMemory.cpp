#include <iostream>
using namespace std;

int main () {
   double* pvalue  = NULL; // Pointer initialized with null
   pvalue  = new double[3];   // Request memory for the variable

   pvalue [1]= 29494.99;     // Store value at allocated address
   cout << "Value of pvalue : " << pvalue[0] <<" "<< pvalue[1]<<" "<<pvalue[2]<<endl;

    delete pvalue;// free up the memory.

   return 0;
}
