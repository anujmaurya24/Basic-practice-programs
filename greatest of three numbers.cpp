/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
#include<stdio.h>
int main()
{
    int A,B,C;
    cout<<"Enter numbers";
    cin>>A>>B>>C;
    
    if(A>B)
    {
        if(A>C){cout<<"A is greatest";}
        else {cout<<"C is greatest";}
    }
    
    else
    {
        if(B>C){cout<<"B is greatest";}
        else {cout<<"C is greatest";}
    }
    

    return 0;
}
