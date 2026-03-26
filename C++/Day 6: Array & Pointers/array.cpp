#include<iostream>
using namespace std;
    
int main(){

    // Array Example
    int marks [] = {23, 43, 76, 97};

    int mathsMarks[4];
    mathsMarks[0] = 745;
    mathsMarks[1] = 645;
    mathsMarks[2] = 355;
    mathsMarks[3] = 965;

    cout<<"These are the marks"<<endl;
    // you can change the value of an array
    marks[2]=50;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"These are the mathsMarks"<<endl;
    cout<<mathsMarks[0]<<endl;
    cout<<mathsMarks[1]<<endl;
    cout<<mathsMarks[2]<<endl;
    cout<<mathsMarks[3]<<endl;


    // abb isi ko loop mein kiya hai 

    /*
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    */



    // Pointers and Arrays

    int *p= marks;

    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;


    return 0;
}
