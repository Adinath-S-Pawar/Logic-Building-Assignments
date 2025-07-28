/////////////////////////////////////////////////////////////////// 
//
// File name : program3.cpp
// Description : find sum of all element in array (generic)
// Author : Adinath Santosh Pawar
// Date : 30/6/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std; 

template<class T>
T AddN(T* arr, int iSize)
{
    T isum = NULL;

    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        isum = isum + arr[i]; 
    }

    return isum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = AddN(arr,5);
    cout<<iSum<<endl;

    float fSum = AddN(brr,4);
    cout<<fSum<<endl;

    return 0;
}