#include<iostream>

using namespace std;
void DrHernandez(int& x, int& y);//Pass by reference to swap values
int main(){
int a=7;
int b=16;

DrHernandez(a,b);
cout<<"A is: "<< a <<endl;
cout<<"B is: "<<b <<endl;
system("Pause");
  return 0;
}

void DrHernandez(int& x, int& y) {
  int temp;
  temp=x;
  x=y;
  y=temp;
}
