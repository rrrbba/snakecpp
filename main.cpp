#include <iostream>
using namespace std;

bool gameOver; //global var


void Setup(){

    gameOver = false;
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
    }


    return 0;
}