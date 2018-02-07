#include<iostream>
#include<string>
#include"BrettMccausland.h"
#include "BrettMccausland.cpp"

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

cout<<endl<<"Patient Name: "<<Student_1.getName()<<endl<<
"Height: "<<Student_1.getHeight()<<endl<<
"Weight: "<<Student_1.getWeight()<<endl;
system("Pause");
cout<<endl;
BrettMccausland Student_2;

cout<<"Enter your name: ";
cin>>name;
cout<<"Enter your height(in inches): ";
cin>>height;
cout<<"Enter your weight(in pounds): ";
cin>>weight;

Student_2.setName(name);
Student_2.setHeight(height);
Student_2.setWeight(weight);
cout<<endl<<"Patient Name: "<<Student_2.getName()<<endl<<
"Height: "<<Student_2.getHeight()<<endl<<
 "Weight: "<<Student_2.getWeight()<<endl<<
 "BMI:"<<Student_2.calculateBrettMccausland()<<endl;
cout<<endl<<"Student 1 Name: "<<Student_1.getName()<<endl;
  return 0;
}
