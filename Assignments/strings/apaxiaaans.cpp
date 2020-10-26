#include<iostream>
#include<string>

using namespace std;

int main(){
    string name;
    
    cin >> name;
    char prev = ' ';
    for(int i = 0; i < name.length();i++){
        if(name[i] != prev){
            cout << name[i];
            prev = name[i];
        }
    }
    cout << endl;
return 0;

    
    }