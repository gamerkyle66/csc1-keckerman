/*
    Loops Lab
    Updated By: Kyle Eckerman
    CSCI 111
    Date: 10/14/2020
    Program prints geometric shapes of given height with * using loops
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void printTriangle(int height) {
    //Function takes height as an argument to print the triangle
    //of that height with *
    int row = 1;
    // row
    while (row <= height) {
        // column
        for(int col = 1; col<=row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}


void printFlippedTriangle(int height) {

   for(int i = height; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}

// #fixed

void printSquare(int height){
    for (int row = 1; row <= height; ++row) 
    {
        for (int col = 1; col <= height; ++col) 
        {
            cout << "* ";
        }
        cout << endl;
    }
}


// function clears the screen system call
// NOTE: system call is not a security best pracice!
void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(int argc, char* argv[]) {
    bool program = true;  // #fixed
    while (program == true){
    void clearScreen();

        
    // FIXME6 # fixed
    //call clearScreen function to clear the screen for each round of the loop
    int height;
    cout << "Program prints geometric shapes of given height with *\n";
    cout << "Please enter the height of the shape: ";
    cin >> height;
    // call printTriangle function passing user entered height
    printTriangle(height);

    // FIXME7#fixed
    // Call printFlippedTriangle passing proper argument
    // Manually test the function
    printFlippedTriangle(height);
    // FIXME6#fixed
    // Call the function defined in FIXME4 passing proper argument
    // Manually test the function
    printSquare(height);
    // FIXME9 #fixed
    // prompt user to enter y/Y to continue anything else to qui #t
    char choice;
    cout << "press y/y to continue or any key to exit." << endl;
    cin >> choice;
    if (choice == 'y' || choice == 'Y'){
        program = true;
    }
    else {
        program = false;

    }
    

// # fixed
    return 0;
    
}