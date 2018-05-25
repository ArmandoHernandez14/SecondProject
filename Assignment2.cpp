#include<iostream>
#include<cmath>

using namespace std;

void input(int& amount_in_coins);
void compute_coins(int CoinValue,int& quarter,int& dime,int& Penny);
void PrintChange(int CoinValue,int quarter,int dime,int Penny);

int main(){
  int CoinValue,quarter,dime,Penny,end;
  do {
    input(CoinValue);
    compute_coins(CoinValue,quarter,dime,Penny);
    PrintChange(CoinValue,quarter,dime,Penny);
    cout<<"Enter -1 to end: ";
    cin>>end;
  } while(end != -1);
  return 0;
}

void input(int& amount_in_coins){
  cout<<"Enter your change value(only from 1 to 99 cents): ";
  cin>>amount_in_coins;
}

void compute_coins(int CoinValue,int& quarter,int& dime,int &Penny){
  if(CoinValue > 99 && CoinValue < 0){
    cout<<"Error! Can't take in change greater than 100, or lower than 0\n";
  }else{ quarter = CoinValue/25;
  CoinValue=CoinValue%25;
  dime=CoinValue/10;
  CoinValue= CoinValue % 10;
  Penny = CoinValue/1;
  CoinValue=CoinValue % 1;}
}

void PrintChange(int CoinValue,int quarter, int dime, int Penny){
  cout<<CoinValue<<" cents can be given as\n";
  cout<<quarter<<" quarter(s) "<<dime<<" dime(s) and "<<Penny<<" penny(pennies)"<<endl;
}
