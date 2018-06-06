#include<iostream>
#include<cmath>

using namespace std;

//namespace Armando{
  struct StackFrame {
    char data;
    StackFrame* next;
  };

typedef StackFrame* StackFramePtr;

class Stack{
public:
 Stack();
 //Initializes the object to an empty stack.
 Stack(const Stack& a_stack);
 //Copy constructor.
 ~Stack();
 //Destructor
 void push(char the_symbol);
 //Postcondition: the_symbol has been added to the stack.

 char pop();
 //Precondition: The stack is not empty.
 //returns the top symbol on the stack and removes that
 //top symbol from the stack.

 bool empty() const;
 //Returns true if the stack is empty. returns false if not empty
private:
  StackFramePtr top;
};

Stack::Stack() : top(NULL){
   top = NULL;
}
Stack::Stack(const Stack& a_stack)

Stack::~Stack(){
  char next;
  while(! empty())
  next = pop();//pop() calls delete
}

bool Stack::empty() const
{
  return(top == NULL);
}
void Stack::push(char the_symbol) {

}

int main(){
  Stack s;
  char next, ans;
 int end;
  do{
    cout<<"Enter a word: ";
    cin.get(next);
    while (next != '\n') {
      s.push(next);
      cin.get(next);
    }
    cout<<"Written backward that is: ";
    while (! s.empty())
      cout<<s.pop();
      cout<<endl;
      cout<<"Again?(y/n): ";
      cin>>ans;
      cin.ignore(10000, '\n');
 }while(ans != 'n' && ans != 'N');
 return 0;
}
//}
