//
// Created by dumitru on 10.04.16.
//

#include <iostream>
#include "DoublyLinkedList.h"


template<class T>
DoublyLinkedList<T>::DoublyLinkedList() {
    head = new Node<T>();
    tail = new Node<T>();
    head->setNext(tail);
    tail->setPrevious(head);
    size = 0;
}


template<class T>
void DoublyLinkedList<T>::print() {
    Node<T> *curr = head;
    while (curr->getNext() != tail) {
        curr = curr->getNext();
        curr->print();
    }
    std::cout << '\n';
}


template<class T>
void DoublyLinkedList<T>::pushBack(T t_value) {
    Node<T> *curr = new Node<T>(t_value);
    curr->setNext(tail);
    curr->setPrevious(tail->getPrevious());
    tail->getPrevious()->setNext(curr);
    tail->setPrevious(curr);
    ++size;
}

template<class T>
void DoublyLinkedList<T>::popBack() {
    tail->getPrevious()->getPrevious()->setNext(tail);
    tail->setPrevious(tail->getPrevious()->getPrevious());
    --size;
}

template<class T>
T DoublyLinkedList<T>::getBack() {
    return tail->getPrevious()->getValue();
}

template<class T>
void DoublyLinkedList<T>::pushFront(T t_value) {
    Node<T> *curr = new Node<T>(t_value);
    curr->setPrevious(head);
    curr->setNext(head->getNext());
    head->getNext()->setPrevious(curr);
    head->setNext(curr);
    ++size;
}

template<class T>
void DoublyLinkedList<T>::popFront() {
    head->setNext(head->getNext()->getNext());
    head->getNext()->setPrevious(head);
}

template<class T>
T DoublyLinkedList<T>::getFront() {
    return head->getNext()->getValue();
}

template<class T>
void DoublyLinkedList<T>::pushNth(T t_value, size_t n) {
    Node<T> *curr = new Node<T>(t_value);
    Node<T> *cursor = head;
    for (size_t i = 0; i < n; ++i) {
        cursor = cursor->getNext();
    }
    curr->setPrevious(cursor);
    curr->setNext(cursor->getNext());
    cursor->getNext()->setPrevious(curr);
    cursor->setNext(curr);
    ++size;
}

template<class T>
void DoublyLinkedList<T>::popNth(size_t n) {
    Node<T> *cursor = head;
    for (size_t i = 0; i < n; ++i) {
        cursor = cursor->getNext();
    }
    cursor->setNext(cursor->getNext()->getNext());
    cursor->getNext()->setPrevious(cursor);
    --size;
}

template<class T>
T DoublyLinkedList<T>::getNth(size_t n) {
    Node<T> *cursor = head->getNext();
    for (size_t i = 0; i < n; ++i) {
        cursor = cursor->getNext();
    }
    return cursor->getValue();
}

template<class T>
size_t DoublyLinkedList<T>::getSize() {
    return size;
}
























