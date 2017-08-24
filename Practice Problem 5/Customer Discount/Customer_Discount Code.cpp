#include<iostream>
#include<stdio.h>
using namespace std;

class Customer_Details
{
    protected:
        char Name[20];
        char Mobile_no[15];
        char Address[50];
    public:
        void get()
        {
            cin>>Name>>Mobile_no>>Address;
        }
};
class customer:public Customer_Details
{
    char Customer_Id[20];
    int no_Of_Bills;
    int Cost[30];
    public:
        void get()
        {
            Customer_Details::get();
            cin>>Customer_Id>>no_Of_Bills;
            for(int i=0;i<no_Of_Bills;i++)
            {
                cin>>Cost[i];
            }
        }
        int calc_Total()
        {
            int Total=0;
            for(int i=0;i<no_Of_Bills;i++)
            {
                Total+=Cost[i];
            }
            return Total;
        }
};

class preferred_Customer:public Customer_Details
{
    char Customer_Id[20];
    int no_Of_Bills;
    int Cost[30];
    public:
        void get()
        {
            Customer_Details::get();
            cin>>Customer_Id>>no_Of_Bills;
            for(int i=0;i<no_Of_Bills;i++)
            {
                cin>>Cost[i];
            }
        }
        int calc_Total()
        {
            float Total=0;
            for(int i=0;i<no_Of_Bills;i++)
            {
                if(Cost[i]>=20000)
                    Total+=Cost[i]*(1-0.04*(i+1));
                else if(Cost[i]>=15000)
                    Total+=Cost[i]*(1-0.03*(i+1));
                else if(Cost[i]>=10000)
                    Total+=Cost[i]*(1-0.02*(i+1));
                else if(Cost[i]>=5000)
                    Total+=Cost[i]*(1-0.01*(i+1));
                else
                    Total+=Cost[i];
            }
            return (int)Total;
        }
};
