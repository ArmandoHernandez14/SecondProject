//Question 9
//Writing an program that can find the area, and Perimeter of an arbitrary triangle
#include <iostream>
#include<cmath>

using namespace std;
void input(int &a,int &b,int &c);
void Testing(int a,int b,int c);

int main() {
  int a,b,c;
    input(a,b,c);//Gets sides a,b,and c
    Testing(a,b,c);//Calculates the Perimeter,area, and semiperimeter
 }

void input(int &a,int &b,int &c){
  cout<<"Enter side a: ";
  cin>>a;
  cout<<"Enter side b: ";
  cin>>b;
  cout<<"Enter side c: ";
  cin>>c;
}

void Testing(int a,int b,int c) {
 double area,s;
 s=(a+b+c)/2;
 int Perimeter;
 area=sqrt(s*((s-a)*(s-b)*(s-c)));
 Perimeter = a+b+c;
 if (area == 0 || area<0) {
   cout<<"Not an arbitrary angle\n";
 }else{
 cout<<"The area of the triangle is "<<area<<"ft^2, and the Perimeter is "<<Perimeter<<"ft."<<endl;
}
}
