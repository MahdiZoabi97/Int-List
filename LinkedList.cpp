#include "LinkedList.h"
#include <iostream>
LinkedList::~LinkedList(){
    Node* current = head;
    while(current != NULL){
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::insertAtBeginning(int data){
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}

void LinkedList::insertAtEnd(int data){
    Node* newnode = new Node(data);
    if(head == NULL){
        head = newnode;
    }else{
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }

}

void LinkedList::deleteNode(int key){
    Node* temp = head;
    if( temp == NULL){
        return;
    }
    if(temp->data == key){
        head = head->next;
        delete temp;
    }
    while (temp->next != NULL && temp->next->data != key) {
        temp = temp->next;
    }
    if(temp->next == NULL){
        return;
    }
    Node* temp2 = temp->next;
    temp->next = temp->next->next;
    delete temp2;
}

void LinkedList::printList() const{
    Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int LinkedList::sum(){
    int avg = 0;
    Node* temp = head;
    if(temp == NULL){
        return avg;
    }
    while(temp != NULL){
        avg += temp->data;
        temp = temp->next;
    }
    return avg;
}