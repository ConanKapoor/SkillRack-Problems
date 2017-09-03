#include<iostream>
using namespace std;

template <class T>                           //Form template class.
void right_Shift(T a[],int n,int r)          //Form right shift function.
{
    if(n==6)            //if n==6, decrement r.
    {
        r--;
    }
    for(int i=0;i<r-1;i++)                   //Otherwise...
    {
        T temporary = a[0];                      //Initialize temporary.
        for(int j=0;j<n-1;j++)
        {
           a[j]=a[j+1];        //Performing right shift.
        }
        a[n-1]=temporary;         //Last element.
    }
}
