#include<iostream>
#include<string>

using namespace std;

int main(){
  int swapHolder=-1;
 int DrHernandez[]={44,9,237,1,5,44,534,17,21,819};
 for (int PMC = 0; PMC < 10; PMC++) {
  if (DrHernandez[PMC]>DrHernandez[PMC+1]) {
   swapHolder=DrHernandez[PMC+1];
   DrHernandez[PMC+1]=DrHernandez[PMC];
   DrHernandez[PMC]=swapHolder;
  }
 }
  for(int PMC = 0; PMC < 10; PMC++) {
     if (DrHernandez[PMC]>DrHernandez[PMC+1]) {
       swapHolder=DrHernandez[PMC+1];
      DrHernandez[PMC+1]=DrHernandez[PMC];
      DrHernandez[PMC]=swapHolder;
     }
}
for(int PMC = 0; PMC < 10; PMC++) {
   if (DrHernandez[PMC]>DrHernandez[PMC+1]) {
     swapHolder=DrHernandez[PMC+1];
    DrHernandez[PMC+1]=DrHernandez[PMC];
    DrHernandez[PMC]=swapHolder;
   }
}
for(int PMC = 0; PMC < 10; PMC++) {
   if (DrHernandez[PMC]>DrHernandez[PMC+1]) {
     swapHolder=DrHernandez[PMC+1];
    DrHernandez[PMC+1]=DrHernandez[PMC];
    DrHernandez[PMC]=swapHolder;
   }
      cout<<DrHernandez[PMC]<<", ";
}
  return 0;
}
