/////////////////////////////////////////////////////////////////// 
//
// File name : program4.cpp
// Description : find max element in array (generic)
// Author : Adinath Santosh Pawar
// Date : 30/6/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std; 

template<class T>
T Max(T* arr, int iSize)
{
    T iMax = NULL;

    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(iMax < arr[i] )
        {
            iMax = arr[i];
        }
    }

    return iMax;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Max(arr,5);
    cout<<iRet<<endl;

    float fRet = Max(brr,4);
    cout<<fRet<<endl;

    return 0;
}