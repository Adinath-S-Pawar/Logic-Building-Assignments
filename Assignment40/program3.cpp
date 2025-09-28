/////////////////////////////////////////////////////////////////// 
//
// File name : program3.cpp
// Description : Pattern printing using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Display()
{
    static int i = 5;

    if(i >= 1)
    {
        cout<<i<<" ";
        i--;
        Display();
    }
}


int main()
{
    Display();

    return 0;
}