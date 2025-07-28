/////////////////////////////////////////////////////////////////// 
//
// File name : program5.cpp
// Description : generic program to accept N values and reverse 
// content
// Author : Adinath Santosh Pawar
// Date : 30/6/25
// 
///////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

template<class T>
void Reverse(T * arr, int iSize)
{
    int start = 0;
    int end = iSize - 1;

    while(start < end)
    {
        T temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int i = 0;
    for(i = 0; i<9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Reverse(arr,9);

    for(i = 0; i<9; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}