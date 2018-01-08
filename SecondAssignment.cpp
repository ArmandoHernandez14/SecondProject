#include<iostream>

using namespace std;
//C++ Arrays- Basic sorting - Bubble sorting
int main(){
 //const int x;

 int l;
 int a;
 int p;
 int q;
 int e;
 int g;
 int b;
 int z;
 int m;
 int s;
 int numbers[10]={l,a,p,q,e,g,b,z,m,s};
 bool ordered=false;
 int n=0,k=0,x=0,y=0;

 cout<<"First number\n";
  cin>>l;
  cout<<"Second number\n";
  cin>>a;
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



  while (ordered=false) {
  for(n=0; n<6;n++){
  if(numbers[n]>numbers[n+1]){
        x=numbers[n+1];
        y=numbers[n];
        numbers[n]=x;
        numbers[n+1]=y;
        k++;
      }
      if(k==0){
        ordered=true;
        cout<<"Here are your numbers "<<numbers<<endl;
     }
     else{
       k=0;
     }
    }
  }
  return 0;
}
