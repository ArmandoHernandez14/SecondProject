//Header==> Function Definitions
#include"BrettMccausland.h"
//If you want to access the stuff in The class. Put the class name then :: and the function name.
BrettMccausland::BrettMccausland(){
  newHeight=0;
  newWeight=0.0;
}

BrettMccausland::BrettMccausland(string name, int height, double weight){
  newName=name;
  newHeight=height;
  newWeight=weight;
}
BrettMccausland::~BrettMccausland(){

}
string BrettMccausland::getName() const{
  return newName;
}
int BrettMccausland::getHeight() const{
  return newHeight;
}

double BrettMccausland::getWeight() const{
  return newWeight;
}
void BrettMccausland::setName(string name){
  newName=name;
}
void BrettMccausland::setHeight(int height){
  newHeight=height;
}
void BrettMccausland::setWeight(double weight){
  newWeight=weight;
}
double BrettMccausland::calculateBrettMccausland(){
  return((newWeight*703/(newHeight*newHeight)));
}
