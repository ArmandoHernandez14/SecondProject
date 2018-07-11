#include<iostream>
#include<string>

using namespace std;

struct Node{
  string Brett;
  Node* next;
};

class Stack{
public:
 Stack();
 //Initializes the object to an empty stack.
 void Push(string Brett);
 //Postcondition: the_symbol has been added to the stack.
 void Pop();
 //Precondition: The stack is not empty.
 //returns the top symbol on the stack and removes that
 //top symbol from the stack.
 void Print();
private:
  Node* CPU;//only node pointer
};

Stack::Stack(){
   CPU=NULL;
}

void Stack::Print(){
 Node* N;
 N=CPU;
 if (N == NULL) {
   cout<<"Nothing in the Stack!"<<endl;
 }else{
 if (N->next == NULL){
   cout<<"The only element in the list is "<<CPU->Brett<<"."<<endl;
 }
 else{
 while(N != NULL){
   if (N->next == NULL) {
     cout<<" and "<<N->Brett<<".";
   }else
   cout<<"The elements in the stack are "<<N->Brett<<",\n";
   N=N->next;
 }
}}
}

void Stack::Push(string Brett){
   if (CPU == NULL) {
     CPU = new Node;
     CPU ->Brett = Brett;
     CPU->next = NULL;
   }else{
     Node* CPU_2;
     CPU_2 = new Node;
     CPU_2 ->Brett = Brett;
     CPU_2 ->next = CPU;
     CPU = CPU_2;
     CPU_2 = NULL;
     delete CPU_2;
   }
}

int main(){
  Stack b;//Creates object
  b.Push("s");//Puts this as it's Data
  b.Pop();
 return 0;
}

void Stack::Pop(){
  if (CPU == NULL) {
    cout<<"Nothing in Stack!"<<endl;
  }else{
    Node* P;
    P=CPU;
    CPU= CPU->next;
    P->next = NULL;
    delete P;
    cout<<"Finished Popping"<<endl;
     Print();
  }
}
