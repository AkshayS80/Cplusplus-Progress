// WAP to print the fibonacci series
#include <iostream>

using namespace std;

int main(){
    int n,t1,t2,t3,i;
    cout<<"Enter the number of terms:";
    cin>>n;
    cout<<"Fibonacci Series:\n";
    t1=0;
    t2=1;
    cout<<t1<<" ";
    cout<<t2<<" ";
    for(i=2;i<=n;i++){
        t3=t1+t2;
        cout<<t3<<" ";
        t1=t2;
        t2=t3;
    }
    return 0;
}
