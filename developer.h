#pragma once
#include "employee.h"

class Developer : public Employee
{
private:
    char level;
    double padash;
    double ezafeHoghogh;
public:
    Developer(char* name, char* id, char* d_id, char* phone , char*code , char level = 'c' ,  double houer = 0 );
    Developer();
    void setLevel(char l);
    char getLevel();
    void setPadash(double s);
    double getPadash();
    void setEzafeHoghogh(double);
    double getEzafeHoghogh();
    void displayInfo();
    void mohasebeSalary();
    void mohasebeMaliat();
    void mohasebeEzafeHoghogh();
    ~Developer();
};