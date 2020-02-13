#include "LinkedList.hpp"
#include <iostream>

int main()
{
    LinkedList* ll = new LinkedList(); //some change
    ll->addFront(1);
    ll->addFront(2);
    ll->addFront(3);
    ll->addFront(4);
    ll->addFront(5);
    ll->addFront(6);
    ll->addEnd(24);
    //std::cout << ll->removeEnd() << "\n\n";
    //std::cout << ll->removeFront() << "\n";
    ll->display();
    delete ll;
}