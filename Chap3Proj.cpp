#include<iostream>
#include<string>

using namespace std;

int main(){
char Monday;
char Tuesday;
char Wednesday;
char Thursday;
char Friday;
char Saturday;
char Sunday;
int Time;
int Amtime;
cout<<"What day did you make your call?"<<endl;
char Day;
cin>>Day;
cout<<"At what time where you on the phone that Day?"<<endl;
cin>>Time;
cout<<"How long where you on the phone that day? Please enter in minutes."<<endl;
cin>>Amtime;
 if(Day=='Mo' || Day== 'Tu' || Day== 'Wed' || Day== 'Thu' || Day== 'Fr' && Time>=8 && Time<=18) {
    float cost=Amtime*0.40;
    cout<<"Your cost for being on the phone that day is "<<cost<<endl;
 }
 if (Time<8 && Time>13 && Day='Mo' || Day='Tu'|| Day='Wed'|| Day='Thu'||Day='Fri') {
   float cost=Amtime*0.25;
   cout<<"Your cost for being on the phone that day is "<<cost<<endl;
 }
  return 0;
}
