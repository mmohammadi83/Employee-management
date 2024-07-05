#include "header files/developer.h"
#include <iostream>

long long int tavan(int a , int b){
    long long int res=1;
    for(int i=0 ; i<b ; i++)
        res *= a;

    return res;
}

void Developer::displayInfo(){

    std::cout << "name : " << this->getName() << std::endl;
    std::cout << "ID : " << this->getID() << std::endl;
    std::cout << "department id : " << this->getDepartmentID() << std::endl; // **************************
    std::cout << "level : " << this->getLevel() << std::endl;
    std::cout << "phone number : " << this->getPhoneNumber() << std::endl;
    std::cout << "code meli : " << this->getCodeMeli() << std::endl;
    std::cout << "work hour : " << this->getHour() << std::endl;
    std::cout << "salary : " << this->getSalary()/tavan(10 , 6) << " milion toman" << std::endl;
}
