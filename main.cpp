#include <iostream>
#include "DoublyLinkedList.cpp"
#include "Node.cpp"

using namespace std;

int main() {
//    Node<int> a,b,c;
    Node<int> *a = new Node<int>();
    Node<int> *b = new Node<int>();
    a->setValue(5);
    a->setNext(b);

    b->setValue(8);

    cout << a->getNext()->getValue()<< endl;
    return 0;
}