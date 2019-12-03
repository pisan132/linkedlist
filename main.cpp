#include <iostream>
#include "node.h"
#include "list.h"

using namespace std;


void testAddBeginning() {
  List mylist;
  mylist.addtoBeginning(10);
  mylist.addtoBeginning(45);
  mylist.addtoBeginning(5);
  // should get [5 45 10]
  mylist.display();
}

void testAddEnd() {
  List mylist;
  mylist.addToEnd(11);
  mylist.addToEnd(46);
  mylist.addToEnd(6);
  // should get [11 46 6]
  mylist.display();
}

void testAddSorted() {
  List mylist;
  mylist.addSorted(12);
  mylist.addSorted(47);
  mylist.addSorted(7);
  // should get [7 12 47]
  mylist.display();
}

int main() {
  testAddBeginning();
  testAddEnd();
  testAddSorted();
  cout << "Done" << endl;
  return 0;
}