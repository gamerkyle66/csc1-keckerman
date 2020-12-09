/*
Conditional Lab
Kyle Eckerman 
10 /7 /2020
Program finds statistical values of two given numbers using user-defined functions.
It's menu-driven program that demonstrates user-defined functions, automated testing conditional statements and loops
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>
 
using namespace std;
 
// function prototypes

// function prints menu options
void printMenu(void);
 
// function that prompts user to enter two numbers
// the numbers are stored in the parameters provided
void getTwoNumbers(double &, double &);
 
// function takes two numbers; finds and returns the sum of the two
double findSum(const double &, const double &);
 
// function takes two numbers; finds and returns the 2nd subtracted from the first
double findDifference(const double &, const double &);
 
// function takes two numbers; finds and returns the product of them
double findProduct(const double &, const double &);
 
// function takes two numbers; finds; returns the quotient of first divided by the second
double findQuotient(const double &, const double &);
 
// function takes two numbers; finds and returns the average of the two
double findAverage(const double &, const double &);
 
// function takes two numbers; finds and returns the larger of the two
double findLarger(const double &, const double &);
 
// function takes two numbers; finds and returns the smaller of the two
double findSmaller(const double &, const double &);
 
void test();

bool program();

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
    
    bool keepRunning = true;
    if(argc == 2 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS); // exit the program
    }
    else {
        // this loop will keep the program running until user wants to quit
        while (true) {
            if (!program()) // call program
                break; // break loop if program returned false
            cin.ignore(100, '\n');
            cout << "Enter to continue...";
            cin.get();
            clearScreen();
        }
    }
    cin.ignore(100, '\n');
    cout << "Enter to quit the program.\n";
    cout << "Good bye..." << endl;
    cin.get();
    return 0;
}

void printMenu(void) {
    cout << "Menu options:\n";
    cout << "[1] Add two numbers\n";
    cout << "[2] Subtract two numbers\n";
    cout << "[3] Multiply two numbers\n";
    cout << "[4] Divide two numbers\n";
    cout << "[5] Find larger of two numbers\n";
    cout << "[6] Find smaller of two numbers\n";
    cout << "[7] Find average of two numbers\n";
    cout << "[8] Quit the program\n";
    cout << "Enter one of the menu options [1-8]: ";
}

void getTwoNumbers(double &n1, double &n2) {
    cout << "Enter two numbers separated by a space: ";
    cin >> n1 >> n2;
}

double findSum(const double &n1, const double &n2) {
    return (n1 + n2);
}

double findDifference(const double &n1, const double &n2) {
    return (n1 - n2); //#fixed
    }

double findProduct(const double &n1, const double &n2) {
    return (n1 * n2);//#Fixed
     
}

double findAverage(const double &n1, const double &n2) {
    
     double sum = findSum(n1 , n2);
     return (sum / 2); //#fixed
    //fixed
}   

double findLarger(const double &n1, const double &n2) {
    //find the larger of n1 and n2 and return it
    double larger = (n1 >= n2) ? n1 : n2;
    return larger;
}

double findSmaller(const double &n1, const double &n2) {
    if (n1 - n2 < 0) {
        return n1;
        }
        else {
            return n2;
            }//#fixed
    
}

double findQuotient(const double &n1, const double &n2) {
    return (n1 / n2);//#fixed
    
}

// functions to run automated testing for various user-defined functions
void test() {
    double result = findSum(10, 12.5);
    double expected = 22.5;
    assert(result == expected); // test case 1
    assert(findSum(-5, 10.5) == 5.5); // test case 2

    double result1 = findDifference(20 , 10.5);
    double expected1 = 9.5;
    assert(result1 == expected1);
    assert(findDifference(30 , 15.2) == 14.8);

    double result2 = findProduct(5 , 6);
    double expected2 = 30;
    assert(result2 == expected2);
    assert(findProduct(-3 , 5) == -15);

    double result3 = findLarger(10 , 20);
    double expected3 = 20;
    assert(result3 == expected3);    
    assert(findLarger(20 , 50.5) == 50.5);

    double result4 = findSmaller(4 , 1);
    double expected4 = 1;
    assert(result4 == expected4);
    assert (findSmaller(7.1 , 7.9) == 7.1);

    double result5 = findQuotient(20 , 10);
    double expected5 = 2;
    assert(result5 == expected5);
    assert(findQuotient(100 , 10) == 10);

    double result6 = findAverage(40 , 60 );
    double expected6 = 50;
    assert(result6 == expected6);
    assert(findAverage(100 , 50) == 75);

    //#fixed
    // findDifference(), findProduct(), findLarger(),
    // findSmaller(), findQuotient(), findAverage()
    printf("%s\n", "all test cases passed...");
}

// the crux of the program that uses all the defined functions
// the program is menu driven
bool program() {
    int option = 1; // variable to store user entered option
    double num1=0, num2=0; // variables to store two numbers entered by user
    // display menu options
    printMenu();
    // Input validation
    do {
        if (cin >> option && option >= 1 && option <= 8) {
            //input is valid, break loop
            break;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 8" << endl;
        }
    } while (true);
            
    // Call the function(s) or perform some operations based on user input
    switch(option) {
        case 1:
        {
            // get two numbers and store them into num1 and num2 using function
            getTwoNumbers(num1, num2);
            // call findSum function; store the returned value in sum variable
            double sum = findSum(num1, num2);
            // display the result with proper description
            printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
            break;
        }
        case 2:
        {
            //fixed
            getTwoNumbers(num1, num2);
            //#fixed
            double difference = findDifference(num1 , num2);
            printf("%.2f - %.2f = %.2f\n" , num1, num2, difference);
            break;
        }
        case 3:
        {
            //#fixed
            getTwoNumbers(num1, num2);

            double product = findProduct(num1, num2);
            printf("%.2f X %.2f = %.2f\n" , num1, num2, product);
            break;
        }
        
        // #fixed
        case 4:
        {
            getTwoNumbers(num1, num2);

            double quotient = findQuotient(num1, num2);
            printf("%.2f / %.2f = %.2f\n", num1 ,num2 , quotient);
            break;
        }
        case 5:
        {
            // get two numbers
            getTwoNumbers(num1, num2);
            // find the larger of the two numbers
            double max = findLarger(num1, num2);
            // print the result
            printf("larger between %.2f & %.2f is %.2f\n", num1, num2, max);
            break;
        }
        case 6:
        {
            getTwoNumbers(num1 , num2);

            double min = findSmaller(num1, num2);

            printf("smaller between %.2f & %.2f is %.2f\n", num1, num2, min);
            break;

        }
        case 7:
        {
            
            getTwoNumbers(num1, num2);
           double avg = findAverage(num1 , num2);
            printf("average of %.2f & %.2f is %.2f\n", num1 , num2 , avg);
            break;



    
        }
        default: // must be option 8
            return false; // exit the program
    }
    return true;
}