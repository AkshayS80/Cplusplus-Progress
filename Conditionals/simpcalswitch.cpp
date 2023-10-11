//WAP to create a simple calculator using switch 
#include <iostream>

using namespace std;

int main()
{
    int num,a,b,result;
    cout<<"Switch calculator operations\n";
    cout<<"1.Addition\n";
    cout<<"2.Subraction\n";
    cout<<"3.Multiplication\n";
    cout<<"4.Division\n";
    cout<<"Enter a number:";
    cin>>num;
    switch(num){
        case 1:
            cout<<"Enter the first number:";
            cin>>a;
            cout<<"Enter the second number:";
            cin>>b;
            result=a+b;
            cout<<"The result is "<<result;
            break;
        case 2:
            cout<<"Enter the first number:";
            cin>>a;
            cout<<"Enter the second number:";
            cin>>b;
            result=a-b;
            cout<<"The result is "<<result;
            break;
        case 3:
            cout<<"Enter the first number:";
            cin>>a;
            cout<<"Enter the second number:";
            cin>>b;
            result=a*b;
            cout<<"The result is "<<result;
            break;
        case 4:
            cout<<"Enter the first number:";
            cin>>a;
            cout<<"Enter the second number:";
            cin>>b;
            result=a/b;
            cout<<"The result is "<<result;
            break;
        default:
            cout<<"This is not a valid number";
            break;
    }
    return 0;
}