#include<iostream>
#include<iomanip>
using namespace std;

class student_details
{
        char Name[20];
        int blah,Age,English,SecondLanguage,Maths,Physics,Chemistry,ComputerScience;
    public:
        void get()
        {
            cin>>blah>>Name>>Age>>English>>SecondLanguage>>Maths>>Physics>>Chemistry>>ComputerScience;
        }
};

class engg_Appln:public student_details
{
    float cut_off;
    int entrance_Marks;
    public:
        void get()
        {
            student_details::get();
            cin>>entrance_Marks;
        }
        void calc_Cutoff()
        {
            cut_off=(((float)Maths+Physics+Chemistry)/3)+entrance_Marks;
        }
        void print()
        {
            cout<<Name<<endl<<fixed<<setprecision(2)<<cut_off;
        }
};

class arts_Appln:public student_details
{
    float cut_off;
    public:
        void get()
        {
            student_details::get();
        }
        void calc_Cutoff()
        {
            cut_off=((float)English+SecondLanguage+Maths+Physics+Chemistry+ComputerScience)/6;
        }
        void print()
        {
            cout<<Name<<endl<<fixed<<setprecision(2)<<cut_off;
        }
};
