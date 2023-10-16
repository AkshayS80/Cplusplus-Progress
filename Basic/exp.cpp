//WAP to input principal amount and time. If time is more than 10 years, calculate the simple interest with the rate 8%. Otherwise calculate it with 12% per annum

#include <iostream>

using namespace std;

int main(){
    int prin,time,sim;
    cout<<"Enter the principal amount and time:";
    cin>>prin>>time;
    sim=(time>10)?((prin*time*8)/100):((prin*time*12)/100);
    cout<<"The simple interet is "<<sim;
}