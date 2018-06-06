#include<iostream>
#include<chrono>
#include<thread>

using namespace std;

void input(char& Player_1,char& Player_2);
void determining(char Player_1,char Player_2);

int main(){
char Player_1,Player_2;
int end;
 do{
input(Player_1,Player_2);
determining(Player_1,Player_2);
cout<<"Enter -1 to end: ";
cin>>end;
}while(end != -1);
return 0;
}

void input(char& Player_1,char& Player_2){
  cout<<"R(Rock),P(Paper),S(Scissors)(Player 1): ";
  cin>>Player_1;
  cout<<"Rock,Paper,Scissors(Player 2): ";
  cin>>Player_2;
}

void determining(char Player_1,char Player_2){
  if (Player_1 == 'R' || Player_1 == 'r') {
    if (Player_2 == 'S' || Player_2 == 's') {
      cout<<"Player 1 Wins, because Rock breaks Scissors."<<endl;
    }
  }  if (Player_1 == 'P' || Player_1 == 'p') {
      if (Player_2 == 'R' || Player_2 == 'r') {
        cout<<"Player 1 Wins, because Paper covers Rock."<<endl;
      }
    }  if (Player_1 == 'S' || Player_1 == 's') {
        if (Player_2 == 'P' || Player_2 == 'p') {
          cout<<"Player 1 Wins, because Scissors cut Paper."<<endl;
        }
      }  if (Player_2 == 'S' || Player_2 == 's') {
          if (Player_1 == 'P' || Player_1 == 'p') {
            cout<<"Player 2 Wins, because Scissors cut Paper."<<endl;
          }
        }if (Player_2 == 'P' || Player_2 == 'p') {
            if (Player_1 == 'R' || Player_1 == 'r') {
              cout<<"Player 2 Wins, because Paper covers Rock."<<endl;
          }}if (Player_2 == 'R' || Player_2 == 'r') {
              if (Player_1 == 'S' || Player_1 == 's') {
                cout<<"Player 1 Wins, because Rock breaks Scissors."<<endl;
              }
          }if (Player_1 == 'P' || Player_1 == 'p') {
           if (Player_2 == 'P' || Player_2 == 'p') {
             cout<<"Try Again, because your both tied."<<endl;
           }
         }if (Player_1 == 'R' || Player_1 == 'r') {
           if (Player_2 == 'R' || Player_2 == 'r') {
             cout<<"Try Again, because your both tied."<<endl;
           }
         }if (Player_1 == 'S' || Player_1 == 's') {
           if (Player_2 == 'S' || Player_2 == 's') {
             cout<<"Try Again, because your both tied."<<endl;
           }
          }
}
