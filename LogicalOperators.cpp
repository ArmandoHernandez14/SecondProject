#include<iostream>
#include<cmath>

using namespace std;
int age;
int money;
int main(){
 cout<<"How old are you?"<<endl;
 cin>>age;
 cout<<"How much money do you have on you?"<<endl;
 cout<<"$";cin>>money;
if (age>=21 && money>=500) {
  cout<<"Alright you can come in"<<endl;
}
else{
  cout<<"Get lost kid"<<endl;
}
  return 0;
}
