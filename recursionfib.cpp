#include <iostream>
using namespace std;

 int Recursive (int x);

int main () {

char resp = 'Y';
int x;


while ( resp != 'N')
{
  cout << "Enter the position in the fibbonaci sequence you wish to view. ";
  cin >> x;

Recursive(x);

cout<<Recursive(x)<<endl;

cout<<" Would you like to know any other numbers? (Y/N)";
cin >> resp;


}

  return 0;
}


int Recursive (int x)
{

if ((x == 1)||(x == 0))
    {
  return (x);
    }

  else
   {
    return(Recursive(x-1)+Recursive (x-2));
    }
}
