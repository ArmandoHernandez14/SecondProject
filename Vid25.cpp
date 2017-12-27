#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int age;
cout<<"How old are you kid?"<<endl;
cin>>age;
  switch (age) {
    case /* value */16:
    cout<<"Your old"<<endl;//This is saying, whatever age is for this example, just execute this one, and not the other ones.
    break;// the break variable just means end right here
    case 18:
    cout<<"Go to college"<<endl;
    break;
    case 21:
    cout<<"Buy Dr.Hernandez a house"<<endl;
    break;
    default:// If none of the three conditions on top are ment, it just runs the default
    cout<<"sorry your young"<<endl;
  }


}
