#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

float findSum(const float & , const float &);
float findProduct(const float & , const float &);
float findQuo(const float & , const float &);
float findDiff(const float & , const float &);
float findRem(const float & , const float &);
float findExp(const float & , const float &);
float findSqrt(const float &);


int main(){
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

float findSum(float &n1, float &n2){
    return (n1 + n2);
}
float findProduct(float &n1, float &n2){
    return (n1 * n2);
}
float findQuo(float &n1, float &n2){
    return (n1 / n2);
}
float findDiff(float &n1, float &n2){
    return (n1 - n2);
}
float findRem(float &n1, float &n2){
    return (fmod(n1, n2));
}
float findExp(float &n1, float &n2){
    return (pow(n1, n2));
}
float findSqrt(float &n1){
    return (sqrt(n1));

}