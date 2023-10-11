// WAP to find the largest of two numbers
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    if(a>b){
        cout<<a<<" is the largest number";
    }
    else{
        cout<<b<<" is the largest number";
    }
    return 0;
}