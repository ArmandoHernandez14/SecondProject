//Practice Linked list
#include<iostream>

using namespace std;

  struct Node{
    int data;
    Node* next;
  };
  typedef Node* P;

P h;
P Temp;
P l;
namespace Armando{
  void insert_function(int& user_data);
}
void Delete_Node();
void First();
void Second();
void insert_function(int& user_data);
void last();
void Output();
P search_list(int target);

int main(){
 int user_data;
 First();
 Second();
 Output();
 Armando::insert_function(user_data);
// insert_function(user_data);
// last();
 Output();
 Delete_Node();
 Output();
// search_list();
  return 0;
}

void First(){
 h=new Node;//Created first Node
 h->data = 12;//Stored 12 in that Node
 h->next = NULL;//Made it point towards NULL
 Temp=h;//Made Temp point towards it
 l=h;//And l
}

void Delete_Node(){
  P before, discard;
  int target;
  discard = h;
  before= h;
  cout<<"Enter value you wish to be deleted: ";
  cin>>target;
  while (discard->data != target) {
    discard = discard->next;
  }if (before != discard) {
  while (before->next != discard) {
    before = before ->next;
  }before->next = discard->next;
 delete discard;}
 if (before == discard) {
   h= h->next;
   before= h;
   discard->next = NULL;
   delete discard;
 }
}

void Second(){
  Temp=new Node;//Temp then created a new Node
  Temp->data=14;//I then stored 14 in that node
  h->next=Temp;//I then connected the two nodes
  Temp->next=NULL;//made the node point towards NULL
  l=Temp;//Make l point towards Temp
}
namespace Armando{
  void insert_function(int& user_data){
     P temp_ptr;
     P after_me;
     temp_ptr= new Node;//Created new Node
     cout<<"Enter what you want in the middle of the Linked list: ";
     cin>> user_data;
     temp_ptr->data = user_data;//Stored the users data in the Node
    after_me=h;//Made it point towards the head
    temp_ptr->next = after_me->next;//Made it point towards what head is pointing too
    after_me->next=temp_ptr;//Made the head Node point towards the inserted Node
  }
}
void insert_function(int& user_data){
  l = new Node;
  cout<<"Enter integer to be stored: ";
  cin>>user_data;
  l->data = user_data;
  if (h == NULL) {
     h=l;
     h->next = NULL;
  }else{
  l->next= h;
  h=l;}
}
//Returns the Node of a particular target
// P search_list(int target){
// P* here;
// here= h;
// if(h != NULL){
// while (here->data != target && here->next != NULL) {
//   here=here->next;
// }
//  if(here->data == target){
//    return here;
//  }
//   else{
//     return NULL;
//   }}
//   else{
//     cout<<"Sorry, there's nothing in the list.\n";
//     return NULL;
//   }
// }

void last(){

}

void Output(){
Temp = h;//Make Temp point towards the first node
while (Temp){//While Temp, do this
  if (Temp==h && Temp->next != NULL) {
     cout<<"The elements in the linked list are "<<Temp->data<<", ";
     Temp = Temp->next;
  }if(Temp== h && Temp->next == NULL){
    cout<<"The element in the linked list is "<<Temp->data;
    break;
  }if (Temp->next == NULL && Temp != h) {
    cout<<"and "<<Temp->data<<endl;
    Temp = Temp ->next;
  }
  else{
cout<<Temp->data<<", ";//Do this
Temp = Temp->next;}//And this
}}
