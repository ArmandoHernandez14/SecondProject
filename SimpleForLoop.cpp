#include<iostream>
#include<cmath>
using namespace std;

int main(){
  float a;// The Float point is stating that the decimal may float, or it reveals it in decimal form
  float p = 10000;
  float r = .01;

 for (int day = 1; day <= 20; day++) {
   // int is for whole numbers
a = p * pow(1+r, day);//Every time it's done with a loop it goes again,adding one day, and then does that until it reaches the 20th day. It then stops
   cout<<day<<" ---- "<<a <<endl;
   }

 }
