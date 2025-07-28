/////////////////////////////////////////////////////////////////// 
//
// File name : program3.cpp
// Description : generic program to accept N values and search 
// first occurence of any specific value
// Author : Adinath Santosh Pawar
// Date : 30/6/25
// 
///////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T * arr, int iSize, T iNo)
{
    int i = 0;
    for(i = 0; i<iSize; i++)
    {
        if(arr[i] == iNo)
        {
            break;
        }
    }
    if(i  == iSize)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    cout<<iRet<<endl;

    iRet = SearchFirst(arr,9,50);
    cout<<iRet<<endl;
    return 0;
}