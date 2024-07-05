
#pragma once

class Employee
{
private:
    char* name;
    char* ID;
    char* department_id;
    double salary;
    int hour;
    float maliat;
    char* phone_number;
    char* codeMeli;
public:

    void setName(char* n);
    void setID(char* i);
    void setDepartmentID(char* i);
    void setSalary(int h);
    void setHour(int h);
    void setMaliat(float m);
    void setPhoneNumber(char*);
    void setCodeMeli(char*);
    char* getPhoneNumber();
    char* getCodeMeli();
    int getHour();
    float getMaliat();
    char* getName();
    char* getID();
    char* getDepartmentID();
    double getSalary();
    virtual void mohasebeSalary() = 0;
    virtual void mohasebeMaliat() = 0;
    virtual void displayInfo() = 0;
    virtual ~Employee() = 0;
};