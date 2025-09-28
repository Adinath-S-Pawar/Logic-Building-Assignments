/////////////////////////////////////////////////////////////////// 
//
// File name : program2.cpp
// Description : Maximum digit using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int MaxDigit(int num)
{
    if (num == 0)
    {
        return 0;
    }
        
    int lastDigit = num % 10;
    int maxInRest = MaxDigit(num / 10);

    if(lastDigit > maxInRest) 
    {
        return lastDigit;
    }
    else
    {
        return maxInRest;
    } 
}

int main()
{
    int iValue = 0;  
    int iRet = 0;

    cout << "Enter Number: \n";
    cin>>iValue;

    iRet = MaxDigit(iValue);
    cout <<iRet << endl;

    return 0;
}