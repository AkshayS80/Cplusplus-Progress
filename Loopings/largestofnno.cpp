// WAP to find the largest of n numbers
#include <iostream>

using namespace std;

int main(){
    int i,num,a,b,max;
    cout<<"Enter the number of numbers:";
    cin>>num;
    cout<<"Enter the first number:";
    cin>>a;
    max=a;
    for(i=0;i<num;i++){
        cout<<"Enter the next number:";
        cin>>b;
        if (b>a){
            max=b;
        }
        else{
            max=a;
        }
    }
    cout<<"The largest number is "<<max;
    return 0;
}