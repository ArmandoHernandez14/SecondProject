#include <iostream>

using namespace std;
 int count=4;
int main(){
 int XBOXONEKNIGHT[4][4]={{12,13,14,15},{9,8,7,6},{6,7,12,13},{2,3,4,5}};
 int count=4;
 for (size_t i = 0; i < count; i++) {
      for (size_t column = 0; column < ::count; column++) {
        cout<<XBOXONEKNIGHT[i][column]<<" ";
      }
      cout<<endl;
 }
  return 0;
}
