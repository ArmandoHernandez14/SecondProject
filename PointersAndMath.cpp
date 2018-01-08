#include<iostream>

using namespace std;

int main(){
 int bucky[5];
 int *bp0= &bucky[0];
 int *bp1=&bucky[1];
 int *bp2=&bucky[2];
 int *bp3=&bucky[3];
 cout<<"The memory address of bp0 is "<<bp0<<endl;
 cout<<"The memory address of bp1 is "<<bp1<<endl;
 cout<<"The memory address of bp2 is "<<bp2<<endl;
 cout<<"The memory address of bp3 is "<<bp3<<endl;

 bp0 += 2;
 cout<<"The memory address of bp0 is not at "<<bp0<<endl;

  return 0;
}
