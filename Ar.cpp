#include<iostream>

using namespace std;

void mightGoWrong();//Function Prototyping
void useMightGoWrong(){//Function that calls function
  mightGoWrong();
}
//Function that something wrong can happen
void mightGoWrong(){//Trys Function mightGoWrong
  bool error1=false;
  bool error2=true;

  if (error2) {
    throw string(" Something else went wrong");
  }

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
 catch(string &e){
   cout<<"string error message:"<<e<<endl;
 }
 cout<<"Still running"<<endl;
  return 0;
}
