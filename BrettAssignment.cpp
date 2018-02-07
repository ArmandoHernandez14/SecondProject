#include<iostream>
#include<string>

using namespace std;
//Declared Function
 class Car{
 public:
  int x=2;
  int y=2;
  int z=1;
 void speed();
 void increase_speed();
 };

//:: is the scope resolution opertor
 int main(){
 Car Greg;//I'm declaring that I want to use class Car, and then the object Armando
 Greg.speed();//Output 0
 Greg.increase_speed();//Increase speed by +6
 Greg.speed();//Output 6
 }
void Car::speed(){
  cout<<x<<endl;
}
 void Car::increase_speed(){
 x=y+x+z;
 }
