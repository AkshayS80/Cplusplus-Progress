// WAP to calculate the factorial of a number
#include <iostream>

using namespace std;

int main(){
    int i,num,f;
    cout<<"Enter the number:";
    cin>>num;
    f=1;
    for(i=1;i<=10;i++){
        f=f*i;
    }
    cout<<"The factorial of "<<num<<" is "<<f;
    return 0;
}