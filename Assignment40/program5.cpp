/////////////////////////////////////////////////////////////////// 
//
// File name : program4.cpp
// Description : Pattern printing using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Display()
{
    static char ch = 'a';

    if(ch <= 'f')
    {
        cout<<ch<<" ";
        ch++;
        Display();
    }
}


int main()
{
    Display();

    return 0;
}