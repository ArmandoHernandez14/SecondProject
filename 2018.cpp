#include<iostream>
#include<cmath>

using namespace std;
void input(int &a,&b,&c);
void discriminate(int &a,&b,&c);
void roots();

int main(){
  int a,b,c;
int end;
 while(end != -1){
  input(a,b,c);
  discriminate(a,b,c);
  cout<<"Enter -1 to end: \n";
  cin>>end;
}

return 0;
}
//Take input from the user
void input(int &a,&b,&c){
  int a,b,c;
  cout<<"Enter values a,b,and c(in that order, and a cannot be equal to 0): ";
  cin>>a,b,c;
}
//Checks if the trinomial has complex roots,positive roots, or only has one root
void discriminate(int &a,&b,&c){
double root_1,root_2;
double discriminate = sqrt((b*b)-4*(a)*(c));
if (discriminate >0){
  Positive_Roots();
}
if (discriminate == 0) {
  one_root();
}
else{
  Negative_Roots();
}
}
//Calculates positive roots
void Positive_Roots(){

}
//Calculates complex roots
void Negative_Roots(){

}
//Calculates the root of a trinomial if it's discriminate is equal to zero
void one_root() {

}
