#include<iostream>
using namespace std;
    
int main(){
    for (int i = 0; i < 4; i++)
    {
        /* code */
        if (i==2)
        {
            continue;
        }
        cout<<i<<endl;
    }
    /*
    in this we skip that no. 
    */
    return 0;
}
