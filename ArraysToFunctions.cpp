#include<iostream>

using namespace std;
void Xboxone(int theArray[], int sizeOfArray);//Prototyped functioned
int main(){
int bucky[3]={10,23,12};//This is int theArray
int jessica[6]={21,23,24,26,20,69};//This is int sizeOfArray
Xboxone(jessica, 6);//Where putting the name of the function, and then the one we want it to print
  return 0;
}
void Xboxone(int theArray[], int sizeOfArray){

  for (size_t i = 0; i <sizeOfArray; i++) {
   cout<<theArray[i]<<endl;
  }
}
