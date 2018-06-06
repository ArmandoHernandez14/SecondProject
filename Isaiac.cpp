#include<iostream>
#include<cmath>
//Still not complete
using namespace std;

void input(int& frontNumber,int& back_Num);
int Conversion(int frontNumber,int back_Num);
void Output(int frontNumber,int back_Num,int temp);

int main(){
  int frontNumber,back_Num,end,temp;
  do {
    input(frontNumber,back_Num);
    temp = frontNumber;
    Conversion(frontNumber,back_Num);
    Output(frontNumber,back_Num,temp);
    cout<<"Enter -1 to end: ";
    cin>>end;
  } while(end != -1);
  return 0;
}

void input(int& frontNumber, int& back_Num){
cout<<"Enter the hour of the time: ";
cin>>frontNumber;
cout<<"Enter the minutes: ";
cin>>back_Num;
}

int Conversion(int frontNumber, int back_Num){
 if (frontNumber> 24 || frontNumber < 0 || back_Num > 59 || back_Num<1) {

 }else if (frontNumber>12 && frontNumber<=24) {
   frontNumber = frontNumber-12;
   return frontNumber;
 } else{
   return frontNumber;
 }
}

void Output(int frontNumber,int back_Num,int temp){
  if (frontNumber > 24 || frontNumber<0 || back_Num>=0 || back_Num >=60) {
    cout<<"Can't convert number/numbers you typed in.(Try again)"<<endl;
  }
  if(temp<=12 && temp >=0){
  cout<<"In 12 Hour-Notation your time is\n";
  cout<<frontNumber<<":"<<back_Num<<" A.M\n";
}
if (temp>12 && temp <25) {
  cout<<"In 12 Hour-Notation your time is\n";
  cout<<frontNumber<<":"<<back_Num<<" P.M\n";
}}
