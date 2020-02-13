#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "Node.hpp"

class LinkedList
{
private:
    Node* head;
    int count;

public:
    LinkedList();
    void addFront(int payload);
    int getFront();
    int removeFront();
    //dont add tail head
    void addEnd(int payload);
    int getEnd();
    int removeEnd();
    void display();
};
#endif /* LinkedList_hpp */