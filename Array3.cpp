#include<iostream>
#include<string.h>
#include<stdio.h>

int main(void){
    // Deklaration
    char Name[50];
    std::string mystr;

    std::cout<<"gibt dein Name: "<<std::endl;
    std::getline(std::cin, mystr);
    strcpy(Name, mystr.c_str());

    std::cout<<"Mein Name: "<<Name<<std::endl;
}
