#include <iostream>
#include "header files/linklist.h"
#include "header files/employee.h"
#include "header files/manager.h"
#include "header files/developer.h"
#include <conio.h>


using namespace std;

static void addEmployee(LinkList& list ,std::string& name, std::string& id, std::string& d_id, std::string& phone , std::string&code , char level = 'z' , double hour = 0 )
{
    if(level == 'z'){
        Manager* ob = new Manager(name , id , d_id , phone , code , hour);
        list.addFront(ob);
    }
    else{
        Developer* ob = new Developer(name , id , d_id , phone , code , level ,hour);
        list.addFront(ob);
    }
}

static double calculateTotalSalary(LinkList& list)
{
    Nodes* temp = list.getHead();
    double totalSalary;
    while(temp){
        totalSalary += temp->getData()->getSalary();
        temp = temp->getNext();
    }
    temp = nullptr;
    delete temp;
    return totalSalary;
}

void addManager(LinkList& list){
    system("cls");
    cout << "adding a manager\n";
    cout << "(*) its means neseccery\n";
    cout << "*name : ";
    std::string name;
    cin >> name;
    cout << "*ID : ";
    std::string ID;
    cin >> ID;
    cout << "*department ID : ";
    std::string departmentID;
    cin >> departmentID;
    cout << "*phone number : ";
    std::string phoneNumber;
    cin >> phoneNumber;
    cout << "*code meli : ";
    std::string codeMeli;
    cin >> codeMeli;
    cout << "work hour : ";
    float hour;
    cin >> hour;

    addEmployee(list , name , ID , departmentID , phoneNumber , codeMeli ,'z' , hour);

    cout << "adding a employee is succesfuly";
    getch();
    
}

void addDeveloper(LinkList& list){
    system("cls");
    cout << "adding a Developer\n";
    cout << "(*) its means neseccery\n";
    cout << "*name : ";
    std::string name;
    cin >> name;
    cout << "*ID : ";
    std::string ID;
    cin >> ID;
    cout << "*department ID : ";
    std::string departmentID;
    cin >> departmentID;
    cout << "*phone number : ";
    std::string phoneNumber;
    cin >> phoneNumber;
    cout << "*code meli : ";
    std::string codeMeli;
    cin >> codeMeli;
    cout << "work hour : ";
    float hour;
    cin >> hour;
    cout << "level : ";
    char level;
    cin >> level;

    addEmployee(list , name , ID , departmentID , phoneNumber , codeMeli , level , hour);

    cout << "adding a employee is succesfuly";
    getch();
}

void find(LinkList& list){
    system("cls");
    cout << "find a employee\n\n";
    cout << "enter employee ID (0 for exit): ";
    string id;
    cin >> id;
    if(id == "0") return;
    Employee* ob = list[id];
    if(ob){
        ob->displayInfo();
        getch();
    }
    else{
        cout << "employee not found!";
        getch();
    }
    ob = nullptr;
    delete ob;
    find(list);
}

void list_emp(LinkList& list){
    system("cls");
    list.listEmployee();
    getch();
}

void removeEmployee(LinkList& list){
    system("cls");
    cout << "removing a employee\n\n";
    cout << "-----------------------------------------------\n";
    list.listEmployee();
    cout << "-----------------------------------------------\n";
    cout << "enter employee ID for remove from employee list (0 for back) : ";
    string id;
    cin >> id;
    Employee* emp = list[id];
    if(emp){
        list.popNode(*emp);
        cout << "employee ba ID '" << id << "' remove shod";
        getch();
    }
    else{
        cout << "employee not found";
        getch();
    }
    emp = nullptr;
    delete emp;
}

void start(LinkList&);
void menu(LinkList& list){
    
    
    system("cls");
    cout << "1- add new manager\n";
    cout << "2- add new developer\n";
    cout << "3- find and show info a employee\n";
    cout << "4- show list of employees\n";
    cout << "5- remove a employee\n";
    cout << "6- back\n";
    cout << "enter your choose: ";

    int choose;
    cin >> choose;

    
    switch (choose)
    {
    case 1: addManager(list); break;
    case 2: addDeveloper(list); break;
    case 3: find(list); break;
    case 4: list_emp(list); break;
    case 5: removeEmployee(list);break;
    case 6: return;
    default:
        break;
    }
    menu(list);
}

void start(LinkList& list){
    system("cls");
    cout << "system modiriati" << endl;
    cout << "1- vorod be barname\t" << "2- exit\n";
    cout << "enter your choose: ";
    int choose;
    cin >> choose;
    switch (choose)
    {
    case 1: menu(list);break;
    case 2: return; break;

    default:
        break;
    }
    start(list);
}

int main(){
    LinkList* list = new LinkList;

    start(*list);

    list = nullptr;
    delete list;
    return 0;
}
