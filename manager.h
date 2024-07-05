#pragma once
#include "employee.h"

class Manager : public Employee
{
private:
    double padash;
    
public:
    Manager(char* name, char* id, char* d_id, char* phone , char*code, double houer = 0 );
    Manager();
    void setPadash(double);
    double getPadash();
    void displayInfo();
    void mohasebeSalary();
    void mohasebeMaliat();
    ~Manager();
};