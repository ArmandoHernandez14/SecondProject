//First Hash Table
#include<iostream>
#include<string>
#include"Hash.h"
#include "Hash.cpp"

int main(){
hash hashObject;
int index = hashObject.Hash("Armando");
cout<<index<<endl;
  return 0;
}
