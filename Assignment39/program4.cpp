/////////////////////////////////////////////////////////////////// 
//
// File name : program4.cpp
// Description : generic program to accept N values and search 
// last occurence of any specific value
// Author : Adinath Santosh Pawar
// Date : 30/6/25
// 
///////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template<class T>
int SearchLast(T * arr, int iSize, T iNo)
{
    int i = 0, iPos = -1;
    for(i = 0; i<iSize; i++)
    {
        if(arr[i] == iNo)
        {
            iPos = i;
        }
    }
    if(iPos  == -1)
    {
        return -1;
    }
    else
    {
        return iPos + 1;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);
    cout<<iRet<<endl;

    iRet = SearchLast(arr,9,50);
    cout<<iRet<<endl;
    return 0;
}