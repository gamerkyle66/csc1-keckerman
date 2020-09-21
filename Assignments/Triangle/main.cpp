/*  
 Triangle math assignment
 By: Kyle Eckerman
 CSCI 111
 Date: 9/20/2020
 */

 #include <iostream> 
#include <string> 
#include <cmath> 

using namespace std; 

int main()
{
    string name = "anon";
    double side1 = 0, side2 = 0, side3 = 0, s = 0;
    double area = 0, perimeter = 0;
    cout << "Hello there what is your name?" << endl;
    getline(cin,name);
    cout << "Nice to meet you " << name << endl;
    cout << "This program finds the area and perimeter of a triangle" << endl;
    cout << "Please enter the length of side 1"<< endl;
    cin >> side1;
    cout <<"please enter the length of side 2" <<endl;
    cin >> side2;
    cout << "please enter the length of side 3" << endl;
    cin >> side3;
    perimeter = side1 + side2 + side3;
    s = perimeter/2;

    area = sqrt(s*(s - side1)*(s - side2)*(s - side3));
    cout << "The area of your triangle is " << area << endl;
    cout << "The perimeter of your triangle is " << perimeter << endl;
    cout << "Hit enter to exit the program!" << '\n';
	cout << "Good bye...\nHit enter to exit the program!" << '\n';
	cin.ignore(1000, '\n'); //ignore 1000 chars or until \n whichever comes first
	// make the console wait for user input
	cin.get();
	cout << "Good bye...\n";
	return 0;
}