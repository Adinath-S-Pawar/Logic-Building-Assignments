/////////////////////////////////////////////////////////////////// 
//
// File name : Assignment37.cpp
// Description : Array functions to find frequency of element,
//  find first and last occurence of element, count even odd element,
//  return sum of all element
// Author : Adinath Santosh Pawar
// Date : 30/6/25
// 
///////////////////////////////////////////////////////////////////

#include<iostream> 
using namespace std;

class Array
{
    protected:  
        int *Arr;
        int size;
    public:
        Array(int value = 10)
        {
            cout<<"Inside Connstructor\n";
            this->size = value;
            this->Arr = new int[size];
        }
        Array(Array &ref)
        {
            cout<<"Inside copy connstructor\n";
            this->size = ref.size;
            this->Arr = new int[this->size];

            for(int i=0;i<size;i++)
            {
            this->Arr[i] = ref.Arr[i];
            }

        }
                
        ~Array()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;
        }

        inline void Accept();
        inline void Display();

};

void Array::Accept()
{
    cout<<"Please enter the values\n";
    for(int i=0;i<this->size;i++)
    {
        cin>>Arr[i];
    }
}
void Array:: Display()
{
    cout<<"Elements are\n";
    for(int i=0;i<this->size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";

}

class ArrSearch: public Array
{
    public:
        ArrSearch(int no = 10): Array(no) // calls the constructor of the base class Array
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();

};

int ArrSearch:: SearchFirst(int value)
{
    int i = 0;

    for( i = 0; i< size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == size)
    {   
        return -1;
    }
    else
    {
        return i + 1;
    }

}

int ArrSearch:: Frequency(int value)
{
    int icnt = 0;

    for(int i = 0; i<size; i++)
    {
        if(Arr[i] == value)
        {
            icnt++;
        }
    }
    return icnt;
}

int ArrSearch::SearchLast(int value)
{
    int i = 0;
    int iPos = -1;

    for( i = 0; i< size; i++)
    {
        if(Arr[i] == value)
        {
            iPos = i;
        }
    }

    if(iPos == -1)
    {   
        return -1;
    }
    else
    {
        return iPos + 1;
    }
}


int ArrSearch:: EvenCount()
{ 
    int i = 0, iCount = 0;

    for( i = 0; i< size; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int ArrSearch:: OddCount()
{
    int i = 0, iCount = 0;

    for( i = 0; i< size; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iCount++;
        }
    }

    return iCount;
}
int ArrSearch::SumAll()
{
    int i = 0, iSum = 0;

    for( i = 0; i< size; i++)
    {
        iSum = iSum + Arr[i];
    }

    return iSum;
}

int main()
{
    cout<<"Inside main\n";

    ArrSearch sobj1(5);

    sobj1.Accept();
    sobj1.Display();

    int iret = sobj1.Frequency (11);
    cout<<"Frequency is "<<iret<<"\n";

    iret = sobj1.SearchFirst(11);
    cout<<"First occurence is  "<<iret<<"\n";

    iret = sobj1.SearchLast(11);
    cout<<"Last occurence is  "<<iret<<"\n";

    iret = sobj1.EvenCount();
    cout<<"Even count is  "<<iret<<"\n";

    iret = sobj1.OddCount();
    cout<<"odd count is  "<<iret<<"\n";

    iret = sobj1.SumAll();
    cout<<"Sum is  "<<iret<<"\n";
    
    return 0;

}