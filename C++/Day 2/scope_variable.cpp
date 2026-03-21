#include<iostream>
using namespace std;

int c = 77;  // global variable 

// Built in Data Types************

int main (){
    int a,b,c;

    cout<<"Enter the value of a:"<<endl;
    cin>>a;

    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    c = a+b;

    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c;   // '::' --> This is scope resolution operator

    return 0;

}
