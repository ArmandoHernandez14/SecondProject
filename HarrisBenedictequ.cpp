//Warm-Up
#include<iostream>
#include<cmath>

using namespace std;

void Input(double &weight, double& height,int& age,char& sex);
void determine_BMR(double& weight, double& height,int& age,char& sex,double& BMR);
void Calculates(double BMR, int &amout_to_maintain_weight);
void Output(int amout_to_maintain_weight);

int main(){
  char sex;
  int end = 1,age,amout_to_maintain_weight;
  double weight,height,BMR;
  while (end != -1) {
    Input(weight,height,age,sex);
    if(sex == 'M' || sex == 'F'){
    determine_BMR(weight,height,age,sex,BMR);
    Calculates(BMR,amout_to_maintain_weight);
    Output(amout_to_maintain_weight);
  }
    cout<<"Enter -1 to end: ";
    cin>> end;
  }
  return 0;
}
//Gets Weight,height,age, and sex from user
void Input(double& weight, double& height, int& age,char& sex){
cout<<"How much do you weight(in pounds): ";
cin>>weight;
cout << "Your height(in inches): ";
cin>>height;
cout<<"Your age(years): ";
cin>>age;
cout << "Enter sex(M:Male, F:Female): ";
cin>>sex;
}
//Determines the BMR
void determine_BMR(double& weight, double& height,int& age,char& sex,double& BMR){
  if (sex == 'M') {
    BMR= 66+(6.3 * weight)+(12.9* height)-(6.8*age);
  }
  if (sex == 'F') {
    BMR = 655 + (4.3* weight)+(12.9*height)-(6.8* age);
  }
}
//How much chocole bars needed to maintain weight
void Calculates(double BMR,int& amout_to_maintain_weight){
 int Chocolate_bar= 230;
 amout_to_maintain_weight = BMR/Chocolate_bar;
}
//Tells the user the results
void Output(int amout_to_maintain_weight){
  cout<<"You need "<<amout_to_maintain_weight<<" chocole bars to maintain your current weight.\n";
}
