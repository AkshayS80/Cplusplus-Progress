// WAP that inputs a student's marks in three subjects(out of 100) and prints the percentage marks
#include <iostream>

using namespace std;

int main()
{
    float m1,m2,m3,total,per;
    cout<<"Enter the marks of three subjects: ";
    cin>>m1>>m2>>m3;
    total=(m1+m2+m3);
    per=(total/300)*100;
    cout<<"The percent is "<<per<<"%";
    return 0;
}
