//
// Created by dumitru on 10.04.16.
//

#ifndef DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H

#include <glob.h>
#include "Node.h"

template<class T>
class DoublyLinkedList {
private:
    size_t size;
    Node<T> *head;
    Node<T> *tail;

public:
    DoublyLinkedList();

    void pushBack(T t_value);

    void popBack();

    T getBack();

    void pushFront(T t_value);

    void popFront();

    T getFront();

    void pushNth(T t_value, size_t n);

    void popNth(size_t n);

    T getNth(size_t n);

    size_t getSize();

    void print();

};


#endif //DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H
