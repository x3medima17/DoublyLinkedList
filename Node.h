//
// Created by dumitru on 10.04.16.
//

#ifndef DOUBLYLINKEDLIST_NODE_H
#define DOUBLYLINKEDLIST_NODE_H

template<class T>
class Node {
private:
    Node<T> *previous;
    Node<T> *next;
    T value;

public:
    Node();
    Node(T t_value);
    T getValue();
    void setValue(T t_value);
    Node *getNext();
    Node *getPrevious();
    void setNext(Node t_node);
    void setPrevious(Node *t_node);

    void setNext(Node *t_node);
};



#endif //DOUBLYLINKEDLIST_NODE_H
