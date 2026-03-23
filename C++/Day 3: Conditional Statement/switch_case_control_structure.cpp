#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    // Selection Control structure -> Switch Cases Statement

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 5:
        cout<<"You are 5"<<endl;
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with Switch Cases"<<endl;

    return 0;
}
