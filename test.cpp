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
    cout << list.max() << endl;
    cout << list.min() << endl;
    cout << list.size() << endl;
    cout << list.avg() << endl;
    std::cout << std::boolalpha;
    cout << list.InList(20) << endl;
    list.changedata(3,10);
    list.changedata(20,3);

    // Delete an element
    list.deleteNode(20);
    list.changedata(20,3);

    // Print the list after deletion
    std::cout << "List after deleting 20: ";
    list.printList();
    cout << list.sum() << endl;
    cout << list.max() << endl;
    cout << list.min() << endl;
    cout << list.size() << endl;
    cout << list.avg() << endl;
    cout << list.avg() << endl;
    std::cout << std::boolalpha;
    cout << list.InList(20) << endl;

    return 0;
}