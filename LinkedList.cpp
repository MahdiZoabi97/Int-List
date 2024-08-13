#include "LinkedList.h"
#include <iostream>
using namespace std;
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
        return;
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

int LinkedList::min(){
    int min = 0;
    Node* temp = head;
    if(temp == NULL){
        return min;
    }
    min = temp->data;
    while(temp != NULL){
        int mint = temp->data;
        if(mint < min){
            min = mint;
        }
        temp = temp->next;
    }
    return min;
}

int LinkedList::max(){
    int max = 0;
    Node* temp = head;
    if(temp == NULL){
        return max;
    }
    max = temp->data;
    while(temp != NULL){
        int maxt = temp->data;
        if(maxt > max){
            max = maxt;
        }
        temp = temp->next;
    }
    return max;
}

int LinkedList::size(){
    int size = 0;
    Node* temp = head;
    if(temp == NULL){
        return size;
    }
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}

double LinkedList::avg(){
    double avg = 0;
    Node* temp = head;
    if(temp == NULL){
        return avg;
    }
    avg = double(sum()) /double(size());

    return avg;
}
bool LinkedList::InList(int Key){
    bool tmp = false;
    Node* temp = head;
    if(temp == NULL){
        return tmp;
    }
    while(temp != NULL){
        if(temp->data == Key){
            tmp = true;
            return tmp;
        }
        temp = temp->next;
    }
    return tmp;
}

void LinkedList::changedata(int olddata,int newdata){
    if(InList(olddata) == false){
        cout << "key not found" << endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == olddata){
            temp->data = newdata;
            cout << "key has changed" << endl;
            return;
        }
        temp = temp->next;
    }
    return;
}