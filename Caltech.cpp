#include<iostream>
#include<string>
using namespace std;
// A constructor is a function that get's called upon, as soon as you create an object
class Armando{//People make classes in order to group similar functions
public:
  Armando(string z){
    setName(z);
  }
  void setName(string x){
    Brett=x;
  }
  string getName(){
    return Brett;
  }
private:
  string Brett;
};

int main(){
 Armando XBOXONEKNIGHT("Lucky Bucky Roberts");
 cout<< XBOXONEKNIGHT.getName();
  return 0;
}
