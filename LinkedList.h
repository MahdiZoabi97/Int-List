#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>



struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(NULL) {}
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(NULL) {}
    ~LinkedList();
    void insertAtBeginning(int data);
    void insertAtEnd(int data);
    void deleteNode(int key);
    void printList() const;
    int sum();
};

#endif // LINKED_LIST_H