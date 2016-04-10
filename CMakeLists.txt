cmake_minimum_required(VERSION 3.5)

project(DoublyLinkedList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic")

set(SOURCE_FILES main.cpp DoublyLinkedList.cpp DoublyLinkedList.h Node.cpp Node.h)
add_executable(DoublyLinkedList ${SOURCE_FILES})

