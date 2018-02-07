#include <iostream>

using namespace std;

class DayOfYear{
public:
  void output();
  int month;
  int day;
};

int main(){
DayOfYear today, birthday;

cout<<"Enter today's date:\n";
cout<<"Enter month as a number:";
cin>>today.month;
cout<<"Enter the day of the month: ";
cin>>today.day;
cout<<"Enter your birthday:\n";
cout<<"Enter month as a number:\n";
cin>>birthday.month;
cout<<"Enter the day of the month:\n";
cin>>birthday.day;

cout<<"Today's date is ";
today.output();
cout<<"Your birhtday is ";
birthday.output();

if(today.month == birthday.month && today.day == birthday.day)
cout<<"Happy Birhtday!\n";
else
 cout<<"Happy unbirthday!\n";
 return 0;

}

void DayOfYear::output(){
  cout<<"Month= "<<month<<", day= "<<day<<endl;
}
