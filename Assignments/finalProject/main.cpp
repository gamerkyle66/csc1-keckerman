/*
Kyle Eckerman
Final project - tic tac toe
csc111
*/

#include<iostream>
#include<vector>
#include "game.h"
#include "game.cpp"

using namespace std;


int main(){
//initialize the board
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';

//main game loop
while(keepPlaying(board) == true){
while(checkVic(board)== false){

turn =playerTurn(turn, board);

}
}









return 0;

}