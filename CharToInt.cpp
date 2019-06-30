/*
created by Muhammad Yasir
Namefile: CharToInt.cpp
parse char to int & int to char , usefull of auot type
Date: 30.06.2019
*/
#include<iostream>

int main(void){

    char ch = 'A';//char Declaration

    std::cout<<ch<<" : "<<(int)ch<<std::endl;

    (int)ch++;

    auto _ch = ch; //auto Declaration
    auto _chInt = (int)ch;

    std::cout<<_ch<<" : "<<_chInt<<std::endl;

}
