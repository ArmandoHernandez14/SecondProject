//First Game
#include<iostream>
#include<conio.h>//For the input
#include<windows.h>
using namespace std;
//Global Variables
bool gameOver;
const int width = 20;//This is the maps dimension
const int height = 20;
int x,y,fruitx,fruity,score;//Arrays are for the snake's tail
int tailX[100],tailY[100];
int nTail;//It's the snake's tail
enum Direction{STOP = 0,LEFT,RIGHT,UP,DOWN};
Direction dir;

void Setup(){
gameOver = false;
dir = STOP;
x = width /2;//Makes it go to the middle
y = height /2;//Snake head would be center
fruitx = rand() % width;
fruity = rand() % height;
score = 0;
}

void Draw(){
  system("cls");//CLears the screen
  for(int i = 0;i<width+2;i++)//Displays the top border of the map
    cout<<"#";
    cout<<endl;

   for(int i = 0; i < height; i++){
     for(int j =0;j<width;j++){//Displays the middle of the map
       if(j == 0)
         cout<<"#";
       if(i == y && j == x){
         cout<<"O";
       }else if(i ==  fruity && j == fruitx){
         cout<<"F";
       }else{
         bool print = false;
         for(int k = 0;k<nTail;k++){
           if(tailX[k] == j && tailY[k] == i){
             cout<<"o";
             print = true;
           }
         }
         if(!print){
           cout<<" ";
         }
}  if(j == width-1){
           cout<<"#";
         }
       }cout<<endl;
     }

  for(int i =0;i<width+2;i++)//Displays the bottom portion of the map
      cout<<"#";
      cout<<endl;
      cout<<"Score:"<<score<<endl;
}
// w is up
//a is left, d is right, and s is down
void Input(){
if(_kbhit()){
  switch(_getch()){
    case 'a':
    dir = LEFT;
    break;
    case 'd':
    dir = RIGHT;
    break;
    case 'w':
    dir = UP;
    break;
    case 's':
    dir = DOWN;
    break;
    case 'x':
    gameOver = true;
    break;
  }
}
}

void Logic(){
  int prevX = tailX[0];
  int prevY = tailY[0];
  int prev2X,prev2Y;
  tailX[0]=x;//Makes sure the tail follows the head
  tailY[0]=y;
  for(int i =1;i<nTail;i++){
    prev2X = tailX[i];
    prev2Y = tailY[i];
    tailX[i] = prevX;
    tailY[i] = prevY;
    prevX = prev2X;
    prevY = prev2Y;
  }
switch (dir) {
  case LEFT:
  x--;
  break;
  case RIGHT:
  x++;
  break;
  case UP:
  y--;
  break;
  case DOWN:
  y++;
  break;
  default:
  break;
}
if(x>width || x<0 || y>height || y<0){
  gameOver = true;
  for(int i =0;i<nTail;i++){
    if(tailX[i] == x && tailY[i] == y){
      gameOver = true;
    }
  }
}if(x == fruitx && y == fruity){
  nTail++;
  score += 10;
  fruitx = rand() % width;
  fruity = rand() % height;
}
}

int main(){
  Setup();
  while(!gameOver){
    Draw();
    Input();
    Logic();
    Sleep(20);//Slows our game down
  }
  return 0;
}
