// WAP to display ASCII code of a character and vice versa
#include <iostream>

using namespace std;

int main()
{
    char ch='A';
    int num=ch;
    cout<<"The ASCII code for "<<ch<<" is "<<num<<"\n";
    
    ch=ch+1;
    num=ch;
    
    cout<<"The ASCII code for "<<ch<<" is "<<num<<"\n";
}
