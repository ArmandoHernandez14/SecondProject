#include<iostream>
#include<string>

using namespace std;

int main(){
int mx=130;
int n;
int additional;
int sorry;

cout<<"How many people will be attending the meeting?\n";
cin>>n;

if (n<=mx) {
  additional= mx-n;
  cout<<"It is legal to hold the meeting, and the amount of additional people that can join are "<<additional<<" Thank you."<<endl;
}
else{
  sorry= n-mx;
  cout<<"The meeting cannot be held as planned due to fire regulations and in order to continue "<< sorry<<" people must leave."<<endl;
}

  return 0;
}
