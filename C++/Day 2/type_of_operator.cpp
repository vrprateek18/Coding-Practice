#include<iostream>

using namespace std;

int main (){
    int a=4,b=6;
a++;
    cout<<"Following are the types of operator in C++"<<endl;
    //Arithmetic operator
    cout<<"the value of a + b is:"<<a+b<<endl;
    cout<<"the value of a - b is:"<<a-b<<endl;
    cout<<"the value of a * b is:"<<a*b<<endl;
    cout<<"the value of a / b is:"<<a/b<<endl;
    cout<<"the value of a % b is:"<<a%b<<endl;
    cout<<"the value of a++ is:"<<a<<endl;
    cout<<"the value of a-- is:"<<a--<<endl;
    cout<<"the value of ++a is:"<<++a<<endl;
    cout<<"the value of --a is:"<<--a<<endl;
    cout<<endl;

    //Assignment Operators --> used to assign the values to variables

    //int a=3 , b=8;
    //char d='d'; 


    //Comparison operators 
    cout<<"Following are the comparison operator in C++"<<endl;

    cout<<"The value of a == b is "<<(a==b)<<endl;//---> a is equal to b
    cout<<"The value of a != b is "<<(a!=b)<<endl;//---> a not equal to
    cout<<"The value of a >= b is "<<(a>=b)<<endl;//---> Greater than equal to
    cout<<"The value of a <= b is "<<(a<=b)<<endl;//---> less than equal to
    cout<<"The value of a > b is "<<(a>b)<<endl;//---> greater than
    cout<<"The value of a < b is "<<(a<b)<<endl;//---> less than 
    

    //Logical operator
    cout<<"Following are the logical operator in C++"<<endl;

    cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl; //---> logical and operator
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl; //---> logical or operator
    cout<<"The value of this logical not operator !(a==b) is: "<<!(a==b)<<endl; //---> logical not operator

    return 0;

}

/*
if answer will come 1 that mean it is correct 
if answer will come 0 that mean it is false in compiler
*/
