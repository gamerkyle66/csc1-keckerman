//kyle Eckerman
// 11 - 9 - 2020
// program for falling apart kattis problem

#include<iostream>
#include<cassert>
void sort(int *, int);
int dividea(int *, int);
int divideb(int *, int);
void test();
using namespace std;

int main(int argc, char* argv[]){
   
      if(argc == 2 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS); // exit the program
    }
    else{
    
    int pieces;
    cin >> pieces;
    int values [pieces];
    
    for(int i =0; i < pieces; i++){
        cin >> values[i];
    
    }
    sort(values, pieces);
    cout << dividea(values, pieces) << " ";
    cout << divideb(values, pieces);

    
    }
return 0;
}


void sort(int values[], int pieces){
    for(int i = 0; i < pieces ; i++){

    
    for(int j = 0; j < pieces - i -1; j++){
        if(values[j] < values[j+1]){
            swap(values[j], values[j+1]);
        
        }
    }

    }
}

int dividea(int values[], int pieces){
    int a = 0;
        for(int i = 0; i < pieces; i++){
        if (i % 2 == 0){
            a = a + values[i];
            
        }
        
    }
    return a;
}
int divideb(int values[], int pieces){
    int b = 0;
    for(int i = 0; i < pieces; i++){
     if(i % 2 != 0){
            b = b + values[i];
            
        }
    }
    return b;
}

void test(){
    int num [4] {8, 6, 5, 4};
    int expected = 13;
   int result = dividea(num, 4);
    assert(result == expected);
    int num2 [6] {10, 9, 5, 4, 3, 2};
    int expected2 = 15;
    int result2 = divideb(num2, 6);
    assert(result2 == expected2);
    int num3 [3]{17, 11, 8};
    int expected3 = 25;
    int result3 = dividea(num3, 3);
    assert(result3 == expected3);


}