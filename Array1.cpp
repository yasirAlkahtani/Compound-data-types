#include<iostream>


int main(void){
    // Declaration
    int ArrayInt[] = {2,2,3,1,2,4,5,7,12};
    double ArrayDouble[] = {1.3,2.1, 0.2, 1.9, 4.5};
    float ArrayFloat[] = {1.2,2.3,3.4,4.5,5.6,6.7,7.8};

    //print ArrayInt
    for (int i = 0; i<9; i++)
        std::cout<<ArrayInt[i]<<" ";
    std::cout<<std::endl;
    //print ArrayDouble
    for (int i = 0; i<5; i++)
        std::cout<<ArrayDouble[i]<<" ";
    std::cout<<std::endl;
    //print Array
    for (int i = 0; i<7; i++)
        std::cout<<ArrayFloat[i]<<" ";
    std::cout<<std::endl;
}
