//
// Created by Yusuf Pisan on 12/3/19.
//

#include "list.h"

#include <iostream>

using namespace std;

List::List() : head{nullptr} {
  cout << "Created empty list" << endl;
}

void List::addToEnd(Node* nptr) {
  if (head == nullptr) {
    head = nptr;
    return;
  }
  Node* curr = head;
  while (curr->getNext() != nullptr) {
    curr = curr->getNext();
  }
  curr->setNext(nptr);
}

void List::addtoBeginning(Node* nptr) {
  if (head == nullptr) {
    head = nptr;
    return;
  }
  nptr->setNext(head);
  head = nptr;
}
void List::addSorted(Node* nptr) {
  if (head == nullptr) {
    head = nptr;
    return;
  }
  if (nptr->getValue() <= head->getValue()) {
    nptr->setNext(head);
    head = nptr;
    return;
  }
  Node* curr = head;
  Node* nextnode = curr->getNext();
  while (nextnode != nullptr && nextnode->getValue() < nptr->getValue()) {
    curr = curr->getNext();
    nextnode = nextnode->getNext();
  }
  curr->setNext(nptr);
  // nextnode might be nullptr which is OK
  nptr->setNext(nextnode);
}

void List::display() const {
  cout << "[";
  Node* curr = head;
  while (curr != nullptr) {
    cout << curr->getValue() << " ";
    curr = curr->getNext();
  }
  cout << "]" << endl;
}
void List::addToEnd(int num) {
  Node* n = new Node(num);
  addToEnd(n);
}
void List::addtoBeginning(int num) {
  Node* n = new Node(num);
  addtoBeginning(n);
}
void List::addSorted(int num) {
  Node* n = new Node(num);
  addSorted(n);
}
List::~List() {
  Node* curr = head;
  while (curr != nullptr) {
    Node* todelete = curr;
    curr = curr->getNext();
    delete todelete;
  }
}
