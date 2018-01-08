#include<iostream>

using namespace std;

int main() {
  int fish=5;//& is a memory address operator
  cout<<&fish<<endl;
 int *DrHernandez;//The * tell the compiler that we're making a pointer
  //A pointer is a special type of variable that has the memory address, as it's value
 DrHernandez=&fish;//Where now saying that fishPointer is now equal to the memory address of fish
 cout<<DrHernandez<<endl;//Since it's equal to the memory address of fish, it prints out the memore address
  return 0;
}
