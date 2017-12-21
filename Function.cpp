#include<iostream>

using namespace std;
// This is a function
void loop();
// When you write it this way, it's called prototyping a function
int main() {
  loop();//Whenever you try to run something, you have to write the name of the function and then parenthesis, and then semicolon
  return 0;
}

void loop() {
  cout<<"Dr.Hernandez"<<endl;
}
