#include<iostream>

using namespace std;

int main(){

  int age;
  int ageTotal = 0;
  int numberOfPeopleEnter = 0;

  cout<<"Enter first persons age or -1 to quit\n";
  cin>>age;

  while (age != -1) {
    ageTotal = ageTotal +age;
    numberOfPeopleEnter++;

    cout<<"Enter next persons age or -1 to quit"<<endl;
    cin>>age;
  }
cout<<"Number of people entered: "<<numberOfPeopleEnter<<endl;
cout<<"Average age: "<<ageTotal/numberOfPeopleEnter<<endl;
  return 0;
}
