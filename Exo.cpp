#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int main(){
  cout << "Hello World" <<endl;

  const double PI =3.1315926535;
  char myGrade ='A';
  int myAge = 39;
  float favNum = 3.1315926535;
  double otherfavNum =1.6180339887;

  cout <<"Favorite Number" << otherfavNum <<endl;
  cout<<"Size of int"<< sizeof(myAge)<< endl;
  // Other types include
  //Short int: At least 16 bits
  // Long int: At least 32 bits
  //Long Long int: At least 64 bits
  //unsigned int: Same size as signed version
  // long double:Not less then double
}
