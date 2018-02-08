#include<iostream>

using namespace std;

int main(){
int quarters;
int dimes;
int nickels;
cout<<"How many quarters do you have?: ";
cin>>quarters;
cout<<endl;

cout<<"How many dimes?: ";
cin>>dimes;
cout<<endl;

cout<<"How many nickels?: ";
cin>>nickels;
cout<<endl;
 int cents=(nickels*5)+(dimes*10)+(quarters*25);
 cout<<"You have "<<cents<<" cents"<<endl;

  return 0;
}
