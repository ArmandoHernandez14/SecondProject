#include <iostream>
using namespace std;


 int Recursive (int fib);
 // y will be amount of values that will be displayed


int main () {

cout << " " << '\n';

int ans;
ans = Recursive(2);
 cout << ans << endl;

cout << " " << '\n';

  return 0;
  }


 int Recursive (int counter) {
int fib = 1;

int internal_counter = 0;

if (counter == internal_counter) {return 1;}

if ( fib == 0) { fib + 1; }

  else { return fib + Recursive (fib-- ); internal_counter + 1;}
}
