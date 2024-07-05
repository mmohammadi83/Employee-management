#include "header files/manager.h"
#include <iostream>

void Manager::displayInfo(){

    std::cout << "name : " << this->getName() << std::endl;
    std::cout << "ID : " << this->getID() << std::endl;
    std::cout << "department ID : " << this->getDepartmentID() << std::endl; // **************************
    std::cout << "phone number : " << this->getPhoneNumber() << std::endl;
    std::cout << "code meli : " << this->getCodeMeli() << std::endl;
    std::cout << "work hour : " << this->getHour() << std::endl;
    std::cout << "salary : " << this->getSalary() << std::endl;
}