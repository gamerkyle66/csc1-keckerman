#include<iostream>
#include<cmath>
#include<cstdio>
#include<cassert>
using namespace std;

float findSum(const float & , const float &);
float findProduct(const float & , const float &);
float findQuo(const float & , const float &);
float findDiff(const float & , const float &);
float findRem(const float & , const float &);
float findExp(const float & , const float &);
float findSqrt(const float &);
void test();

int main(int argc, char* argv[]){
 if(argc == 2 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS); // exit the program

    }


    float num1, num2;
    cout << "hello please enter a number" << endl;
    cin >> num1;
    cout << "enter 1 more number and i will compute some math" << endl;
    cin >> num2;
    cout << " the sum is "<< findSum(num1, num2) << endl;
    cout << " the product is " << findProduct(num1, num2) << endl;
    cout << " the quotient is " << findQuo(num1, num2) << endl;
    cout << " the difference is " << findDiff(num1, num2) << endl;
    cout << " the remainder is " << findRem(num1, num2) << endl;
    cout << num1 << " to the power of " << num2 << " is " << findExp(num1, num2) << endl;
    cout << " the square root of " << num1 << " is " << findSqrt(num1) << endl;

    return 0;

}

float findSum(float const &n1, float const &n2){
    return (n1 + n2);
}
float findProduct(float const &n1, float const &n2){
    return (n1 * n2);
}
float findQuo(float const &n1, float const &n2){
    return (n1 / n2);
}
float findDiff(float const &n1, float const &n2){
    return (n1 - n2);
}
float findRem(float const &n1, float const &n2){
    return (fmod(n1, n2));
}
float findExp(float const &n1, float const &n2){
    return (pow(n1, n2));
}
float findSqrt(float const &n1){
    return (sqrt(n1));

}
void test(){
    float result = findSum(11, 13);
    float expected = 24;
    assert(result == expected); 
    assert(findSum(2, 9) == 11);

    float result1 = findProduct(10, 20);
    float expected1 = 200;
    assert(result1 == expected1);
    assert(findProduct(5, 3) == 15);

    float result2 = findQuo(50, 5);
    float expected2 = 10;
    assert(result2 == expected2);
    assert(findQuo(100 , 10) == 10);

    float result3 = findDiff(57, 32);
    float expected3 = 25;
    assert(result3 == expected3);
    assert(findDiff(856 , 100) == 756);

    float result4 = findRem(70, 9);
    float expected4 = 7;
    assert(result4 == expected4);
    assert(findRem(82, 5) == 2);

    float result5 = findExp(2,3);
    float expected5 = 8;
    assert(result5 == expected5);
    assert(findExp(5, 2) == 25);

    float result6 = findSqrt(9);
    float expected6 = 3;
    assert(result6 == expected6);
    assert(findSqrt(16) == 4); 
}