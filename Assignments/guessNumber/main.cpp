/* 
kyle Eckerman
assignment about guees number program
*/

#include<iostream>
#include<string>
#include<cstdlib>


using namespace std;

void greetPlayer();
int genNum();
bool playerGuess(int);


int main(){
bool game = true;
while (game == true){

greetPlayer();
int winNum = genNum();
game = playerGuess(winNum);

}
return 0;
}

//function to greet player
void greetPlayer(){
string name;
cout << "please enter your name and press enter" << endl;
cin >> name;
cout << "hello " << name << " welcome to my ---Guess The Number Game---" << endl;

}

//function to generate random number 1-20
int genNum(){
srand(time(0));
return (rand()% 20 + 1);
}

bool playerGuess(int winNum){
    int guess;
    char choice;
    for(int i = 6; i > 0; i --){
        cout << "you have " << i << " guesses left please enter a number between 1 - 20 then press enter" << endl;
        cin >> guess;
        if(guess < winNum){
            cout << "your guess is too low" << endl;
        }
        if(guess > winNum){
            cout << "your guess is too high" << endl;
        }
        if(guess == winNum){
            cout << "congratulations you win!" << endl;
            i = 0;
        }
    }
    cout << "would you like to play again?" << endl;
    cout << "press y to continue or n to quit" << endl;
    cin >> choice;
    if(choice == 'y'){
        return true;
    }
    if(choice == 'n'){
        return false;
    }
return true;
}