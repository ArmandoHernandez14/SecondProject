#include<iostream>

using namespace std;

int main(){
  int j[9];//Where telling the compiler to save space for nine integers
  cout<<"Element - Value"<<endl;//Just print out title
  int count =8;
  for (size_t x = 0; x <= count; x++) {//It just looped 8 times
   j[x]=99;//Each integer had the value 99

   cout<<x<<"   ------  "<<j[x]<<endl;
  }

  return 0;
}
