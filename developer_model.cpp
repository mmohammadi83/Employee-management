#include "header files/developer.h"
#include <iostream>
Developer::Developer(std::string& name, std::string& id, std::string& d_id, std::string& phone , std::string&code , char level = 'c' , double hour = 0){
    setName(name);
    setID(id);
    setDepartmentID(d_id);
    setHour(hour);
    setCodeMeli(code);
    setPhoneNumber(phone);
    mohasebeMaliat();
    mohasebeSalary();

    this->level = level;
}
Developer::Developer(){}
void Developer::setPadash(double s){
    padash = s;
}
void Developer::setLevel(char l){
    level = l;
}
double Developer::getPadash(){
    return padash;
}
char Developer::getLevel(){
    return level;
}
void Developer::setEzafeHoghogh(double e){
    ezafeHoghogh = e;
}
double Developer::getEzafeHoghogh(){
    return ezafeHoghogh;
}
Developer::~Developer(){}