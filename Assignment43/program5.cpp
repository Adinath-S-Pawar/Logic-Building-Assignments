/////////////////////////////////////////////////////////////////// 
//
// File name : program5.cpp
// Description : Reverse digit using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int ReverseHelper(int iNo, int rev)
{
    if (iNo == 0)
    {
        return rev;
    }
    
    rev = rev * 10 + iNo % 10;
    return ReverseHelper(iNo / 10, rev);
}

int Reverse(int iNo)
{
    return ReverseHelper(iNo, 0);
}

int main()
{
    int iValue = 0;  
    int iRet = 0;

    cout << "Enter Number: \n";
    cin>>iValue;

    iRet = Reverse(iValue);
    cout<<iRet;

    return 0;
}