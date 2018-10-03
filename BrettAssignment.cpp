#include<iostream>

using namespace std;

class notation{
public:
  void input(int &hr,int& min);
  void output(int hr,int min, char time);
  void conversion(int& hr,int& min,char& time);
};

int main(){
int hr,min,k;
char AMPM;
notation n;
do{
n.input(hr,min);
if(hr>24 || hr<0 || min>=60 || min<0){
  break;
}
n.conversion(hr,min,AMPM);
n.output(hr,min,AMPM);
cout<<"Enter -1 to exit: ";
cin>>k;
cout<<endl;
}while(k!=-1);
  return 0;
}

void notation::input(int &hr,int& min){
  cout<<"Enter hour of day: ";
  cin>>hr;
  if(hr>24 || hr<0){
    cout<<"Not valid input\n";
  }
  cout<<endl;
  cout<<"Enter time(such as minute): ";
  cin>>min;
  if(min<0 || min>59){
    cout<<"Not valid input\n";
  }
}

void notation::conversion(int& hr,int& min,char& time){
  if(hr==12){
    time='P';
  }else if(hr==0){
    hr=12;
    time = 'A';
  }else if(hr<12 && time !='A' && time != 'P'){
      time='A';
    }else if(hr>12){
      if(hr == 24){
        hr=hr-12;
        time='A';
      }else if(hr != 12){
      hr=hr-12;
      time='P';
    }
  }
}

void notation::output(int hr,int min,char time){
   if(time=='A'){
     if(min<10 && min>=0){
       cout<<"The time is "<<hr<<":0"<<min<<" a.m."<<endl;
     }if(min>=10){
       cout<<"The time is "<<hr<<":"<<min<<" a.m."<<endl;}
   }else{
     if(min<10 && min>=0 && time == 'P'){
       cout<<"The time is "<<hr<<":0"<<min<<" p.m."<<endl;
     }else{
     cout<<"The time is "<<hr<<":"<<min<<" p.m."<<endl;}
   }
}
