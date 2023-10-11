/*
WAP to input elec unit charges and calculate total elec bill based on the condition

First 50 --> ₹1 per unit
Next 100 --> ₹2 per unit
Next 100 --> ₹3 per unit
Above 250 --> ₹4 per unit
*/ 
#include <iostream>

using namespace std;

int main()
{
    int unit,total;
    cout<<"Enter a number of units:";
    cin>>unit;
    if(unit<50){
        total=unit*1;
        cout<<"Total="<<total;
    }
    else if(unit>50&&unit<150){
        total=(unit-50)*2+50;
        cout<<"Total="<<total;
    }
    else if(unit>=150 && unit<=250){
        total=(unit-150)*3+(100*2)+50;
        cout<<"Total="<<total;
    }
    else{
        total=(unit-250)*4+(100*3)+(100*2)+50;
        cout<<"Total="<<total;
    }
    return 0;
}