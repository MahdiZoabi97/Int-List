#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int main() {
    LinkedList list;

    // Insert elements
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtBeginning(5);
    list.insertAtEnd(30);

    // Print the list
    std::cout << "List after inserting elements: ";
    list.printList();
    cout << list.sum() << endl;

    // Delete an element
    list.deleteNode(20);

    // Print the list after deletion
    std::cout << "List after deleting 20: ";
    list.printList();
    cout << list.sum() << endl;

    return 0;
}