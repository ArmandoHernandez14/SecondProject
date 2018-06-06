#include<iostream>
#include<stack>
#include<cmath>

struct Node{
  int data;
  Node* next;
};

class Stack{
public:
  int get();
void set(auto& x);
private:
  auto bob;
};

int main(){
auto x;
Stack A;
A.set(x);
std::cout<<"Your value was "<<A.get()<<std::endl;
  return 0;
}

int Stack::get(){
  return bob;
}

void Stack::set(auto& x){
  std::cout<<"Enter Integer: ";
  std::cin>>x;
  bob = x;
}
