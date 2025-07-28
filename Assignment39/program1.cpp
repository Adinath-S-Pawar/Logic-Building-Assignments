/////////////////////////////////////////////////////////////////// 
//
// File name : program1.cpp
// Description : generic program which accept value and number from 
// user and print value that number of times
// Author : Adinath Santosh Pawar
// Date : 30/6/25
// 
///////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template<class T>
void Display(T value , int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7, 6);
    return 0;
}