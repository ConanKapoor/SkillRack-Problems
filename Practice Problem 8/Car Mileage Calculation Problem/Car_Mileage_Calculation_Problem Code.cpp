#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
main()
{
    int car, count=0;
    char Name_of_file[100];
    cin>>Name_of_file;
    float miles_driven,gallons,Total_Miles=0,Total_Gallons=0,Average,Total_Avg=0;
    fstream File;
    File.open(Name_of_file,ios::in);
    while(!File.eof())
    {
        File>>car>>miles_driven>>gallons;
        Average=miles_driven/gallons;
        Total_Miles+=miles_driven;
        Total_Gallons+=gallons;
        Total_Avg+=Average;
        printf("%d %.2f %.2f %.2f\n",car,miles_driven,gallons,Average);
        count++;
    }
    printf("%.2f\n%.2f\n%.2f\n%.2f",Total_Miles,Total_Gallons,Total_Avg,Total_Avg/count);
}
