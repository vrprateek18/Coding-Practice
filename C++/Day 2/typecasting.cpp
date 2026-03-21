#include<iostream>
using namespace std;

int main (){

    int a=46;
    float b=46.5;

    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c=int(b);

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    cout<<"The expression is "<<a+int(c)<<endl;

    return 0;
    
}
