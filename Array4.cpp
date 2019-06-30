/*
Multiple Array in Matrix operation
created by Muhammad Yasir
Date: 30.06.2019
filename: Array4.cpp
*/

#include<iostream>
#include<string.h>


int main(void){
    // Deklaration
    int A[3][3] =
    {
        {1,3,5 },
        {1,1,2 },
        {0,2,6 }
    },
    B[3][3] =
    {
        {1,3,5 },
        {1,1,2 },
        {0,2,6 }
    },
    AddMatrix[3][3],
    SubMatrix[3][3];

    //operation tow vector
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            AddMatrix[i][j] = A[i][j] + B[i][j];
            SubMatrix[i][j] = A[i][j] - B[i][j];
        }
    }
    std::cout<<std::endl;
    //print A matrix
    std::cout<<"  A "<<std::endl;
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            std::cout<<A[i][j]<<" ";
        }
    std::cout<<std::endl;
    }
    std::cout<<std::endl;
    //print B matrix
    std::cout<<"  B "<<std::endl;
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            std::cout<<B[i][j]<<" ";
        }
    std::cout<<std::endl;
    }
    std::cout<<std::endl;
    //print Add result
    std::cout<<" A+B  "<<std::endl;
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            std::cout<<AddMatrix[i][j]<<" ";
        }
    std::cout<<std::endl;
    }
    std::cout<<std::endl;
    //print sub result
    std::cout<<" A-B  "<<std::endl;
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            std::cout<<SubMatrix[i][j]<<" ";
        }
    std::cout<<std::endl;
    }
}
