#include<iostream>
using namespace std;
int volume(int l, int w, int h);
int main(){
 cout<<volume(3,6,7);//Where telling it to print the function volume.
  return 0;
}//Where making a function here that has the integers l,w,and h. Then we tell it to return the length*Width*Height.
int volume(int l, int w, int h){
  return l*w*h;
}
