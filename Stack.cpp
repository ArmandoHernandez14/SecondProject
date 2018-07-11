#include<iostream>
#include<stack>
#include<string>

using namespace std;

//figure what type of pointer
class Stack{
private:
  struct Node{
    string name;
    Node* next;
  };
  Node* stackPtr;

public:
void Push(string name);
void Pop();
void ReadItem(Node* r);
void Print();

Stack();
//Constructor
~Stack();
//Destructor
   //only thing that should be here is a node pointer
};

int main(){
Stack A;//Creating an object called A
A.Push("s");//Making a node, that holds the string "s"
A.Print();//I'm then going to print out the item in the stack
cout<<"Going to pop\n";//Telling the user what's happening
A.Pop();//I then remove the node from the stack
cout<<"\nAfter Popping\n";
A.Print();//Print out what's left in the stack
return 0;
}

Stack::Stack(){
  stackPtr = NULL;//Makes sure when it starts that the pointer is pointing to NULL
}

Stack::~Stack(){//Is called only when the stack object is going to be destoryed
  Node* p1;
  Node* p2;

  p1 = stackPtr;
  while (p1 != NULL){
    p2=p1;
    p1=p1->next;
    p2->next=NULL;
    delete p2;
  }
}

void Stack::Push(string name){
  Node* n = new Node;

  n->name = name;

  if (stackPtr == NULL) {
    stackPtr  = n;
    stackPtr->next = NULL;
  }
  else{
    n->next = stackPtr;
    stackPtr = n;
  }
}

void Stack::ReadItem(Node *n){
  cout<<"---------------"<<endl;
  cout<<"name: "<<n->name<<endl;
  cout<<"---------------"<<endl;
  n=NULL;
}

void Stack::Pop(){
  if(stackPtr == NULL){
    cout<<"There's nothing on the stack"<<endl;
  }else {
    Node* p = stackPtr;
    //ReadItem(p);
    stackPtr = stackPtr->next;
    p->next = NULL;
    delete p;
  }
}

void Stack::Print(){
  Node* p = stackPtr;
  while (p != NULL) {
    ReadItem(p);
    p= p->next;
  }
}
