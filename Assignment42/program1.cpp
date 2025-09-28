/////////////////////////////////////////////////////////////////// 
//
// File name : program1.cpp
// Description : Pattern printing using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = iNo;

    if(i > 0)
    {
        cout<<i<<" * ";
        i--;
        Display(i);
    }
}


int main()
{
    Display(5);

    return 0;
}