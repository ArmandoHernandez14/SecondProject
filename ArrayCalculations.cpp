#include<iostream>
using namespace std;

int main(){
 int DrHernandez[5]={10,14,20,24,40};//Setting the value for the elements within the parenthesis, That hold 5 integers
 int sum = 0;//Assigning the sum value equal to 0
 int count=5;//Making count 5
 for (size_t i = 0; i < count; i++) {
   sum += DrHernandez[i];//Adding the sum 0 to the elements in DrHernandez
   cout<<sum<<endl;//It's printing out the value of sum
 }

  return 0;
}
