#include<iostream>
#include<cmath>
using namespace std;

int main(){
  float a;
  float p = 10000;
  float r = .01;

 for (int day = 1; day <= 20; day++) {
   // int is for whole numbers
a = p * pow(1+r, day);
   cout<<day<<" ---- "<<a <<endl;
   }

 }
