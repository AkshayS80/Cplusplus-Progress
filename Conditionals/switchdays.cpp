//WAP to find whether a year is leap year or not
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter a number between 1 and 7:";
    cin>>num;
    switch(num){
        case 1:
            cout<<"The day is monday.";
            break;
        case 2:
            cout<<"The day is tuesday.";
            break;
        case 3:
            cout<<"The day is wednesday.";
            break;
        case 4:
            cout<<"The day is thrusday.";
            break;
        case 5:
            cout<<"The day is friday.";
            break;
        case 6:
            cout<<"The day is saturday.";
            break;
        case 7:
            cout<<"The day is Sunday.";
            break;
        default:
            cout<<"This is not a day";
            break;
    }
    return 0;
}