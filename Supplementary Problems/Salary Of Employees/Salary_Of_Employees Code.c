#include<stdio.h>
typedef struct
{
    char name_of_emp[20];
    int ID,HRA,Basic;
    float DA;
}employee;

int main()
{
    int n,i;                               //Initiate i and n as int.
    int salary=0;                          //Initialize salary=0 as int.
    scanf("%d",&n);                        //Read n.
    employee emp[n];                       //Make an array of length n.
    for(i=0;i<n;i++)
    {
        scanf("%s", emp[i].name_of_emp);
        scanf("%d",&emp[i].ID);
        scanf("%d",&emp[i].Basic);        //Read data.
        scanf("%f",&emp[i].DA);
        scanf("%d",&emp[i].HRA);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",emp[i].ID);
        salary=emp[i].Basic + emp[i].Basic*((emp[i].DA)/100)+ emp[i].HRA;  //Print emp ID and salary.
        printf("%d\n",salary);
    }
}
