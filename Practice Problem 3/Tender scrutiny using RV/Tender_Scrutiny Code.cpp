#include<iostream>
#include<stdio.h>
using namespace std;
class vendor
{
    private:
        int registration;
        string address;
        float price;
    public:
        void get();
        void print();
        float retprice();
};
void vendor::get()
{
    cin>>registration;
    cin>>address;
    cin>>price;
}
void vendor::print()
{
    cout<<registration<<endl<<address;
}
float vendor::retprice()
{
    return price;
}
void findvendor(vendor &a,vendor arr[20], int number)
{
    int i,pos;
    a=arr[0];
    for(i=0;i<number-1;i++)
    {
            for(int j=i+1;j<number;j++)
            {
                if(a.retprice()>arr[j].retprice())
                {
                        a=arr[j];
                }
            }
    }
}
int main()
{
    vendor candidate,vendorlist[20];
    int i,number;
    cin>>number;
    for(i=0;i<number;i++)
        vendorlist[i].get();
    findvendor(candidate,vendorlist,number);
    candidate.print();
    return 0;
}
