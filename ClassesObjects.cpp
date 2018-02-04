#include<iostream>
#include<string>
#include"BrettMccausland.h"

using namespace std;

int main() {
string name;
int height;
double weight;

cout<<"Enter your name: ";
cin>>name;
cout<<"Enter your height(in inches): ";
cin>>height;
cout<<"Enter your weight(in pounds): ";
cin>>weight;

 BrettMccausland Student_1(name,height,weight);//if you want to use the overload constructor throw in parenthesis and put name,height,weight

cout<<endl<<"patient name: "<<Student_1.getName()<<endl<<
"Height: "<<Student_1.getHeight()<<endl<<"Weight: "<<Student_1.getWeight()<<endl;
  return 0;
}
