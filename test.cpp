//
// Created by dumitru on 11.04.16.
//
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "DoublyLinkedList.cpp"
#include <vector>
#include <string>

TEST_CASE("List size", "[size]") {
    DoublyLinkedList<int> *l = new DoublyLinkedList<int>();
    l->pushBack(1);
    l->pushFront(2);
    l->pushBack(3);
    l->pushBack(4);
    l->pushNth(2, 2);
    REQUIRE(l->getSize() == 5);
    l->popNth(1);
    l->popBack();
    REQUIRE(l->getSize() == 3);
}


TEST_CASE("Nested lists", "[nested]") {
    DoublyLinkedList<DoublyLinkedList<int> > *l = new DoublyLinkedList<DoublyLinkedList<int> >();
    DoublyLinkedList<int> *m = new DoublyLinkedList<int>();
    l->pushBack(*m);
    l->pushBack(*m);
    REQUIRE(l->getSize() == 2);
}

TEST_CASE("Generic","[generic]"){
    DoublyLinkedList<std::string> *l = new DoublyLinkedList<std::string>();
    l->pushBack("Hello");
    l->pushBack("World");
    std::cout<<l->getBack();
    REQUIRE(l->getBack().compare("World") == 0);
    REQUIRE(l->getFront().compare("Hello") == 0);

}

