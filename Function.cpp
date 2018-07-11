#include<iostream>

using namespace std;
// This is a function
void loop(int amount_of_times);
// When you write it this way, it's called prototyping a function
int main() {
  loop(10);//Whenever you try to run something, you have to write the name of the function and then parenthesis, and then semicolon
  return 0;
}

void loop(int amount_of_times) {
  for(int i = 0;i<amount_of_times;i++){
    if(i == 10){
      cout<<"Dr.Hernandez"<<endl;
      break;
    }else
  cout<<"Dr.Hernandez"<<endl;
}
}
