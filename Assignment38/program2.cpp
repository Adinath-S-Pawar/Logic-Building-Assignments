/////////////////////////////////////////////////////////////////// 
//
// File name : program2.cpp
// Description : find max from 3 numbers (generic)
// Author : Adinath Santosh Pawar
// Date : 30/6/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std; 

template<class T>
T Max(T no1, T no2, T no3)
{
    if(no1 >= no2 && no1 >= no3)
    {
        return no1;
    }
    else if(no2 >= no1 && no2 >= no3)
    {
        return no2;
    }
    else
    {
        return no3;
    }
}
int main()
{
    int iRet = Max(10,20,30);
    cout<<"Max is "<<iRet<<endl;

    iRet = Max(10,10,5);
    cout<<"Max is "<<iRet<<endl;

    float fRet = Max(10.1f,10.1f,10.1f);
    cout<<"Max is "<<fRet<<endl;

    return 0;
}