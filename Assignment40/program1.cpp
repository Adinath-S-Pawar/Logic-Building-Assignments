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

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        cout<<"* ";
        i++;
        Display();
    }
}


int main()
{
    Display();

    return 0;
}