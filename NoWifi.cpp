#include<iostream>

using namespace std;
void DrHernandez(int *x);

 int main() {
 int Brett=23;
 DrHernandez(&Brett);
 cout<<"Here is the number "<<Brett<<endl;
  return 0;
}

void DrHernandez(int *x) {
  *x=15;
}
