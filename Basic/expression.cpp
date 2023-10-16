/*
WAP to determine the value of the expression:2-ye^2y+4^y. Obtain value from the user
*/

#include <iostream>

using namespace std;

int main()
{
    const double e=2.71828;
    double result,y;
    cout<<"Enter a value";
    cin>>y;
    result=2-y*exp(2*y)+pow(4,y);
    cout<<"The result of the experession is:"<<result;
    return 0;
}
