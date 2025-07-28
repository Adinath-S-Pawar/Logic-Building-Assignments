/////////////////////////////////////////////////////////////////// 
//
// File name : program5.cpp
// Description : find min element in array (generic)
// Author : Adinath Santosh Pawar
// Date : 30/6/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std; 

template<class T>
T Min(T* arr, int iSize)
{
    T iMin = arr[0];

    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(iMin > arr[i] )
        {
            iMin = arr[i];
        }
    }

    return iMin;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Min(arr,5);
    cout<<iRet<<endl;

    float fRet = Min(brr,4);
    cout<<fRet<<endl;

    return 0;
}