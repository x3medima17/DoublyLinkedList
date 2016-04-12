# DoublyLinkedList
[![Build Status](https://travis-ci.org/x3medima17/DoublyLinkedList.svg?branch=dev)](https://travis-ci.org/x3medima17/DoublyLinkedList)


This is an implemetation of DoublyLinkedList, written for TGT Oil Internship.
The folowing 'best practices' were used.
  - Object-Oriented Programming
  - Generics
  - Header Files
  - Tests
  - Continuous Integration
  - Github
 
To use the class you need only four files: `Node.h`, `Node.cpp`, `DoublyLinkedList.h`, `DoublyLinkedList.cpp`. But you have to include only the last one.

Example:
```cpp
    DoublyLinkedList<int> *L = new DoublyLinkedList<int>();
    L->pushBack(1);
    L->pushBack(2);
    L->pushFront(3);
    L->pushNth(0,2);
    L->popNth(3);
    L->popNth(3);
    L->print();
```
