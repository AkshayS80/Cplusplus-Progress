// WAP to swap two variables with a 3rd var
#include <iostream>

using namespace std;

int main(){
    int a,b,temp;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Before swapping, the numbers are:\n";
    cout<<a;
    cout<<" ";
    cout<<b;
    cout<<"\n";
    temp=a;
    a=b;
    b=temp;
    cout<<"\n";
    cout<<"After swapping, the numbers are:\n";
    cout<<a;
    cout<<" ";
    cout<<b;
    return 0;
}
