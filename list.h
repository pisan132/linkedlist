//
// Created by Yusuf Pisan on 12/3/19.
//

#ifndef LINKED_LIST__LIST_H
#define LINKED_LIST__LIST_H

#include "node.h"
class List {
 private:
  Node* head;
 public:
  List();
  ~List();
  void addToEnd(Node* nptr);
  void addtoBeginning(Node *nptr);
  void addSorted(Node *nptr);
  void addToEnd(int num);
  void addtoBeginning(int num);
  void addSorted(int num);
  void display() const;
};



#endif // LINKED_LIST__LIST_H
