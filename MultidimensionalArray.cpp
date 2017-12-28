#include<iostream>

using namespace std;

int main(){//rows, and then columns
  int sally[3][12]={{2,3,4,5,6,7,8,9,10,11,12,13},{8,9,10,11,12,13,14,15,16,17,18,19},{10,20,30,40,50,60,70,80,90,100,110,120}};

//If you want to access this column it's 0 //2,3,4
//This one is 1  //8,9,10
cout<<sally[0][5];
  return 0;
}
