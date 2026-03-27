#include<iostream>
using namespace std;

typedef struct Employee
{
    int eId;//4 memory allocate
    char favChar;//1 memory allocate
    float salary;//4 memory allocate
} ep ;
/*
hum log typedef ko tab use karte hai struct employee ko  short form mein likna hoga 
*/



union money
{
    int rice; //4 memory allocate
    char car; //1 memory allocate 
    float pounds; //4 memory allocate
};
    
/*
union mein hm log koi aak he type ka datatype le sakte hai 
wo chahe rice , car ya fir pounds ho
*/




int main(){

    enum Meal{ breakfast , lunch , dinner};
    Meal m1 = lunch; 
    cout<<(m1==1)<<endl; 

    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;


    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car<<endl;

    struct Employee aryan;
    // also we use ep aryan with the help of datatype
    struct Employee shubham;
    struct Employee rohandas;
    aryan.eId = 2;
    aryan.favChar= 'c';
    aryan.salary = 12000000;

    cout<<"The value is "<<aryan.eId<<endl;
    cout<<"The value is "<<aryan.favChar<<endl;
    cout<<"The value is "<<aryan.salary<<endl;

    return 0;
}
