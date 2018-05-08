#include<iostream>

using namespace std;
//Declared Function
 class Car{
 public:
//  int x=2;
//  int y=2;
//  int z=1;
 void speed(int x);
 //void increase_speed(int& y);
 };

//:: is the scope resolution opertor
 int main(){
 Car Greg;//I'm declaring that I want to use class Car, and then the object Armando
 Greg.speed(0);//Output 0
 Greg.speed(6);//Increase speed by +6
 Greg.speed();//Output 6
 }
void Car::speed(int x){
  cout<<x<<endl;
}
 // void Car::increase_speed(int& y){
 //
 // }
