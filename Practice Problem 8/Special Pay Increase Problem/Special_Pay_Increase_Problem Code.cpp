#include<stdio.h>
void employee::get(ifstream& File)
{
    File>>lastName>>firstName>>salary>>inc;
}

void employee::print()
{
    cout<<lastName<<endl<<firstName<<endl;
    printf("%.2lf\n",salary);
}

void employee::update_Sal()
{
    salary+=(inc/100)*salary;
}

main()
{
    char Name_of_File[20];
    cin>>Name_of_File;
    ifstream File;
    File.open(Name_of_File,ios::in);
    employee emp;
    while(!File.eof())
    {
        emp.get(File);
        emp.update_Sal();
        emp.print();
    }
}
