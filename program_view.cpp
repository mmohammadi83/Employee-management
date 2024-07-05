#include <iostream>
#include "linklist.h"
#include "manager.h"
#include "developer.h"
#include "controls/functions.cpp"

using namespace std;


void addManager(LinkList& list){
    system("cls");
    cout << "adding a manager\n";
    cout << "(*) its means neseccery";
    cout << "*name : ";
    char* name;
    cin >> name;
    cout << "*ID : ";
    char* ID;
    cin >> ID;
    cout << "*department ID : ";
    char* departmentID;
    cin >> departmentID;
    cout << "*phone number : ";
    char* phoneNumber;
    cin >> phoneNumber;
    cout << "*code meli : ";
    char* codeMeli;
    cin >> codeMeli;
    cout << "work hour : ";
    float hour;
    cin >> hour;

    addEmployee(list , name , ID , departmentID , phoneNumber , codeMeli , hour);
    
}

void addDeveloper(LinkList& list){
    system("cls");
    cout << "adding a Developer\n";
    cout << "(*) its means neseccery";
    cout << "*name : ";
    char* name;
    cin >> name;
    cout << "*ID : ";
    char* ID;
    cin >> ID;
    cout << "*department ID : ";
    char* departmentID;
    cin >> departmentID;
    cout << "*phone number : ";
    char* phoneNumber;
    cin >> phoneNumber;
    cout << "*code meli : ";
    char* codeMeli;
    cin >> codeMeli;
    cout << "work hour : ";
    float hour;
    cin >> hour;
    cout << "level : ";
    char level;
    cin >> level;

    addEmployee(list , name , ID , departmentID , phoneNumber , codeMeli , level , hour);

}

void find(LinkList& list){
    system("cls");
    cout << "find a employee\n\n";
    cout << "enter employee ID : ";
    char* id;
    cin >> id;
    Employee* ob = list[id];
    ob->displayInfo();
    ob = nullptr;
    delete ob;
}

void list_emp(LinkList& list){
    system("cls");
    list.listEmployee();
}
void start();
void menu(){
    LinkList list;

    system("cls");
    cout << "1- add new manager\n";
    cout << "2- add new developer\n";
    cout << "3- find and show info a employee\n";
    cout << "4- show list of employees\n";
    cout << "5- exit\n";

    int choose;
    switch (choose)
    {
    case 1: addManager(list); break;
    case 2: addDeveloper(list); break;
    case 3: find(list); break;
    case 4: list_emp(list); break;
    case 5: start();
    default:
        break;
    }
    menu();
}

void start(){
    system("cls");
    cout << "system modiriati" << endl;
    cout << "1- vorod be barname\t" << "2- exit";
    int choose;
    switch (choose)
    {
    case 1:
        menu();
        break;
    case 2: exit(0);

    default:
        break;
    }
}

int main(){
    start();
}
