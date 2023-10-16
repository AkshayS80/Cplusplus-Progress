/*
WAP to input a number. If the number n is odd an positive, print its sqaure root otherwise print n^3
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num,result;
    cout<<"Enter the principal amount and time:";
    cin>>num;
    result=(num%2==1)? sqrt(num):num*num*num;
    cout<<"The result is "<<result;
}