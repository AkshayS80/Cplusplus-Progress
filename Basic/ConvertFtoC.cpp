// WAP to swap two variables with a 3rd var
#include <iostream>

using namespace std;

int main(){
    int f,c;
    cout<<"Enter the farenheit temperature:";
    cin>>f;
    c=(32-f)*5/9;
    cout<<"The Celsius temp for ";
    cout<<f;
    cout<<" is ";
    cout<<c;
    return 0;
}
