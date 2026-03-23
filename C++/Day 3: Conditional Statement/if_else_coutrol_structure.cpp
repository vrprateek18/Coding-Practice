#include<iostream>
using namespace std;

int main (){

    int age ;

    cout<<"Tell me your age:"<<endl;
    cin>>age;
    if ((age<18) && (age>0)){
        cout<<"You are not eligible for party"<<endl;       
    }
    else if(age==18){
        cout<<"You are a kid you need to get a kid pass"<<endl;
    }
    else if (age<1){
        cout<<"You are not born"<<endl;
    }
    else{
        cout<<"You are eligible for the party"<<endl;
    }
    return 0;
}
