/////////////////////////////////////////////////////////////////// 
//
// File name : program3.c
// Description : Count small characters using recursion
// Author : Adinath Santosh Pawar
// Date : 21/7/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int WhiteSpace(char *str)
{
    if (*str == '\0')
    {
        return 0;
    }

    if(*str  >= 'a' && *str  <= 'z')
    {
        return 1 + WhiteSpace(str + 1);
    }
    else
    {
        return WhiteSpace(str + 1);
    }
}

int main()
{
    char Arr[20];
    int iRet = 10;

    cout<<"enter string\n";
    cin.getline(Arr,20);

    iRet = WhiteSpace(Arr);
    cout<<iRet;
}