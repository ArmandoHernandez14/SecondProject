#include<iostream>
#include<cmath>

using namespace std;

void Input(double& s1,double& s2,double &s3, double & s4);
//Takes the four scores from the user
void Compute(double s1,double s2,double s3, double s4,double& Av, double &Std_devia);
//Calculates the Average, and Standard Deviation of the Four Scores
void Output(double Av, double Std_devia);
//Displays the results to the screen

int main(){
   double s1,s2,s3,s4,Av,Std_devia;
   int end;
   do {
     Input(s1,s2,s3,s4);
     Compute(s1,s2,s3,s4,Av,Std_devia);
     Output(Av,Std_devia);
     cout<<"Enter -1 to end: ";
     cin>>end;
   } while(end != -1);
}

void Input(double& s1,double& s2,double &s3, double & s4){
  cout<<"Enter the First score: ";//Takes the first score
  cin>>s1;
  cout<<"Enter the Second score: ";//Takes the Second Score
  cin>>s2;
  cout<<"Enter the Third score: ";//Takes the Third score
  cin>>s3;
  cout<<"Enter the Fourth score: ";//Takes the fourth score
  cin>>s4;
}

void Compute(double s1,double s2,double s3, double s4,double& Av, double& Std_devia){
  Av=((s1+s2+s3+s4)/4);
  Std_devia= sqrt((s1-Av)*(s1-Av));
}

void Output(double Av, double Std_devia){
  cout<<"The Average score(of those four scores) is "<<Av<<"% , and the Standard Deviation is ";
  cout<<Std_devia<<"%.\n";
}
