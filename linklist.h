#pragma once
#include "employee.h"

class Nodes
{
    Nodes* next;
    Nodes* prev;
    Employee* data;
    
public:
    Nodes();
    Nodes(Employee* emp);
    void setData(Employee* x);
    Employee* getData();
    void setNext(Nodes* n);
    Nodes* getNext();
    void setPrev(Nodes* n);
    Nodes* getPrev();
    
};

class LinkList
{
private:
    Nodes* head;
    Nodes* tail;
    int size;

public:
    LinkList();
    void addFront(Employee*);
    void popNode(char* id);
    Nodes* getHead();
    Nodes* getTail();
    int getSize();
    void setHead(Nodes* n);
    void setTail(Nodes* n);
    void setSize(int n);
    Employee* operator[](char* index);// for find employee
    void listEmployee();
};
