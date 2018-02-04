//Header==> Function Definitions
#include"BrettMccausland.h"

BrettMccausland::BrettMccausland(){
  newHeight=0;
  newWeight=0.0;
}

BrettMccausland::BrettMccausland(string name, int height, double weight){
  newName=name;
  newHeight=height;
  newWeight=weight;
}
BrettMccausland::~BMI(){

}
string BrettMccausland::getName() const{
  return newName;
}
int BrettMccausland::getWeight() const{
  return newHeight;
}

double BrettMccausland::getWeight() const{
  return newWeight;
}
