// WAP to find out whether a citizen is eligible to vote
#include <iostream>

using namespace std;

int main()
{
    char age;
    cout<<"Enter the age:";
    cin>>age;
    if(age>18){
        cout<<"The citizen is eligible to vote";
    }
    else{
        cout<<"The citizen is not eligible to vote";
    }
    return 0;
}