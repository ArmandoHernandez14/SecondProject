#include<iostream>

using namespace std;

int main(){
int bucky;//The more precise a variable is, the more memory it takes up

cout<< sizeof(bucky) <<endl;//The sizeof varible, basically prints out how much bytes a letter/variable/integer is.
cout<<sizeof(bucky)/sizeof(bucky[0])<<endl;//Check how much elements are inside of the Array

  return 0;
}
