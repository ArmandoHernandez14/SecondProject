#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>//include <sctdlib> and <ctime> to use the random generator
#include<ctime>//Allows us to access the clock in our computer
using namespace std;

int main(){
 srand(time(0)); //Allows us to pass in a random number
//time(0) calculates the seconds and changes all the time

for (int x=1; x<25; x++) {
  cout<<1+rand()%6<<endl;// all the 1+ is doing is eliminating a 0 by adding a 1
}// all %6 means is pick numbers from 0-6
//cout<<rand();All rand() does is return to you a random number

  return 0;
}
