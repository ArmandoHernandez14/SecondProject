#include<iostream>

using namespace std;

int main(){
 int x;
 int y;
 int p;
 int q;
 int e;
 int g;
 int b;
 int z;
 int m;
 int s;

 cout<<"First number\n";
 cin>>x;
 cout<<"Second number\n";
 cin>>y;
 cout<<"Third number"<<endl;
 cin>>p;
 cout<<"Fourth number"<<endl;
 cin>>q;
 cout<<"Fifth number\n";
 cin>>e;
 cout<<"Sixth number\n";
 cin>>g;
 cout<<"Seventh number\n";
 cin>>b;
 cout<<"Eighth number"<<endl;
 cin>>z;
 cout<<"Ninth number"<<endl;
 cin>>m;
 cout<<"Tenth number"<<endl;
 cin>>s;
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
 cout<<"Your numbers are "<<x<<','<<y<<','<<p<<','<<q<<','<<e<<','<<g<<','<<b<<','<<z<<','<<m<<','<<"and "<<s<<'.'<<endl;

  return 0;
}
