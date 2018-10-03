#include<iostream>
#include<cmath>
#include<cstring>
//Still not complete
using namespace std;

struct Node{
  int data;
  Node* left_side;
  Node* right_side;
};

typedef Node* node;
node search;
node Temp;

class Tree{
public:
Tree(){
  root = NULL;
  Temp = root;
  search = NULL;
}
void insert(int test);
void remove(int target);
void print(node x);
private:
  void AddNodePrivate(int user_data);
  void privateprint(node Ptr);
  node root;
};

void Tree::insert(int user_data){
  AddNodePrivate(user_data);
}

void Tree::AddNodePrivate(int user_data){
  if(root == NULL){
  root = new Node;
  root->data = user_data;
  root->left_side=NULL;
  root->right_side=NULL;
  Temp = root;
}else{
  if(user_data>(*Temp).data){//Make Temp point to the root, to make this if statement
   if(Temp->right_side == NULL){
    search = new Node;//complete
    search->data = user_data;
    search->left_side = NULL;
    search->right_side = NULL;
    Temp->right_side = search;
    Temp = root;//Makes Temp point back to the start of the Binary Search Tree
  }else{
    Temp = Temp->right_side;
    AddNodePrivate(user_data);
  }
}else if(user_data<(*Temp).data){//Checks if user_data is less than the
   if(Temp->left_side == NULL){//Node->data
    search = new Node;
    search->data = user_data;
     (*search).left_side = NULL;
     (*search).right_side = NULL;
     Temp->left_side = search;
     Temp = root;
   }else{
     Temp = Temp->left_side;
     AddNodePrivate(user_data);
   }}
else{//Checks if user_data is equal to (*Node).data
  cout<<"Already contain that integer\n";
  Temp = root;
  }
}
}

void Tree::print(node x){
  x = root;
  privateprint(x);
}

void Tree::privateprint(node Ptr){
  if(Ptr == NULL){cout<<"Nothing in Binary Tree!"<<endl;}//If the Binary Tree is empty
  else{
    if(Ptr->left_side == NULL && Ptr->right_side == NULL && Ptr == root){
      cout<<(*Ptr).data<<endl;
    }else if(Ptr->left_side != NULL){
      Ptr=Ptr->left_side;
      privateprint(Ptr);
      if(Ptr->right_side != NULL){
        Ptr=Ptr->right_side;
        privateprint(Ptr);
      }
    }else if(Ptr->right_side != NULL){
      Ptr=Ptr->right_side;
      privateprint(Ptr);
      if(Ptr->left_side != NULL){
        Ptr=Ptr->left_side;
        privateprint(Ptr);
      }
    } cout<<(*Ptr).data<<endl;
  }
//   if(Ptr->left_side == NULL && Ptr->right_side == NULL){//Step 2
//     //If the Binary Tree only contains one Node
//     if(Ptr==root){
//       cout<<(*Ptr).data<<endl;
//     }
//   }else{
//        if(Ptr->left_side != NULL){//Step 1
//          Ptr=(*Ptr).left_side;//Go to the left
//          privateprint(Ptr);//Then call itself
//          cout<<(*Ptr).data<<endl;//Then later, print the data in the node
//          if(Ptr->right_side != NULL){
//            Ptr=(*Ptr).right_side;
//            privateprint(Ptr);
//            cout<<Ptr->data<<endl;
//          }
//        }if(Ptr->right_side != NULL){//Step 3
//          Ptr = (*Ptr).right_side;
//          privateprint(Ptr);
//          cout<<Ptr->data<<endl;
//        }
}

int main(){
   Tree a;
   a.insert(5);
   a.insert(4);
   a.insert(2);
   a.print(search);
  return 0;
}
