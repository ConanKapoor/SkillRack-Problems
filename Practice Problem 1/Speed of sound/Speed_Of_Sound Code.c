#include<stdio.h>
#include<math.h>
main()
{
    float T,a;
    scanf("%f",&T);
    a=1086*(pow((((5*T)+297)/247),0.5));
    printf("%.2f",a);
}
