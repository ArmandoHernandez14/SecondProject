//Brett's Assignment
#include<iostream>
#include<cstddef>
#include<string>

using namespace std;

struct Node {
 int Data;
 Node* Next;
};
typedef Node* Set;
Set n;
Set h;

class Stack {
private:
  string b;
public:
  void push(string x);//set
  string pop();//Get
};

void Stack::push(string x){
  b = x;//Setting the private variable b = x
}

string Stack::pop(){
  return b;
}
void Menu();
void PrintLL();
void insert(int& user_data);
void First();
// void Next();
// void NewNode();
// void Bob();

int main(){
 //First();
 //Stack b;//Creates object
 //b.push("s");//Puts this as it's Data
 //b.pop();
  //Next();
  //NewNode();
  //Bob();
  Menu();
  return 0;
}

void Menu(){
int end,user_data;
do {
cout<<"\n ********  Main Menu  ********   \n";
cout<<" *     1.Create Linked List  *\n";
cout<<" *     2.Print Linked List   *\n";
cout<<" *     3.End Linked List     *\n";
cout<<" *****************************"<<endl;
cout<<": ";
cin>>end;
switch (end) {
  case 1: insert(user_data);
  break;
  case 2: PrintLL();
  break;
  case 3: cout<<"Good Bye!";
  break;
  default: cout<<"Can't find option for number you entered, please try again.\n";
}
} while(end != 3);
}

void PrintLL(){
  Set p=h;
  if(p == NULL){
    cout<<"Nothing in linked list!"<<endl;
  }while (p != NULL){
     if(p == h && p->Next == NULL){
       cout<<"Your Linked List contains "<<p->Data;
       break;
     }else if(p == h && p->Next != NULL){
     cout<<"   Your Linked List contains "<<p->Data<<",";
     p=p->Next;
   }if (p->Next == NULL && p->Next != h) {
     cout<<"and "<<p->Data;
     p = p->Next;
   }else{
     cout<<p->Data<<",";//Printing it out the data integer
     p=p->Next;//Pointing towards the next Node
   }
   }
}
void insert(int& user_data){
  int stop=0;
  while(stop!=-1){
  Set bob = new Node;
  cout<<"Enter the data you want in linked list: ";
  cin>>user_data;
  bob->Data=user_data;
  if(bob->Next!=NULL){
  bob->Next=h;
  h=bob;}else{
    n=h;
    while (n->Next!=bob) {
    n=n->Next=bob;
  }
   bob->Next=NULL;
 }
  cout<<"Enter -1 to end\n";
  cin>>stop;}
}

void First(){
  n = new Node;
  n->Data= 1;
  h=n;//Point towards what n is pointing too
  n->Next=NULL;
}

// void Next(){
//   n = new Node;//We have made n point towards a new Node
//   n->Data = 2;//We are setting the data in the new Node be 2
//   t->Next=n;
//   t=t->Next;
// }
//
// void NewNode(){
//   n = new Node;
//   n->Data = 3;
//   t->Next = n;
// }
//
// void Bob(){
//   n = new Node;
//   t=t->Next;
//   n->Data = 4;
//   t->Next = n;
//   n->Next = NULL;
// }
