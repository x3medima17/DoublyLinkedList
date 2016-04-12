#include <iostream>
#include "DoublyLinkedList.cpp"
<<<<<<< HEAD
=======

>>>>>>> master

using namespace std;

int main() {
<<<<<<< HEAD


=======
//    Node<int> a,b,c;
>>>>>>> master
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
    return 0;
}