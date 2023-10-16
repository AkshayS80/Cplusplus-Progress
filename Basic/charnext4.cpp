//WAP that accepts a character between a to j and prints next 4 characters
// WAP to also use setw and setprecision
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<setw(6)<<"R"<<"\n";
    
    cout<<setw(8)<<"666666"<<"\n";
    
    cout<<setprecision(5)<<123.456<<"\n";
    
    char ch,ch1,ch2,ch3,ch4;
    cout<<"Enter a character between A and V:";
    cin>>ch;
    int num=ch;
    ch1=ch+1;
    ch2=ch+2;
    ch3=ch+3;
    ch4=ch+4;
    cout<<"\nThe next few characters are:";
    cout<<"\n"<<ch1<<"\n"<<ch2<<"\n"<<ch3<<"\n"<<ch4<<"\n";
    return 0;
}
