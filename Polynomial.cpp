#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <random>

template <typename T>
struct Node {
    T data;
    Node* prev;
    Node* next;

    Node(T value) : data(value), prev(nullptr), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {} 
    LinkedList();
    LinkedList(const LinkedList& other);
    LinkedList(int size, T lower, T upper);
    ~LinkedList();

    LinkedList& operator=(const LinkedList& other);

    void push_tail(T value);
    void push_tail(const LinkedList& otherList);
    void push_head(T value);
    void push_head(const LinkedList& otherList);
    void pop_head();
    void pop_tail();
    void delete_node(T value);

    T& operator[](int index);
    const T& operator[](int index) const;

    void remove_duplicates();
};

#endif
