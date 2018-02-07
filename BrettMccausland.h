//Header ==> Function Declaration
#include<iostream>
#include<string>

using namespace std;

#ifndef BrettMccausland_h//if not defined
#define BrettMccausland_h

class BrettMccausland{
public:
//Default Constructor
BrettMccausland();//Sets member variables to their null state

//Overload Constructor
BrettMccausland(string,int,double);//We're not passing it as reference

//Destructor
~BrettMccausland();

//Accessor Functions
string getName() const;
//getName - returns name of patient

int getHeight() const;
 //getHeight - returns height of patient

 double getWeight() const;
 //getWeight - returns weight of patient

 //Mutator Functions
 void setName(string);
 //setName-sets name of Patient
 //@param string -name of patient
 void setHeight(int);
 //setheight-sets height of Patient//@param int-height of Patient
 void setWeight(double);
 //setWeight-sets weight for Patient
 //@paran double-weight of patient
 double calculateBrettMccausland();
 //calculateBrettMccausland-CALCUALTES BrettMccausland of Student_1
 //@returns double-BrettMccausland of student

private:
//Member Variables
  string newName;
  int newHeight;
  double newWeight;
};//add semicolon

#endif
