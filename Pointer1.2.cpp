#include<iostream>
//Passing by Reference
using namespace std;
void passByReference(int *x);//prototyping the functions
void passByValue(int x);
int main(){
  int betty = 13;
  int sandy = 13;
 passByReference(&sandy);
 passByValue(betty);//Betty is equal to x now, but Betty is not equal to 99, because now x=13
 cout<<"betty is now "<<betty<<endl;
 cout<<"Sandy is now "<<sandy<<endl;
  return 0;
}
void passByValue(int x){
 x=99;
}
 void passByReference(int *x){
  *x=66;//We are setting the address of x equal to 66
}
