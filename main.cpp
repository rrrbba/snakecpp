#include <iostream>
using namespace std;

//global var
bool gameOver; 
const int width = 20; //map dimensions
const int height = 20; //map dimensions
int x, y, fruitX, fruitY, score; // x and y are head position
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup(){

    gameOver = false;
    dir = STOP; //snake won't start moving until a button is pressed
    x = width / 2;
    y = height / 2; //snake head is centered on map
    fruitX = rand() % width; //random position from 0 - width - 1
    fruitY = rand() % height;
    score = 0;
}

void Draw(){
    
}

void Input(){

}

void Logic(){

}

int main(){

    Setup();
    while(!gameOver){
        Draw();
        Input();
        Logic();

        //Sleep(10)    
    }


    return 0;
}