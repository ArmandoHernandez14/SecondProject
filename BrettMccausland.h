//Header ==> Function Declaration
#include<iostream>
#include<string>

using namespace std;

#ifndef BrettMccausland_h
#define BrettMccausland_h

class BrettMccausland{
public:
//Default Constructor
BrettMccausland();

//Overload Constructor
BrettMccausland(string,int,double);//We're not passing it as reference

//Destructor
~BMI();

//Accessor Functions
string getName() const;
//getName - returns name of patient

int getHeight() const;
 //getHeight - returns height of patient

 double getWeight() const;
 //getWeight - returns weight of patient

private:
//Member Variables
  string newName;
  int newHeight;
  double newWeight;
};//add semicolon

#endif
