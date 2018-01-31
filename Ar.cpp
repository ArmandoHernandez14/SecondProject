#include<iostream>

using namespace std;
//Function that something wrong can happen
void mightGoWrong(){
  bool error1=true;
  bool error2=true;

  if (error1) {
    throw "Something went wrong.";
  }
}

int main(){
  try{
     mightGoWrong();
  }
 catch(int e){
  cout<<"Error code: " <<e<<endl;
 }
 catch(char const * e){
   cout<<"Error message: "<<e<<endl;
 }
 cout<<"Still running"<<endl;
  return 0;
}
