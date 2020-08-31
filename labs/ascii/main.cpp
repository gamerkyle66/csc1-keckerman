
//ASCII Lab
  //  ASCII Art and Standard Ouput
    
    //Update/d By: Kyle Eckerman #FIXME1
    //Date: 8/27/20  #FIXME2

#include <iostream>
#include <string>

using namespace std;

int main(){

string name; // variable for user to input name

cout << "Hello there, what is your full name?";
getline(cin,name);
cout << "nice meeting you," << name << "!" << endl;
cout << "Hope you like my ascii art...\n";

cout << "  |\\_/|   ************************   (\\_/)" << endl;
cout << " / @ @ \\  *        lab 1         *  (=\'.\'=)" << endl;
cout << "(> 0 < )  *By: <Kyle Eckerman>    *( "" )_( "" ) " << endl; //fixme 1
cout << "  >>x<<   *        CSCI 111       *" << endl; // fixme 2
cout << " /  0 \\    **********************" << endl; // fixme 3
cout << "Hit enter to exit the program!" << '\n';
cin.get();
    cout << "Good bye...\n";
return 0;
}
