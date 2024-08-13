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
    int min();
    int max();
    int size();
    double avg();
    bool InList(int key);
    void changedata(int olddata, int newdata);
};

#endif // LINKED_LIST_H