// WAP to find the sum of n numbers
#include <iostream>

using namespace std;

int main(){
    int i,num,sum,b,max;
    cout<<"Enter the last number in the series:";
    cin>>num;
    sum=0;
    for(i=0;i<num;i++){
        sum=sum+i;
    }
    cout<<"The sum is "<<sum;
    return 0;
}