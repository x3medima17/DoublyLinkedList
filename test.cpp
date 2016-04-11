//
// Created by dumitru on 11.04.16.
//
#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "DoublyLinkedList.cpp"
#include <vector>

TEST_CASE( "List size", "[size]" ) {
    DoublyLinkedList<int> *l = new DoublyLinkedList<int>();
    l->pushBack(1);
    l->pushFront(2);
    l->pushBack(3);
    l->pushBack(4);
    l->pushNth(2,2);
    REQUIRE( l->getSize() == 5 );
    l->popNth(1);
    l->popBack();
    REQUIRE( l->getSize() == 3 );
}


