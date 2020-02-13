#include "Node.hpp"
#include "LinkedList.hpp"
#include <iostream>

LinkedList::LinkedList()
{
    this->count = 0;
}

void LinkedList::addFront(int payload)
{
    Node* n = new Node(payload);

    if(!this->head)
    {
        this->head = n;
    }
    else
    {
        n->setNextNode(this->head);
        this->head = n;
    }
    this->count++;
}

int LinkedList::getFront()
{
    return this->head->getPayload();
}

int LinkedList::getEnd()
{
    Node* currNode = this->head;
    while(currNode->getNextNode())
    {
        currNode = currNode->getNextNode(); 
    }
    return currNode->getPayload();
}   

void LinkedList:: addEnd(int payload)
{
    Node* n = new Node(payload);
    Node* currNode = this->head;
    while(currNode->getNextNode())
    {
        currNode = currNode->getNextNode(); 
    }
    currNode->setNextNode(n);
    this->count++;
}

int LinkedList::removeEnd()
{
    Node* currNode = this->head;
    Node* prevNode = this->head;
    while(currNode->getNextNode())
    {
        prevNode = currNode;
        currNode = currNode->getNextNode();
    }
    int val = currNode->getPayload();
    delete currNode;
    this->count--;
    prevNode->setNextNode(0);
    return val;
}

int LinkedList::removeFront()
{
    Node* nodeToReturn = this->head;
    this->head = this->head->getNextNode();
    int val = nodeToReturn->getPayload();
    delete nodeToReturn;
    this->count--;
    return val;
}

void LinkedList::display()
{
        Node* currNode = this->head;
        for (int i = 0; i < this->count; i++)
        {
            std::cout << currNode->getPayload() << "\n";
            currNode = currNode->getNextNode();
        }
}