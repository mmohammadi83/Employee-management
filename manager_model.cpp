#include "header files/manager.h"
#include <iostream>

Manager::Manager(std::string& name, std::string& id, std::string& d_id, std::string& phone , std::string&code , double hour = 0){
    setName(name);
    setID(id);
    setDepartmentID(d_id);
    setHour(hour);
    setCodeMeli(code);
    setPhoneNumber(phone);
    mohasebeMaliat();
    mohasebeSalary();
}
Manager::Manager(){}

void Manager::setPadash(double p){
    padash = p;
}
double Manager::getPadash(){
    return padash;
}

Manager::~Manager(){}