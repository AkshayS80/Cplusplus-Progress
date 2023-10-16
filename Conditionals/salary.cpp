/*
WAP that inputs experience and age of a person. The salary of the person is 6000
if the person is experienced and his age is more than 35, otherwise if the person 
is experienced and his age is more than 28 but less than 35 then the salary should
be 4800 otherwise for experienced person the salary should be 3000 and for inexperienced
person the salary should be 2000
*/

#include <iostream>

using namespace std;

int main()
{
    int ex,age,salary;
    cout<<"Is the person experienced?\n"<<"If yes,1....else,0\n";
    cin>>ex;
    cout<<"Enter the age of the person:";
    cin>>age;
    salary=(ex)?(age>35?6000:(age>28)?4800:3000):2000;
    cout<<"The salary is "<<salary<<"\n";
    return 0;
}
