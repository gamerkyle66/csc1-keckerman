/*  
 Circle Lab
 By: Kyle Eckerman
 CSCI 111
 Date: 9/13/2020
 
 
Algorithm steps:
1. Prompt user to enter radius of a circle and store the radius into a variable
2. Calculate area using the formula pi x radius x radius and store the value into a variable
3. Calculate circumference using the formula 2 x pi x radius and store the value into a variable
4. Output the calculated values for area and circumference
*/
 
#include <iostream> 
#include <string> 
#include <cmath> 
#include <iomanip> // library for output formatting: setprecision()
using namespace std; 
 
int main()
{
	const double pi = 3.14159;
	// variables declared and initialized
	double radius=0, area=0, circumference=0;
	string name = "Anonymous"; // variable to store user's name
	cout << "Hi there, what's your full name? ";
	getline (cin,name); // fix me 3 #fixed#
	cout << "Nice meeting you, " << name << "!" << endl;
	// display some information about this program to the user
	cout << "\nProgram finds area and circumference of a circle with the given radius.\n\n";
	cout << name << ", please enter radius of a circle: ";
	cin >> radius; 
	area = pi * pow(radius, 2); // same as pi * radius squared
    circumference = radius * 2 *  pi; // fixme 4 finding circumfrence #fixed#
	cout << "Your circle has radius: " << fixed << setprecision(6) << radius << endl;
	cout << "Area of the circle is:\t" << area << '\n';
	cout << "Circumference of the circle is: " << setprecision(6) << circumference << endl; // fix me 5 #fixed#

	// the following code may be required to make your console pause...
	cout << "Hit enter to exit the program!" << '\n';
	cout << "Good bye...\nHit enter to exit the program!" << '\n';
	cin.ignore(1000, '\n'); //ignore 1000 chars or until \n whichever comes first
	// make the console wait for user input
	cin.get();
	cout << "Good bye...\n";
	return 0;
}