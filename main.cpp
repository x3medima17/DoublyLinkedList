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

    DoublyLinkedList<int> *L = new DoublyLinkedList<int>();

    L->pushBack(1);
    L->pushBack(2);
    L->pushBack(3);
    L->pushBack(4);
    L->pushBack(5);
    L->pushNth(0,3);
    L->popNth(3);
    L->popNth(3);

    L->print();
    cout<<L->getFront()<<endl;
    cout << a->getNext()->getValue()<< endl;
    return 0;
}