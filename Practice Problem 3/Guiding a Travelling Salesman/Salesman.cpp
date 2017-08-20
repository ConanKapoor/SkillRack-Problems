#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,Routes=1;
    string homecity;
    cin>>n;
    string city[n];
    for(i=0;i<n;i++)
    {
        cin>>city[i];
    }
    cin>>homecity;
    for(i=1;i<n;i++)
    {
        Routes=Routes*i;
    }
    cout<<Routes;
}
