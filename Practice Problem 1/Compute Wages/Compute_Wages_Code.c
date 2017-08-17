#include<stdio.h>
main()
{
    int Id_No,Hours;
    float Rate,Salary,Extra,Tax,Final;
    scanf("%d",&Id_No);
    scanf("%f",&Rate);
    scanf("%d",&Hours);

    if (Hours>40)
        Salary=40*Rate;
        Extra=Salary+(1.5*(Hours-40)*Rate);
    else
        Salary=Hours*Rate;
        Extra=Salary;

    Tax=(3.625/100)*Extra;
    Final=Extra-Tax;
    Final=round(Final*100)/100;
    printf("%0.2f",Final);
}
