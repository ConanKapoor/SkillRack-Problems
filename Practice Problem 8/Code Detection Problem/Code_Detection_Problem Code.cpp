#include<iostream>
#include<string>
#include<fstream>
using namespace std;
main()
{
    fstream File;
    char name_of_file[20];
    cin>>name_of_file;
    File.open(name_of_file,ios::in);
    int length,length2;
    while(!File.eof())
    {
        int a=0,b,c=0,d;
        File>>length;
        for(int i=0;i<length;i++)
        {
            File>>b;
            a=10*a+b;
        }
        File>>length2;
        for(int i=0;i<length2;i++)
        {
            File>>d;
            c=10*c+d;
        }
        if(a==c)
            cout<<"Message transmitted ok\n";
        else
            cout<<"Message transmitted is not ok\n";
    }
}
