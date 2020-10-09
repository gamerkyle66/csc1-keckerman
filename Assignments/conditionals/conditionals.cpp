//Kyle Eckerman
// conditionals homework
// 10 / 8 / 2020

#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>
 
using namespace std;

float findSum(const float &, const float &, const float&, const float&, const float&);

float findProduct(const float &, const float &, const float&, const float&, const float&);

float findAverage(const float &, const float &, const float&, const float&, const float&);

float findLargest(const float &, const float &, const float&, const float&, const float&);

float findSmallest(const float &, const float &, const float&, const float&, const float&);

void getfivenums(float &, float &, float &, float &, float &);

void test();

int main(int argc, char* argv[]){
    
    if(argc == 2 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS); // exit the program

    }
bool program = true;
int choice;
float num1, num2, num3, num4, num5;
while (program = true){
    cout << "Hello please select what you would like to do\n";
    cout << "[1] find sum of 5 numbers\n";
    cout << "[2] find product of 5 numbers\n";
    cout << "[3] find average of 5 numbers\n";
    cout << "[4]find the largest of 5 numbers\n";
    cout << "[5]find the smallest of 5 numbers\n";
    cout << "[6] exit the program\n";
    cout << "please enter your choice 1-5 \n";

    cin >> choice;



    switch(choice){
        case 1:{
            getfivenums(num1, num2, num3, num4, num5);
            float sum = findSum(num1, num2, num3, num4, num5);
            cout << "The sum of " << num1 << "," << num2 << "," << num3 << "," << num4 << "," << num5 << " is " << sum << endl;
            break;

        }
        case 2:{
            getfivenums(num1, num2, num3, num4, num5);
            float product = findProduct(num1, num2, num3, num4, num5);
            cout << "The product of " << num1 << "," << num2 << "," << num3 << "," << num4 << "," << num5 << " is " << product << endl;
            break;
        }
        case 3:{
            getfivenums(num1, num2, num3, num4, num5);
            float average = findAverage(num1, num2, num3, num4, num5);
            cout << "The average of " << num1 << "," << num2 << "," << num3 << "," << num4 << "," << num5 << " is " << average << endl;
            break;

        }
        case 4:{
            getfivenums(num1, num2, num3, num4, num5);
            float largest = findLargest(num1, num2, num3, num4, num5);
            cout << "The largest of " << num1 << "," << num2 << "," << num3 << "," << num4 << "," << num5 << " is " << largest << endl;
            break;

        }
        case 5:{
            getfivenums(num1, num2, num3, num4, num5);
            float smallest = findSmallest(num1, num2, num3, num4, num5);
            cout << "The smallest of " << num1 << "," << num2 << "," << num3 << "," << num4 << "," << num5 << " is " << smallest << endl;
            break;
        }
        case 6:{
            return false;
            
        }
        

    
    }
}
return 0;
}

void getfivenums(float &n1, float &n2, float &n3, float &n4, float &n5){
    cout << "enter five numbers seperated by a space\n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
}

float findSum(const float &n1, const float &n2, const float &n3, const float &n4, const float &n5){
    return(n1 + n2 + n3 + n4 + n5);
}
float findProduct(const float &n1, const float &n2, const float &n3, const float &n4, const float &n5){
    return(n1 * n2 * n3 * n4 * n5);
}
float findAverage(const float &n1, const float &n2, const float &n3, const float &n4, const float &n5){
    return (findSum(n1, n2, n3, n4, n5) / 5);
}
float findSmallest(const float &n1, const float &n2, const float &n3, const float &n4, const float &n5){
    if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5){
        return n1;
    }
    else if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5){
        return n2;
    }
    else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5){
        return n3;
    }
    else if(n4 < n1 && n4 < n2 && n4 < n3 && n4< n5){
        return n4;
    }
    else if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4){
        return n5;
    }
    return 0;
}
float findLargest(const float &n1, const float &n2, const float &n3, const float &n4, const float &n5){
     if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
        return n1;
    }
    else if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
        return n2;
    }
    else if(n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
        return n3;
    }
    else if(n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5){
        return n4;
    }
    else if(n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4){
        return n5;
    }
    return 0;

}
void test() {
    float result = findSum(10, 12.5, 5, 3, 1);
    float expected = 31.5;
    assert(result == expected); 
    assert(findSum(2, 9, 3, 1, 10) == 25); 

    float result2 = findProduct(5, 6, 2, 8, 9);
    float expected2 = 4320;
    assert(result2 == expected2);
    assert(findProduct(5, 10, 34, 2, 8) == 27200);

    float result3 = findLargest(10, 4, 50, 321, 67);
    float expected3 = 321;
    assert(result3 == expected3);    
    assert(findLargest(22, 67, 89, 3, 211) == 211);

    float result4 = findSmallest(5, 1, .4, .1, 56);
    float expected4 = .1;
    assert(result4 == expected4);
    assert (findSmallest(.5, .8, 5, 8, 10) == .5);

    float result6 = findAverage(10, 67, 90, 100, 23);
    float expected6 = 58;
    assert(result6 == expected6);
    assert(findAverage(10, 20, 30, 40, 50) == 30);

    cout << "all test passed... " << endl;
}


