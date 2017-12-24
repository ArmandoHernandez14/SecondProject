#include<iostream>
#include<string>

using namespace std;
char again ='Y';
int main(){
int mx=130;
int n;
int additional;
int sorry;
while (again == 'y' || again == 'Y') {
  /* code */
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
// cout <<"Go again? (y/n) " ; If you want to end loop, just type this
// cin>> again; // change control variable
}//end while loop
// cout<<"The end"<<endl;
  return 0;
}
