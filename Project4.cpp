#include<iostream>

using namespace std;

int main(){
int time;
int acceleration=32;
cout<<"Enter time(in seconds): "<<endl;
cin>>time;
int object=(acceleration*(time*time))/2;
cout<<"The distance for an object falling for that long in seconds would be "<<object<<"ft"<<endl;

  return 0;
}
