#include<iostream>

using namespace std;
class Armando{//People make classes in order to group similar functions
 public:// Public is an access specifier
  void coolSaying(){
    cout<<"Dr.Hernandez is cool"<<endl;
  }
};

int main(){
 Armando Scientist;// Scientist is the object which you'll need in order to access/use your class
Scientist.coolSaying();
  return 0;
}
