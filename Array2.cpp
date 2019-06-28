#include<iostream>
#include <iomanip>      // std::setprecision

int main(){

    // Declaration
    double ArrayData[] = {1.3,2.2, 0.2, 1.9, 4.5};
    double average, total = 0;


    //print ArrayInt
    for (int i = 0; i<5; i++)
        total = total + ArrayData[i];
    average = total /5;

    std::cout<<"Total: "<<std::setprecision(3)<<total<<std::endl;
    std::cout<<"Average: "<<std::setprecision(3)<<average<<std::endl;

    return 0;
}
