// WAP to find whether a number is prime or not.
#include <iostream>

using namespace std;

int main(){
    int i,num,flag;
    cout<<"Enter the number:";
    cin>>num;
    for(i=2;i<num;i++){
        if(num%i==0){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if (flag==1){
        cout<<num<<" is not prime";
    }
    else{
        cout<<num<<" is prime";
    }
    return 0;
}