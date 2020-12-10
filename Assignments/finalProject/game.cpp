
#include "game.h"

using namespace std;

//function to print the board
void printBoard(char board[3][3]){
  
    cout<<"     |     |     \n";
    cout<<"  "<<board[0][0]<<"  | "<<board[0][1]<<"   |  "<<board[0][2]<<" \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<board[1][0]<<"  | "<<board[1][1]<<"   |  "<<board[1][2]<<" \n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<"  "<<board[2][0]<<"  | "<<board[2][1]<<"   |  "<<board[2][2]<<" \n";
    cout<<"     |     |     \n";
    
    }
// function for players turn and simulate computer turn
char playerTurn(char turn ,char board[3][3]){
    int choice, row, column;
    if(turn == 'X'){
    cout << "Please enter the number of the spot to place your x." << endl;
    cin >> choice;
    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"invalid move" << endl;
    }
    if(board[row][column] != 'X' && board[row][column] != 'O'){
        board[row][column] = 'X';
        printBoard(board);
        return 'Y';
        }
    else{
        cout << "This spot has been taken please choose another" << endl;
        return 'X';
    }
    }

    if(turn = 'O'){
         int row, column, choice;
    srand(time(0));
    choice = rand()% 9 + 1;
        switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        }
if(board[row][column] != 'X' && board[row][column] != 'O'){
        board[row][column] = 'O';
    printBoard(board);
    return 'X';
}
else{
    return 'O';
}

}
return 'X';
    }
    



   
// function to check for victory
bool checkVic(char board[3][3]){
    for(int i=0; i<3; i++){
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i]){
        if(board[i][0] == 'X' || board[0][i] == 'X' ){
            cout << "you won" << endl;
        }
        if(board[i][0] == 'O' || board[0][i] == 'O' ){
            cout << "you loss" << endl;
    }
    return true;
    }
    }
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0]){
        if(board[0][0] == 'X'){
            cout << "you won" << endl;
        }
        if(board[0][0] == 'O'){
            cout << "you lose" << endl;
        }
        return true;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
             if(board[i][j] != 'X' && board[i][j] != 'O'){
                 return false;
             }
        }
    }
    return false;
}

//function to keep game going or to quit game
bool keepPlaying(char board [3][3]){
    char choice;
    printBoard(board);
    cout << "would you like to play tic tac toe? enter y to play  and n to quit.." << endl;
    cin >> choice;
    if(choice == 'y'){
        return true;
   }
   if(choice == 'n'){
       return false;
   }
   return true;
}