#include <iostream>
#include "LinkedList.h"
using namespace std;
int main() {
 LinkedList myList;
 myList.append(5);
 myList.append(10);
 myList.append(15);
 myList.display();
 myList.insert(8, 1);
 myList.display();
 myList.remove(2);
 myList.display();
 return 0;
}
