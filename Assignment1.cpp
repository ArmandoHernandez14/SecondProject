//Link List
#include<iostream>
#include<string>
using namespace std;

struct node{//Created Node
int DrHernandez;//Created an integer named Brett, that has the value 27
string pizza;
node *next;//We created a pointer, that is going to be able to point towards another node
};

// node* DrHernandez{
//   node *p;
//   p=new node;
//   p->DrHernandez=15;
//   p *next;
// }
typedef node* DrHernandez;

void head_insert(DrHernandez& head, int p);

void head_insert(DrHernandez& head, int p){
  DrHernandez second;
  second=new node;
  second->DrHernandez=p;
  second->pizza="HELLO WORLD!!!!"
  second->next=head;
  head=second;
}

int main(){
DrHernandez head;
head=new node;
head->DrHernandez=18;
head->pizza="Wilbur's brother Orville";
cout<<(*head).DrHernandez<<endl;
cout<<head->DrHernandez<<endl;
cout<<(*head).pizza<<endl;
cout<<head->pizza<<endl;
head=NULL;
  return 0;
}
