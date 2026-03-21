#include<iostream>
using namespace std;

// floats,double and long double Literals******
 
int main (){
float d=34.4f;  // 'f' isliye put kiya gya kyuki ye 'float' and 'long double' mein difference hai 
long double e=34.4l;


cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e; 

return 0;
}
