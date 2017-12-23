#include<iostream>
#include<string>
using namespace std;
class Armando{//People make classes in order to group similar functions
public:
  void setName(string x){
    XBOXONEKNIGHT=x;
  }
  string getName(){
    return XBOXONEKNIGHT;
  }
private:
  string XBOXONEKNIGHT;

};

int main(){
 Armando Scientist;
 Scientist.setName("Dr.Hernandez");
 cout<<Scientist.getName();
  return 0;
}
