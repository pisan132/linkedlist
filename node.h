//
// Created by Yusuf Pisan on 12/3/19.
//

#ifndef LINKED_LIST__NODE_H
#define LINKED_LIST__NODE_H

class Node {
 private:
  int value;
  Node* next;

 public:
  // 1 parameter constructor
  // all 1-parameter constructors are declared explicit
  explicit Node(int value);
  // destructor
  ~Node();
  // accessor for value
  int getValue() const;
  // mutator for value
  void setValue(int value);
  // accessor for next
  Node* getNext() const;
  // mutator for next
  void setNext(Node* next);
};

#endif  // LINKED_LIST__NODE_H
