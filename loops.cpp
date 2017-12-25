#include<iostream>

using namespace std;

int main(){

 int bacon = 1;
 int number;
int total = 0;

 while (bacon<=5) {
   cin>>number;
   total = total + number;
   bacon++;
 }
cout<<"Your total is "<< total<<endl;

  return 0;
}
