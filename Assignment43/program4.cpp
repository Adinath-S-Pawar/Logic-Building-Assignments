/////////////////////////////////////////////////////////////////// 
//
// File name : program4.cpp
// Description : Maximum digit using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int Min(int num)
{
    if (num < 10)
    {
        return num;
    }
        
    int lastDigit = num % 10;
    int minimum = Min(num / 10);

    if(lastDigit < minimum) 
    {
        return lastDigit;
    }
    else
    {
        return minimum;
    } 
}

int main()
{
    int iValue = 0;  
    int iRet = 0;

    cout << "Enter Number: \n";
    cin>>iValue;

    iRet = Min(iValue);
    cout <<iRet << endl;

    return 0;
}