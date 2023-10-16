// WAP to display the areas of a circle rectangle triangle and sqaure using a function
#include <iostream>

using namespace std;

int arcir(){
    int rad,result;
    cout<<"Enter the radius:";
    cin>>rad;
    result=3.14*rad*rad;
    cout<<"The area of the circle:"<<result;
    return 0;
}

int arrec(){
    int l,b,result;
    cout<<"Enter the length:";
    cin>>l;
    cout<<"Enter the breadth:";
    cin>>b;
    result=l*b;
    cout<<"The area of the rectangle:"<<result;
    return 0;
}

int arsq(){
    int side,result;
    cout<<"Enter the :";
    cin>>side;
    result=side*side;
    cout<<"The area of the square:"<<result;
    return 0;
}

int artriangle(){
    int h,b,result;
    cout<<"Enter the height:";
    cin>>h;
    cout<<"Enter the base:";
    cin>>b;
    result=0.5*h*b;
    cout<<"The area of the circle:"<<result;
    return 0;
}

int main()
{
    int choice;
    cout<<"Area Calculator"<<"\n";
    cout<<"1.Circle\n"<<"2.Rectangle\n"<<"3.Square\n"<<"4.Triangle\n";
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice){
        case 1:
            arcir();
            break;
        case 2:
            arrec();
            break;
        case 3:
            arcir();
            break;
        case 4:
            arcir();
            break;
        default:
            cout<<"Not a valid choice";
            break;
    }
    return 0;
}