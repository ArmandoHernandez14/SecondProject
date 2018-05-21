#include<iostream>
#include<cmath>

using namespace std;

void input(int& a, int& b, int& c);
void discriminate(int& a, int& b, int& c);
void Positive_Roots(int& a, int& b,int& c);
void Negative_Roots(int& a, int& b, int& c);
void one_root(int& a ,int& b, int& c);

int main(){
int a,b,c;
int end;
 do{
  input(a,b,c);
  discriminate(a,b,c);
  cout<<"Enter -1 to end: \n";
  cin>>end;
}while(end != -1);
return 0;
}
//Take input from the user
void input(int& a, int& b, int& c){
  cout<<"Enter values a,b,and c(in that order, and a cannot be equal to 0): ";
  cin>>a,b,c;
}
//Checks if the trinomial has complex roots,positive roots, or only has one root
void discriminate(int& a,int&b,int&c){
int discriminate = sqrt((b*b)-4*(a)*(c));
if (discriminate >0){
  Positive_Roots(a,b,c);
}
if (discriminate == 0) {
  one_root(a,b,c);
}
else{
  Negative_Roots(a,b,c);
}
}
//Calculates positive roots
void Positive_Roots(int& a, int& b, int& c){
double root_1,root_2;
root_1=(((-1)*b)+sqrt((b*b)-(4*(a)*(c))))/2*a;
root_2=(((-1)*b)-sqrt((b*b)-(4*(a)*(c))))/2*a;
cout<<"Your roots are "<<root_1<<", and "<<root_2<<endl;
}
//Calculates complex roots
void Negative_Roots(int& a, int& b, int& c){
double root_1,root_2;
root_1=(((-1)*b)+sqrt((b*b)-(4*(a)*(c))))/2*a;
root_2=(((-1)*b)-sqrt((b*b)-(4*(a)*(c))))/2*a;
cout<<"Your roots are "<<root_1<<", and "<<root_2<<endl;
}
//Calculates the root of a trinomial if it's discriminate is equal to zero
void one_root(int& a, int& b, int& c){
double root;
root=(((-1)*b)+sqrt((b*b)-(4*(a)*(c))))/2*a;
cout<<"Your root is "<<root<<endl;
}
