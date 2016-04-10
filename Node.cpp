//
// Created by dumitru on 10.04.16.
//

#include "Node.h"

template<class T>
Node<T>::Node() {
    previous = nullptr;
    next = nullptr;
    value = T();
}

template<class T>
Node<T>::Node(T t_value) {
    previous = nullptr;
    next = nullptr;
    value = t_value;
}

template<class T>
T Node<T>::getValue() {
    return value;
}

template<class T>
void Node<T>::setValue(T t_value) {
    value = t_value;
}

template<class T>
Node<T> *Node<T>::getNext() {
    return next;
}

template<class T>
Node<T> *Node<T>::getPrevious() {
    return previous;
}

template<class T>
void Node<T>::setNext(Node *t_node) {
    next = t_node;
}

template<class T>
void Node<T>::setPrevious(Node *t_node) {
    previous = t_node;
}
