//
// Created by Yusuf Pisan on 12/3/19.
//
#include "node.h"

#include <iostream>

using namespace std;

// two ways to initialize it
// using initialization lists or inside the body

Node::Node(int value) : value{value}, next{nullptr} {
  cout << "Create Node with 1 params: " << value << endl;
}

Node::~Node() {
  cout << "Deleting node " << value << endl;
}

int Node::getValue() const { return value; }
void Node::setValue(int value) { this->value = value; }
Node *Node::getNext() const { return next; }
void Node::setNext(Node *next) { this->next = next; }
