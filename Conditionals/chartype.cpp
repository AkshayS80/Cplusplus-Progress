/*
WAP to input a character and to print whether a given character is an alphabet, digit or any characters
*/
#include <iostream>

using namespace std;

int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        cout<<"A character was entered.";
    }
    else if (ch>='0' && ch<='9'){
        cout<<"A number was entered.";
    }
    else{
        cout<<"A number or character wasn't entered";
    }
    return 0;
}